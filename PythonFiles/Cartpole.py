from unray.envs.base_env import SingleAgentEnv
from unray.unray_config import UnrayConfig
from unray.envs.spaces import BridgeSpaces 
from ray.rllib.algorithms.ppo import PPOConfig
from ray.tune.registry import register_env
from ray.rllib.algorithms.dreamerv3.dreamerv3 import DreamerV3Config
import matplotlib.pyplot as plt

import numpy as np

high = np.array(
                [
                    1000,
                    np.finfo(np.float32).max,
                    140,
                    np.finfo(np.float32).max,
                ],
                dtype=np.float32,
            )

env_config = {
        "observation": BridgeSpaces.Box(-high, high), 
            "action": BridgeSpaces.Discrete(2)
        }

if __name__ == '__main__':
    """" 
    ppo_config = PPOConfig()

    
    ppo_config = ppo_config.resources(num_gpus=0)  
    ppo_config = ppo_config.rollouts(num_rollout_workers=0) 
    """ 
    config = DreamerV3Config()

    config.rollouts(num_rollout_workers=0)
    config.training(
        model_size="XS",
        training_ratio=1024,
    )
    cartpole = SingleAgentEnv(env_config, "CartpoleEnv")
    
    register_env(cartpole.get_name(), cartpole.get_env())

    unray_config = UnrayConfig()

    algo = config.environment("CartpoleEnv")

    for i in range(15):
        print(f"-------------------TRAINING ITERATION {i}-------------------")
        result = algo.train()

    print(result['episode_reward_mean'])

    