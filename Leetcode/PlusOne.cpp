#include <vector>
#include <iostream>
// https://leetcode.com/problems/plus-one/description/
int main(){
    std::vector<int> digits = {8, 9, 9, 9};
    std::vector<int> ans = digits;
    for(int i=digits.size()-1; i>-1; i--){
        ans[i] = digits[i]+1;
        if(digits[i] != 9){
            break;
        }
        ans[i] = 0;
        if(i == 0){
            ans.insert(ans.begin() + 0, 1);
            break;
        }
        ans[i-1] = 1;
    }
    for(auto elm : ans){
        std::cout << elm << " ";
    }
}