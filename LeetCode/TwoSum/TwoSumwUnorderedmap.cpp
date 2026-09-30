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
                std::cout << Couple[nums[i]] << '\n';
            }

            

            return{};
        }
};
struct variabel{
    int data;
    int target;
    int trail;
    char quit;
};

int main() {
    Solution solution;
    variabel verb;

    std::vector<int> nums = {3, 2, 4};
    int target = 6;

    solution.twoSum(nums, target);
    
    
    return 0;
}