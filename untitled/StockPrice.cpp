//
// Created by 孙志远 on 2023/12/31.
//
#include <vector>
#include <unordered_map>
#include <cmath>
#include <set>
#include <map>

using namespace std;
class StockPrice {
    map<int,int> priceMap;
    map<int,int> myMap;
public:
    StockPrice() {
    }

    void update(int timestamp, int price) {
        for (auto it = priceMap.begin(); it != priceMap.end();) {
            if (it->second == timestamp) {
                priceMap.erase(it++);
            } else {
                ++it;
            }
        }
        priceMap[price] = timestamp;
        myMap[timestamp] = price;
    }

    int current() {
        return myMap.rbegin()->second;
    }

    int maximum() {
        return priceMap.rbegin()->first;
    }

    int minimum() {
        return priceMap.begin()->first;
    }
};
