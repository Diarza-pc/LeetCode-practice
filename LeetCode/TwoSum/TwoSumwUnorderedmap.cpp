#include <iostream>
#include <vector>
#include <unordered_map>

class Solution{
    public:
        std::vector<int> twoSum(std::vector<int>&nums, int target){
            std::unordered_map<int, int> Couple;

            for(int i = 0; i < nums.size(); i++) {
                int anotherElement = target - nums[i];

                if(Couple.count(anotherElement)) {
                    return{Couple[anotherElement], i};
                }

                Couple[nums[i]] = i;
            }

            

            return{};
        }
};

int main() {
    Solution solution;

    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = solution.twoSum(nums, target);
    std::cout << result[0] << " " << result[1];
    
    
    return 0;
}