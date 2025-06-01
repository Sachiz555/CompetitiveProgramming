#include <vector>
#include <iostream>
#include <algorithm>
int maxCoins(std::vector<int>& piles) {
    std::sort(piles.begin(), piles.end(), std::greater<int>());
    int highest = 0;
    int removeCoinsFromBob = piles.size() * 2/3;

    for(int i=1; i<removeCoinsFromBob; i+=2){
        highest += piles[i];
    }
    return highest;
}