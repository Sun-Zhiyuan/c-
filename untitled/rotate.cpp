//
// Created by 孙志远 on 2024/1/23.
//

#include <vector>
#include "iostream"
using namespace std;
class Rotate {
public:
    void rotate(vector<int>& nums, int k) {
        int redundant = k % nums.size();
        vector<int> answer;
        vector<int> temp (redundant+nums.size());
        for(int i = 0 ; i < nums.size(); i++){
            temp[i+redundant] = nums[i];
        }
        for(int i = redundant ; i < nums.size() ; i++){
            nums[i] = temp[i];
        }
        for(int i = 0 ; i < redundant ; i++){
            nums[i] = temp[nums.size()+i];
        }
    }
};