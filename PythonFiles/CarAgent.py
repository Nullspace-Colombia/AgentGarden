from ray.rllib.algorithms.ppo import PPOConfig
from unray.envs.base_env import SingleAgentEnv
from unray.envs.spaces import BridgeSpaces
import numpy as np
from unray.unray_config import UnrayConfig

high = np.array(
    [10000]*7,
    dtype=np.float32,
)


ppo_config = PPOConfig()

ppo_config = ppo_config.framework("torch")
ppo_config = ppo_config.resources(num_gpus=0)
ppo_config = ppo_config.rollouts(num_rollout_workers=0)


env_config = {
    "observation": BridgeSpaces.Box(-high, high),
    "action":BridgeSpaces.Discrete(2)
}

# Create unray object
unray_config = UnrayConfig()

# Create instance of single agent environment
env = SingleAgentEnv(env_config, "car_env")

# Create algo instance
algo = unray_config.configure_algo(ppo_config, env)

for i in range (5):
    result = algo.train()
    print(f"Iteration {i}")
