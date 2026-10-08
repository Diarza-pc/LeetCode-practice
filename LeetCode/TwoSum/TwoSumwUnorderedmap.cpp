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

    std::vector<int> nums = {14, 8, 23, 1, 94, 37, 52, 6, 71, 19, 43, 88, 5, 60, 29, 77, 33, 2, 99, 16, 47, 61};
    int target = 65;

    std::vector<int> result = solution.twoSum(nums, target);
    std::cout << result[0] << " " << result[1];
    
    
    return 0;
}