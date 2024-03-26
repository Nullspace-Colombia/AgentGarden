from unray.envs.base_env import MultiAgentEnv
from unray.unray_config import UnrayConfig
from unray.envs.spaces import BridgeSpaces 
from ray.rllib.algorithms.ppo import PPOConfig

env_config  = {
        "agent-1":{
            "observation": BridgeSpaces.MultiDiscrete([64, 64]),
            "action": BridgeSpaces.Discrete(4),
            "can_show": 1, # Amount of observations int obs stack
            "can_see": 2, # Amount of observations required in training 
            "obs_order": {   
                "agent-1": [0], 
                "agent-2": [0]
            }
        }, 
        "agent-2":{
            "observation": BridgeSpaces.MultiDiscrete([64, 64]),
            "action": BridgeSpaces.Discrete(4),
            "can_show": 1, # Amount of observations int obs stack
            "can_see": 2,
            "obs_order": {
                "agent-2": [0], 
                "agent-1": [0]
            }
        }
    }

if __name__ == '__main__':
      
    ppo_config = PPOConfig()

    ppo_config = ppo_config.framework("torch")
    ppo_config = ppo_config.resources(num_gpus=0)  
    ppo_config = ppo_config.rollouts(num_rollout_workers=4) 


    arena = MultiAgentEnv(env_config, "multiagents-arena")
    
    unray_config = UnrayConfig()
    
    algo = unray_config.configure_algo(ppo_config, arena)


    for i in range(5):
        print(f"-------------------TRAINING ITERATION {i}-------------------")
        result = algo.train()

    print(result['episode_reward_mean'])