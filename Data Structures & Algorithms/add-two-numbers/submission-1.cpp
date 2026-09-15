/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* d2 = new ListNode();
        ListNode* curr = dummy;
        ListNode * v1 = l1;
        ListNode * v2 = l2;
        int carry =0;
        int value = 0;
        while(v1 || v2){
            value = v1 -> val + v2 -> val + carry;
            carry = (value - 10) >= 0 ? 1 : 0;
            value = value >= 10 ? value - 10 : value;
            curr -> next = new ListNode(value);
            curr = curr -> next;
            v1 = v1 -> next ? v1 -> next : d2;
            v2 = v2 -> next? v2 -> next : d2;
            if(v1 == v2) break;
        }
        if(carry !=0){curr -> next = new ListNode(carry);}
        return dummy -> next;
    }
};
