//
// Created by 孙志远 on 2024/1/11.
//
#include <vector>
#include <deque>
#include <algorithm>
#include "iostream"
using namespace std;

class DeckRevealedIncreasing {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        std::deque<int> myDeque;
        std::sort(deck.begin(),deck.end());
        for(int i = 0 ; i < deck.size() ; i++){
            myDeque.push_back(i);
        }
        int ans[deck.size()];
        int i = 0;
        while(!myDeque.empty()){
            ans[myDeque.front()] = deck[i];
            i++;
            myDeque.pop_front();
            myDeque.push_back(myDeque.front());
            myDeque.pop_front();
        }
        vector<int> temp;
        for(int j = 0 ; j < deck.size() ; j++){
            temp.push_back(ans[j]);
        }
        return temp;
    }
};