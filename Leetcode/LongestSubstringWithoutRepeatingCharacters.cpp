#include <iostream>
#include <unordered_set>
// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
int findMax(int counter, int highest){
    if(counter > highest){
        return counter;
    }
    return highest;
}
int lengthOfLongestSubstring(std::string s) {
    int counter = 0, highest = 0, l = 0;
    std::unordered_set<char> seenCharecters;
    for(int r=0; r<s.length(); r++){
        if(seenCharecters.count(s[r])>0){
            for(l; l<s.length(); l++){
                seenCharecters.erase(s[l]);
                if(s[r] == s[l]){
                    l++;
                    break;
                }
            }

            highest = findMax(counter, highest);
            counter = r - l;
        }
        seenCharecters.insert(s[r]);
        counter++;
    }
    highest = findMax(counter, highest);
    return highest;
}
int main(){
    std::string s = "dvdf";
    std::cout << lengthOfLongestSubstring(s);
}