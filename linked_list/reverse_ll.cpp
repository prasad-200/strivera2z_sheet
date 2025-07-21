iterative method 

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
        if(head==NULL||head->next==NULL){//edge case
            return head;
        }
        ListNode*nn=NULL;
        ListNode*temp=head;
        ListNode*prev=NULL;//prev pointer to keep a track of tail of newly forming linked list
        while(temp!=NULL){
            nn=new ListNode(temp->val,prev);
            prev=nn;
            temp=temp->next;
        }
        return nn;
    }
};