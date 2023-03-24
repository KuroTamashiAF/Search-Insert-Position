#include <iostream>
#include <vector>

class Solution {
public:
    static int searchInsert(std::vector<int>& nums, int target) {
        int positionCounter = 0;
        if (nums.empty())
            return 0;

        for (int i = 0; i < nums.size(); i++)
        {
            positionCounter++;
            if (nums[i] == target)             // продумать условия 
            {
                return i;
            }
            else if (target < nums[0])
            {
                return 0;
            }
            else if (target > nums[nums.size()-1])
            {
                return nums.size();
            }
            else if(target < nums[i] && target> nums[i-1])
            {
                return i;
            }
            
        }
        return positionCounter;
    }
    
};





int main()
{
    std::vector<int> vec1 = { 1,3,5,6 }; // 2
    int aim1 = 5;
    std::vector<int> vec2 = { 1,3,5,6 }; //1
    int aim2 = 0;
    std::vector<int> vec3 = { 1,3,5,6 }; //4
    int aim3 = 7;
    std::vector<int> vec4 = { 2,5 };
    int aim4 = 1;
    std::vector<int> vec5 = { -1,3,5,6 };
    int aim5 = 0;
    
    std::cout << Solution::searchInsert(vec5, aim5);
    return 0;
}