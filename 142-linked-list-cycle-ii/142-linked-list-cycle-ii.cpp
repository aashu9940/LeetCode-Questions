/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        int ans=0;
        while(fast and fast->next){
            fast=fast->next->next;
            slow=slow->next;
         
            
            if(slow==fast){
                ans=1;
                break;
        }
        }
        if(ans==0)return NULL;
        fast=head;
        while(fast!=slow){
            fast=fast->next;
            slow=slow->next;
        }
            
        return fast;
    }
};