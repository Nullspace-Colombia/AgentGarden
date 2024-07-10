from ray.rllib.algorithms.dqn import DQNConfig
from ray.rllib.algorithms.sac.sac import SACConfig
from unray.envs.base_env import SingleAgentEnv
from unray.envs.spaces import BridgeSpaces
import numpy as np
from unray.unray_config import UnrayConfig
import matplotlib.pyplot as plt
from gymnasium.spaces import Discrete

# Definir los límites de las observaciones
high = np.array([10000]*30, dtype=np.float32)

# Configuración de las observaciones y acciones
obs_config = {
    "space": BridgeSpaces.Box(-high, high),
    "description": "Observaciones"
}

# Crear espacio de acción discreto
num_actions = 3 * 2
action_space = Discrete(num_actions)

# Mapa de acciones discretas a combinaciones MultiDiscrete
action_map = [(i, j) for i in range(3) for j in range(2)]

def map_discrete_action(action):
    return action_map[action]

# Configuración del algoritmo DQN
dqn_config = DQNConfig()
dqn_config = dqn_config.training(
    gamma=0.95,
    lr=0.0001,
    #buffer_size=50000, #permite que aprenda con mayor variedad de experiencias
    #learning_starts=1000, #permite recolectar suficiente informacion antes de actualizar la red neuronal
    #target_network_update_freq=500, #Mejora la estabilidad
)
dqn_config = dqn_config.resources(num_gpus=1)
dqn_config = dqn_config.rollouts(num_rollout_workers=0)

# Configuración del entorno
env_config = {
    "observation": BridgeSpaces.Box(-high, high),
    "action": BridgeSpaces.Discrete(5)
}

# Crear instancia de la configuración Unray
unray_config = UnrayConfig()

# Ruta para guardar y cargar el modelo
path = "C:/Users/Valentina/3_AI/4_Tests/Soccer_Agent/DQN/T1"

# Crear instancia del entorno
env = SingleAgentEnv(env_config, "env1")

# Crear instancia del algoritmo DQN
algo = unray_config.configure_algo(dqn_config, env)

# Restaurar el modelo si es necesario
#algo.restore(path)

# Listas para guardar las recompensas y episodios
mean_ = []
min_ = []
max_ = []
episodes = []

# Entrenar el modelo
for i in range(100):
    result = algo.train()
    print(f"Episodio: '{i}'")
    mean_.append(result['episode_reward_mean'])
    min_.append(result['episode_reward_min'])
    max_.append(result['episode_reward_max'])
    episodes.append(result['episodes_total'])
    print(result)

    if i % 5 == 0:
        save_result = algo.save(path)
        print(f"An Algorithm checkpoint has been created inside directory: '{save_result}'.")

        iters = [j for j in range(i + 1)]
        plt.figure()
        plt.plot(iters, mean_, color='black', label='mean')
        plt.plot(iters, min_, ls='dashed', color='red', label='min')
        plt.plot(iters, max_, ls='dashed', color='blue', label='max')
        plt.xlabel('training steps')
        plt.title('DQN Training Progress')
        plt.legend()
        plt.ylabel('reward')
        plt.savefig(f"Imagenes/iter_{i}")
        plt.close()