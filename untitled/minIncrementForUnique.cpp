//
// Created by 孙志远 on 2024/1/7.
//

#include <vector>
#include <algorithm>
#include "iostream"
using namespace std;

class MinIncrementForUnique {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int sum = 0;
        std::sort(nums.begin(),nums.end());
        for(int i = 1 ; i < nums.size(); i++){
            if(nums[i]<=nums[i-1]){
                int temp = nums[i-1]-nums[i];
                nums[i] = nums[i-1]+1;
                sum += temp+1;
            }
        }
        return sum;
    }
};
