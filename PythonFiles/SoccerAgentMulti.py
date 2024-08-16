from unray.envs.base_env import MultiAgentEnv
from unray.unray_config import UnrayConfig
from unray.envs.spaces import BridgeSpaces
from ray.rllib.algorithms.ppo import PPOConfig
import numpy as np

high = np.array(
    [10000]*36,
    dtype=np.float32,
)

env_config = {
    "agent-1": {
        "observation": BridgeSpaces.Box(-high, high),
        "action":BridgeSpaces.MultiDiscrete([3,2]),
        "can_show": 36,  #  Amount of observations int obs stack
        "can_see": 0,  #  Amount of observations required in training
        "obs_order": {
            "agent-1":[i for i in range(36)]
        }
    },

"agent-2": {
        "observation": BridgeSpaces.Box(-high, high),
        "action":BridgeSpaces.MultiDiscrete([3,2]),
        "can_show": 36,  #  Amount of observations int obs stack
        "can_see": 0,  #  Amount of observations required in training
        "obs_order": {
            "agent-2":[i for i in range(36)]
        }
    }
}

# Path
path = "C:/Users/semil/Documents/modelos/SoccerMulti/V1" #"E:/Universidad/Codigo/Nullspace/UE5/AgentGardenProject/Models/soccer-v2"
#path1 = "C:/Users/semil/Documents/modelos/SoccerMulti1/V1"

if __name__ == '__main__':

    ppo_config = PPOConfig()

    #ppo_config = ppo_config.framework("torch")
    ppo_config = ppo_config.resources(num_gpus=1)
    ppo_config = ppo_config.rollouts(num_rollout_workers=0)

    arena = MultiAgentEnv(env_config, "soccer-multiagents")

    unray_config = UnrayConfig()

    algo = unray_config.configure_algo(ppo_config, arena)

    for i in range(100):
        result = algo.train()
        print("Episodio:"f" '{i}'")
        print(result)

        if i % 5 == 0:
            save_result = algo.save(path)  # ("C:/Users/gonza/AppData/Local/Temp/tmp10hjh2wd")
            #save_result1 = algo.save(path1)
            print("An Algorithm checkpoint has been created inside directory: "f"'{save_result}'.")


