//
// Created by 孙志远 on 2024/1/9.
//

#include "iostream"
using namespace std;
#include "isPalindrome.cpp"

class HasCycle {
public:
    bool hasCycle(ListNode *head) {
        if(head!= nullptr && head->next!= nullptr) {
            ListNode *temp1 = head->next;
            ListNode *temp2 = head;
            while (temp1 != nullptr && temp1 != temp2) {
                if(temp1->next!= nullptr){
                    temp1 = temp1->next->next;
                } else{
                    return false;
                }
                temp2 = temp2->next;
            }
            if (temp1 == nullptr) {
                return false;
            } else {
                return true;
            }
        } else{
            return false;
        }
    }
};