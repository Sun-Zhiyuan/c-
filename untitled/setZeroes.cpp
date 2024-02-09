//
// Created by 孙志远 on 2024/1/26.
//
#include <vector>
#include <unordered_set>
#include "iostream"
using namespace std;

class SetZeroes {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[0].size() ; j++){
                if(matrix[i][j]==0){
                    for(int m = 0 ; m < matrix[0].size() ; m++){
                        if(matrix[i][m]!=0){
                            matrix[i][m] = 192345;
                        }
                    }
                    for(int n = 0 ; n < matrix.size() ; n++){
                        if(matrix[n][j]!=0){
                            matrix[n][j] = 192345;
                        }
                    }
                }
            }
        }
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[0].size() ; j++){
                if(matrix[i][j]==192345){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};