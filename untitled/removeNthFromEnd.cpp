//
// Created by 孙志远 on 2024/1/14.
//
#include "iostream"
using namespace std;
#include "isPalindrome.cpp"

class RemoveNthFromEnd {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
            int len = 0;
            ListNode *temp = head;
            while (temp != nullptr) {
                len++;
                temp = temp->next;
            }
            if(len-n == 0){
                return head->next;
            } else{
                int i = 0;
                ListNode *temp2 = head;
                while(i < len - n - 1){
                    temp2 = temp2->next;
                    i++;
                }
                temp2->next = temp2->next->next;
                return head;
            }
    }
};