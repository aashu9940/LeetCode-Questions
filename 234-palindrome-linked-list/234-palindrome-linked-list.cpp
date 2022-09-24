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
    ListNode* reverse(ListNode* head){
        ListNode*prev=0;
        ListNode*currnode=head;
        ListNode*nextnode=head;
        while(nextnode){
            nextnode=nextnode->next;
            currnode->next=prev;
            prev = currnode;
            currnode=nextnode;
        }
        head=prev;
        return head;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        
        if(head==NULL or head->next==NULL)return true;
        ListNode*slow=head;
        ListNode*fast = head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next = reverse(slow->next);
        slow = slow->next;
        ListNode*dummy = head;
        
    
    while(slow!=NULL) {
        if(dummy->val != slow->val) return false;
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;
    }
};