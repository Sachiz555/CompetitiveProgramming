// https://leetcode.com/problems/toeplitz-matrix/submissions/1652382530/
#include <Vector>
#include <iostream>
bool isToeplitzMatrix(std::vector<std::vector<int>>& matrix) {
    if(matrix.size() < 2){
        return true;
    }
    int arrSize = matrix[0].size();
    for(int i=1; i<matrix.size(); i++){
        std::vector<int> prevArray = matrix[i-1];
        std::vector<int> currArray = matrix[i];
        for(int j=0; j<arrSize-1; j++){
            if(prevArray[j] != currArray[j+1]){
                return false;
            }
        }
    }
    return true; 
}