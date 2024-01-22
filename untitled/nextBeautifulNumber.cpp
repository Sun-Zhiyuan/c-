//
// Created by 孙志远 on 2023/12/31.
//
#include "vector"
#include <cmath>
#include <unordered_map>

using namespace std;
class NextBeautifulNumber {
public:
    int nextBeautifulNumber(int n) {
        if(n>=666666){
            return 122444;
        } else {
            for (int i = n + 1; i <= 666666; i++) {
                if (beautiful(i)) {
                    return i;
                }
            }
        }
        return -1;
    }
    bool beautiful(int n){
        bool flag = true;
        unordered_map<int, int> myHashMap;
        while(n!=0){
            myHashMap[n%10]++;
            n = n/10;
        }
        for (const auto& pair : myHashMap) {
            if(pair.first != pair.second){
                flag = false;
                break;
            }
        }
        return flag;
    }
};
