// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero
#include <iostream>
int main(){
    int num;
    std::cin >> num;
    int counter = 0;
    if(num == 0){
        return 0;
    }
    while(num > 1){
        if(num % 2 == 0){
            num /= 2;
        }
        else{
            num = num - 1;
        }
        counter++;
    }
    std::cout << counter;
    
}