#include <iostream>
#include <vector>
// https://leetcode.com/problems/valid-mountain-array/description/
bool validMountainArray(std::vector<int>& arr) {
    int i = 0;
    for(i; i<arr.size()-1; i++){
        if(arr[i] == arr[i+1]){
            return false;
        }
        if(arr[i] > arr[i+1]){
            break;
        }
}
    if(i == 0){
        return false;
    }
    std::cout << i << " " << arr.size()-2 << " ";
    if(i == arr.size()-1){
        i--;
        if(arr[i] < arr[i+1]){
            return false;
        }
        return true;
    }
    for(i; i<arr.size()-1; i++){
        if(arr[i] < arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    std::vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << validMountainArray(arr);
}