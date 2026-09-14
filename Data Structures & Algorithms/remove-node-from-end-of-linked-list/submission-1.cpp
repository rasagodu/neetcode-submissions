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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k = n;
        int p =0 , l =0;
        ListNode* first = head;
        ListNode * second = head;
        while(first){
            p++;
            first = first -> next;
        }
        int remove = p-k;
        ListNode*temp = second;
        if(remove == 0 && !(head ->next)){
            return nullptr;
        }
        else if(remove ==0 && head -> next){
            ListNode* temp1 = head ->next;
            head -> next = nullptr;
            head = temp1;
            return head;
        }
        while(second){
            l++;
            if(l == remove + 1){
                ListNode* random = second;
                temp -> next = second -> next;
                second ->next = nullptr;

            }
            temp = second;
            second = second ->next;
            
            
            
        }
        return head;

    }
};
