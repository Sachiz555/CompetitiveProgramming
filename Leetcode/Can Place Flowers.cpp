#include <iostream>
#include <vector>
bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
    const int arraySize = flowerbed.size();
    if(n > (arraySize/2)+1){
        return 0;
    }
    if(arraySize == 1){
        if(flowerbed[0] != 0){
            n--;
            flowerbed[0] == 1;
        }
        if(n < 1){
            return true;
        }
        return false;
    }
    if(flowerbed[0] == 0 && flowerbed[1] == 0){
        flowerbed[0] = 1;
        n--;
    }
    if(flowerbed[arraySize-1] == 0 && flowerbed[arraySize-2] == 0){
        flowerbed[arraySize-1] = 1;
        n--;
    }
    for(int i=1; i<arraySize-2; i++){
        if(flowerbed[i-1] == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0){
            flowerbed[i] = 1;
            n--;
        }
    }
    if(n < 1){
        return true;
    }
    return false;
}
int main(){
    std::vector<int> v1 = {1, 0, 0, 0, 1};
    std::cout << canPlaceFlowers(v1, 2);
}