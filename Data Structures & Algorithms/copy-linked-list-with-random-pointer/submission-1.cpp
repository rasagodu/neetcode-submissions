/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)return nullptr;
        Node* deep = new Node(head -> val);
        Node* newhead = deep;
        unordered_map<Node*, Node*> freq;
        Node* first = head;
        while(first){
            deep -> val = first -> val;
            freq[first] = deep;
            if(first ->next)deep -> next = new Node(0);  
            first = first->next;
            deep = deep->next;
        }
        first = head;
        deep = newhead;
        while(first){
            deep -> random = freq[first->random];
            first = first ->next;
            deep = deep -> next;
        }
        return newhead;
    }
};
