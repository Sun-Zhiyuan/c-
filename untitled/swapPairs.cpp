//
// Created by 孙志远 on 2024/1/14.
//

#include "iostream"
using namespace std;
#include "isPalindrome.cpp"
class SwapPairs {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        } else if(head->next == nullptr){
            return head;
        } else{
            ListNode* temp2 = head->next;
            swap(head);
            while(head!= nullptr && head->next!= nullptr){
                head->next = swap(head->next);
                head = head->next->next;
            }
            return temp2;
        }
    }
    ListNode* swap(ListNode* head){
        if(head == nullptr){
            return nullptr;
        } else if(head->next== nullptr){
            return head;
        } else{
            ListNode* temp1 = head;
            ListNode* temp2 = head->next;
            ListNode* temp3 = head->next->next;
            temp2->next = temp1;
            temp1->next = temp3;
            return temp2;
        }
    }
};