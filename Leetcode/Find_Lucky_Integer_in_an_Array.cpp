#include <iostream>
#include <vector>
int findLucky(std::vector<int> &arr){
    std::vector <int> allNumberFrequenues(501);
    int highest = -1;
    
    for(int i=0; i<allNumberFrequenues.size(); i++){
        allNumberFrequenues[i] = 0;
    }
    for(int i=0; i<arr.size(); i++){
        int currentNumber = arr[i];
        allNumberFrequenues[currentNumber]++;
    }
    for(int i=1; i<allNumberFrequenues.size(); i++){
        if(allNumberFrequenues[i] == i){
            highest = std::max(highest, i);
        }
    }
    return highest;
}
int main(){
    std::vector <int> arr = {2, 2, 2, 3, 3};
    std::cout << findLucky(arr);
}