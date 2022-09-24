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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev=0;
        ListNode* currnode=head;
        ListNode*nextnode=head;
        
        while(nextnode){
            nextnode=nextnode->next;
            currnode->next=prev;
            prev=currnode;
            currnode=nextnode;
        }
        head=prev;
        return head;
    }
};