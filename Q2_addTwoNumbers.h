//
// Created by thoma on 1/12/2022.
//

#ifndef LEETCODE_Q2_ADDTWONUMBERS_H
#define LEETCODE_Q2_ADDTWONUMBERS_H

//Definition for singly-linked list.

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int carry = 0;
        ListNode* l3 = new ListNode();
        ListNode* l3_dup = l3;

        while(l1 || l2 || carry) {
            int sum = getVal(l1) + getVal(l2) + carry;
            carry = sum / 10;

            l3->next = new ListNode(sum % 10);
            l3 = l3->next;

            l1 = getNext(l1);
            l2 = getNext(l2);
        }
        ListNode* result = l3_dup->next;
        delete l3_dup;
        return result;
    }

private:
    int getVal(ListNode* a){
        if (a) return a->val;
        else return 0;
    }
    ListNode* getNext(ListNode* a){
        if(a){ return a->next; }
        return nullptr;
    }

};
#endif //LEETCODE_Q2_ADDTWONUMBERS_H
