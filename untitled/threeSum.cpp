//
// Created by 孙志远 on 2024/1/2.
//
#include <vector>
#include <algorithm>
#include "iostream"
using namespace std;

class ThreeSum {
public:
    vector<vector<int>> threeSum(vector<int> nums) {
        vector<vector<int>> answer;
        vector<vector<int>> example;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i+1 ; j < nums.size() ; j++){
                vector<int> tempExample;
                tempExample.push_back(nums[i]);
                tempExample.push_back(nums[j]);
                std::sort(tempExample.begin(),tempExample.end());
                if(std::find(example.begin(), example.end(),tempExample)==example.end()) {
                    bool flag = false;
                    for (int k = j + 1; k < nums.size(); k++) {
                        if (nums[i] + nums[j] + nums[k] == 0) {
                            vector<int> temp;
                            temp.push_back(nums[i]);
                            temp.push_back(nums[j]);
                            temp.push_back(nums[k]);
                            std::sort(temp.begin(),temp.end());
                            answer.push_back(temp);
                            flag = true;
                        }
                    }
                    if (!flag) {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        std::sort(temp.begin(), temp.end());
                        example.push_back(temp);
                    }
                }
            }
        }
        std::sort(answer.begin(),answer.end());
        auto newEnd = std::unique(answer.begin(), answer.end());
        answer.erase(newEnd, answer.end());
        return answer;
    }
};