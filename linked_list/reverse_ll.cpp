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
 //brute force 
 //taking o(n) sc-o(n)(for returning the ans)
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

//brute approch 2:using stack 


//optimal approch 1
iterations based 
//tc-o(n)
//sc-o(1)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(head==NULL||head->next==NULL){
            return head;
        }
        
        ListNode*prev=NULL;//previous element tokeep a track of previous node
        ListNode*front=NULL;//front node to keep acces of the next node after the link broken 
        ListNode*temp=head;//simple iterator 
        while(temp!=NULL){
        front=temp->next;//keep a track of next node
        temp->next=prev;//break the front link and connect it to back node
        prev=temp;//update the prev node to current node
        temp=front;//update the temp node
        }
        return prev;
    }
};

//recursive approch (divide problems )
tc-o(n)
sc-o(n)
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(head==NULL||head->next==NULL){//when there is 0 or 1 node
            return head;
        }
        
        ListNode*newhead=reverseList(head->next);//call the linked list till we reach last node
        ListNode * front=head->next;//2(head)->5(front)->null
         front->next=head;//2(head)<-5(front)
         head->next=NULL; //null<-2(head)<-5(front)
         return newhead; //return 2<-5
    }
};