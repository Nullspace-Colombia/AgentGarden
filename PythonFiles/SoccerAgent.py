from ray.rllib.algorithms.ppo import PPOConfig
from unray.envs.base_env import SingleAgentEnv
from unray.envs.spaces import BridgeSpaces
import numpy as np
from unray.unray_config import UnrayConfig
from ray.rllib.algorithms.algorithm import Algorithm

high = np.array(
    [10000]*30,
    dtype=np.float32,
)

obs_config = {
    "space": BridgeSpaces.Box(-high, high),
    "description": "Observaciones"
}

act_config = {
    "space": BridgeSpaces.MultiDiscrete([2,3]),
    "description": "Acciones"
}

ppo_config = PPOConfig()

#ppo_config = ppo_config.training(gamma=0.9, lr=0.01, kl_coeff=0.3, vf_clip_param=20000)
ppo_config = ppo_config.resources(num_gpus=0)
ppo_config = ppo_config.rollouts(num_rollout_workers=0)



# Actions are : moving (forward, left, right, stop)
# All actions can be performed at the same time, and have state 0 and 1, for pressed and not pressed
env_config = {
    "observation": BridgeSpaces.Box(-high, high),
    "action":BridgeSpaces.MultiDiscrete([2,3])
}

# Create unray object
unray_config = UnrayConfig()

# Path
path = "C:/Users/semil/Documents/modelos/Soccer"

# Create instance of single agent environment
env = SingleAgentEnv(env_config, "car_env")

# Create algo instance
algo = unray_config.configure_algo(ppo_config, env)

#algo.restore(path) #= Algorithm.from_checkpoint(path)

# Train
for i in range (100):
    algo.train()
    print("Episodio:"f" '{i}'")
    if i % 5 == 0:
        save_result = algo.save(path)#("C:/Users/gonza/AppData/Local/Temp/tmp10hjh2wd")
        print("An Algorithm checkpoint has been created inside directory: "f"'{save_result}'.")
