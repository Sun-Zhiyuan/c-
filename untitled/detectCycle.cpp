//
// Created by 孙志远 on 2024/1/9.
//
#include "iostream"
using namespace std;
#include "isPalindrome.cpp"

class DetectCycle {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *temp = head;
        int index = 0;
        while(temp!= nullptr && temp->next!= nullptr){
            ListNode *temp2 = head;
            for(int i = 0 ; i <= index ; i++){
                if(temp->next == temp2){
                    return temp2;
                } else{
                    temp2 = temp2->next;
                }
            }
            temp = temp->next;
            index++;
        }
        return nullptr;
    }
};