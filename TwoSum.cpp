#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    vector<int> nums = {1,2,3};
    int target = 4;
    vector<int> ans;
    unordered_map<int, int> uMap;
    for(int i=0; i<nums.size(); i++){
        uMap[nums[i]] = i;
    }
    
    for(int i=0; i<nums.size(); i++){
        int compliment = target - nums[i];
        if(uMap[compliment] != 0){
            ans.push_back(i);
            ans.push_back(uMap[compliment]);
        }
    }
    cout << ans[0] << " " << ans[1];
}