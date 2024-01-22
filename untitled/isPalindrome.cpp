//
// Created by 孙志远 on 2024/1/8.
//

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#include "iostream"
using namespace std;

class IsPalindrome {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *tail = nullptr;
        ListNode *head1 = head;
        bool flag = true;
        while(head!= nullptr){
            ListNode *temp = new ListNode(head->val);
            temp->next = tail;
            tail = temp;
            head = head->next;
        }
        while(head1!= nullptr && flag){
            if(head1->val == tail->val){
                head1 = head1->next;
                tail = tail->next;
                cout<<head1->val<<" "<<tail->val<<endl;
            } else{
                flag = false;
            }
        }
        return flag;
    }
};