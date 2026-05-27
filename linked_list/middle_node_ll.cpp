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

 //brute force solution 
 tc-0(n+n/2)
 sc-o(1)
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL||head->next==NULL){//edge case if empty or if one element 
            return head;
        }
        //get total count of ll;
        int tcount=0;
        ListNode*temp=head;
        while(temp!=NULL){
            tcount++;
            temp=temp->next;
        }
         ListNode*temp1=head;
        int c=0;
        while(temp1!=NULL){
            c++;
            if(c==floor(tcount/2)){
                return temp1->next;
            }
            temp1=temp1->next;
        }
        return temp;
    }
};

//optimal approch 
tc-o(n/2)
sc-o(1)

ListNode* middleNode(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode * slow =head;
        ListNode * fast =head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }