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

# Configuración del algoritmo DQN
config = SACConfig().training(gamma=0.9, lr=0.01, train_batch_size=32)
config = config.resources(num_gpus=1)
config = config.rollouts(num_rollout_workers=0)

# Configuración del entorno
env_config = {
    "observation": BridgeSpaces.Box(-high, high),
    "action": BridgeSpaces.MultiDiscrete([3,2])
}

# Crear instancia de la configuración Unray
unray_config = UnrayConfig()

# Ruta para guardar y cargar el modelo
path = "C:/Users/Valentina/3_AI/4_Tests/Soccer_Agent/DQN/T1"

# Crear instancia del entorno
env = SingleAgentEnv(env_config, "env1")

# Crear instancia del algoritmo DQN
algo = unray_config.configure_algo(config, env)

# Restaurar el modelo si es necesario
#algo.restore(path)

# Entrenar el modelo
for i in range(100):
    result = algo.train()
    print(f"Episodio: '{i}'")

    if i % 5 == 0:
        save_result = algo.save(path)
        print(f"An Algorithm checkpoint has been created inside directory: '{save_result}'.")