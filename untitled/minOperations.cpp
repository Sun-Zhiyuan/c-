//
// Created by 孙志远 on 2023/12/29.
//
#include<iostream>
#include <limits>
#include "algorithm"

using namespace std;
#include "vector"
#include "cmath"

class MinOperations {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        bool flag = true;
        vector<int> newGrid;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                newGrid.push_back(grid[i][j]);
            }
        }
        for (int i = 0; i < newGrid.size(); i++) {
            if ((newGrid[i] - newGrid[0]) % x != 0) {
                flag = false;
                break;
            }
        }
        if(flag){
            std::sort(newGrid.begin(), newGrid.end());
            int sum = 0;
            for(int i = 0 ; i < newGrid.size() ; i++){
                sum += abs((newGrid[i]-newGrid[newGrid.size()/2])/x);
            }
            return sum;
        } else{
            return -1;
        }
    }
};
