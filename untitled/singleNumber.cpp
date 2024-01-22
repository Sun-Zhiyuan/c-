//
// Created by 孙志远 on 2023/12/27.
//

#include <vector>
#include <unordered_map>

using namespace std;

class SingleNumber {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> myHashMap;
        for(int num : nums){
            myHashMap[num]++;
        }
        vector<int> answer;
        for (const auto& pair : myHashMap) {
            if(pair.second==1){
                answer.push_back(pair.first);
            }
        }
        return answer;
    }
};
