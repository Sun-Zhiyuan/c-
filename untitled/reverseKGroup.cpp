//
// Created by 孙志远 on 2024/1/15.
//

#include "iostream"
using namespace std;
#include "isPalindrome.cpp"
class ReverseKGroup {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int index = k;
        ListNode* temp = head;
        int size = 0;
        while(temp!= nullptr) {
            temp = temp->next;
            size++;
        }
        if(head == nullptr){
            return nullptr;
        } else if(size < k){
            return head;
        } else{
            int a = size/k;
            ListNode* temp2;
            temp2 = reverseBetween(head,0,k-1);

            while(index < a*k){
                temp2 = reverseBetween(temp2,index,index+k-1);
                index += k;
            }
            return temp2;
        }
    }

    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (!head || m == n) {
            return head;
        }

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pre = dummy;

        // 移动到逆序起始位置的前一个节点
        for (int i = 0; i < m; ++i) {
            pre = pre->next;
        }

        // 将 m 到 n 区间的链表逆序
        ListNode* current = pre->next;
        ListNode* nextTemp = nullptr;
        ListNode* prev = nullptr;

        for (int i = m; i <= n; ++i) {
            nextTemp = current->next;
            current->next = prev;
            prev = current;
            current = nextTemp;
        }

        // 连接逆序后的部分
        pre->next->next = current;
        pre->next = prev;
        return dummy->next;
    }
};
