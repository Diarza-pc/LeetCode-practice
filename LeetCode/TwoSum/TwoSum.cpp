#include <iostream>
#include <vector>

class Solution{
    public:
        std::vector<int> twoSum(std::vector<int>&nums, int target){
            for(int i = 0; i < nums.size(); i++) {
                for(int j = i + 1; j < nums.size(); j++) {
                    if(nums[i] + nums[j] == target) {
                        return{i, j};
                    }
                }
            }
            return{};
        }
};

int main() {
    Solution solution;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> finalResult = solution.twoSum(nums, target);
    std::cout << "Two element that are the solution is on index: " << '\n';
    std::cout << "[" << finalResult[0] << " , " << finalResult[1] << "]" << '\n';
    return 0;
}