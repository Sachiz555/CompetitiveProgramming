// https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/description/
#include <iostream>
#include <vector>
int countSubarrays(std::vector<int>& nums) {
    int counter = 0;
    for(int i=1; i<nums.size()-1; i++){
        if(nums[i] == 2*(nums[i-1] + nums[i+1])){
            counter++;
        }
    }
    return counter;
}