#include <iostream>
// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
int maxDepth(std::string s) {
    int counter = 0;
    int highest = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '('){
            counter++;
        }
        else if(s[i] == ')'){
            counter--;
        }
        highest = max(counter, highest);
    }
    return highest;
}