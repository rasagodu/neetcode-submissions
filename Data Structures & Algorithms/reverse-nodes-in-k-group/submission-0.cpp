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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head) return nullptr;
        if(k==1 || !head ->next) return head;
        ListNode dummy(0);
        ListNode* node = &dummy;
        node -> next = head;
        ListNode* first = head;
        ListNode* second = head;
        ListNode* tail = head;
        int t = k-1;
        int p =0;
        ListNode* prevTail = head;
        while(second && second -> next){
            t--;
            second = second -> next;
            if(t==0){
                tail = first;
                p++;
                ListNode* curr =first , *prev = second -> next;
                while( prev != second){
                    ListNode* temp = curr -> next;
                    curr -> next =prev;
                    prev = curr;
                    curr = temp;
                }
                t = k-1;
                if(p>1)prevTail -> next = prev;
                prevTail = tail;
                if(p == 1)node -> next = prev;
                
                first = curr;
                second = curr;
                
                
            }
        }
        return dummy.next;
    }
};
