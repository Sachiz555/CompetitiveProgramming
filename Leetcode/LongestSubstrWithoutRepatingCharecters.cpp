#include <iostream>
#include <unordered_set>
int main(){
    std::string fullString;
    std::cin >> fullString;

    int l = 0,  r = 0;
    std::unordered_set<char, int>charectersSeen;
    charectersSeen.insert('a');
    for(auto elm : charectersSeen){
        std::cout << elm;
    }
}