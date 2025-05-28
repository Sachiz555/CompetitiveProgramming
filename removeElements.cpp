#include <iostream>
#include <vector>
// https://leetcode.com/problems/remove-element/
void swapElements(int &elm1, int &elm2){
    int temp = elm1;
    elm1 = elm2;
    elm2 = temp;
}
int removeElement(std::vector<int>& nums, int val) {
    int toSwap = nums.size()-1;
    int counter = 0;

    for(int i=nums.size()-1; i>-1; i--){
        if(nums[i] == val){
            swapElements(nums[i], nums[toSwap]);
            toSwap--;
        }
        else{
            counter++;
        }
    }

}
int main(){
    std::vector<int> nums = {3,2,2,3};
    removeElement(nums, 3);
    for(auto &elm : nums){
        std::cout << elm;
    }
}