//bruteforce
//o(n) o(n)

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*temp=head;
        set<ListNode*>s;
        while(temp!=nullptr){
            if(s.find(temp)!=s.end()){//if the node is present in the set there is a loop
                return true;
            }
            else{
                s.insert(temp); //if not present insert in the set
            }
            temp=temp->next;
        }
        return false;
    }
};

optinmal 0(n)
sc-o(1)

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL){
            return false;
        }
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;//move slow by 1 step
            fast=fast->next->next;//move fast by 2
            if(slow==fast){
                return true;//if they meet then there is a loop
            }
        }
        return false;
    }
};

//bit manipulation 

decimal to binary 

decimaltobinary(int n){
    string res="";
    while(n!=1){
        if(n%2==1){
            res+=1;
        }
        else{
            res+=0;
        }
        n=n/2;
    }

    reverse(res);

}