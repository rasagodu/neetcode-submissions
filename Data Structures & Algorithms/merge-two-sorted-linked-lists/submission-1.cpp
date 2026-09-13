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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* merge = new ListNode();
        ListNode* head = merge;
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode*  currM = head;
        int val1 = 0;
        int val2 = 0;
        int minimum = 0;
        int maximum = 0;
        // if(curr1 &&curr2){
        //     head -> next = new ListNode();
        //     currM = head -> next;
        // }
        while(curr1 && curr2){
            currM -> next = new ListNode();
                currM = currM -> next;
            val1 = curr1 -> val;
            val2 = curr2 -> val;
            if(val1 <= val2){
                currM -> val =val1;
                curr1 = curr1 ->next;
                // currM -> next = new ListNode();
                // currM = currM -> next;
            }
            else if(val1 >= val2){
                currM -> val =val2;
                curr2 = curr2 ->next;
                // currM -> next = new ListNode();
                // currM = currM -> next;
            }
    }
    if(curr1 && !curr2){
            while(curr1){
                currM -> next = new ListNode();
                currM = currM -> next;
                currM -> val = curr1 -> val;
                curr1 = curr1 ->next;
                
                }
    }
    else if(!curr1 && curr2){
                while(curr2){
                currM -> next = new ListNode();
                currM = currM -> next;
                currM -> val = curr2 -> val;
                curr2 = curr2 ->next;
                
            }
            
        }
    
                
    return head -> next;
    }
};
