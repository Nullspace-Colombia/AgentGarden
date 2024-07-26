from ray.rllib.algorithms.ppo import PPOConfig
from unray.envs.base_env import SingleAgentEnv
from unray.envs.spaces import BridgeSpaces
import numpy as np
from unray.unray_config import UnrayConfig
from ray.rllib.algorithms.algorithm import Algorithm
import matplotlib.pyplot as plt
from ray.rllib.algorithms.dqn import DQNConfig

high = np.array(
    [10000]*36,
    dtype=np.float64,
)


dqn_config = DQNConfig()
dqn_config = dqn_config.training(
    gamma=0.95,
    lr=0.0001,
    #buffer_size=50000, #permite que aprenda con mayor variedad de experiencias
    #learning_starts=1000, #permite recolectar suficiente informacion antes de actualizar la red neuronal
    #target_network_update_freq=500, #Mejora la estabilidad
)
dqn_config = dqn_config.resources(num_gpus=1)
dqn_config = dqn_config.rollouts(num_rollout_workers=6)



# Actions are : moving (forward, left, right, stop)
# All actions can be performed at the same time, and have state 0 and 1, for pressed and not pressed
env_config = {
    "observation": BridgeSpaces.Box(-high, high),
    "action":BridgeSpaces.Discrete(5)
}

# Create unray object
unray_config = UnrayConfig()

# Path
path = "checkpoints/SoccerAgent/T1" #"E:/Universidad/Codigo/Nullspace/UE5/AgentGardenProject/Models/soccer-v2" R5
path2 = "checkpoints/SoccerAgent/T1"
# Create instance of single agent environment
env = SingleAgentEnv(env_config, "soccer")

# Create algo instance
algo = unray_config.configure_algo(dqn_config, env)

#algo.restore(path) #= Algorithm.from_checkpoint(path)
mean_ = []
min_ = []
max_ = []
episodes = []
# Train
for i in range (201):
    print("Iteración:"f" '{i}'")
    result = algo.train()

    print(f"EPISODE REWARD MEAN | {result['episode_reward_mean']} |")

    if i % 5 == 0:
        save_result = algo.save(path2)#("C:/Users/gonza/AppData/Local/Temp/tmp10hjh2wd")
        print("An Algorithm checkpoint has been created inside directory: "f"'{save_result}'.")



