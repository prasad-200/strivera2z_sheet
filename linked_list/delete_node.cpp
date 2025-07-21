//deletion at head
Node * deleteHead(Node *head) {
    //if no node in ll 
    if(head==NULL){
        return head;
    }
    Node * temp=head;
    head=head->next;
    delete temp;
    return head;
}

//deletion at end
Node *deleteLast(Node *list){
    //edge case
    if(list==nullptr||list->next==NULL){
        return NULL;
    }

    Node*temp=list;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    delete temp->next;
    return list;
}

//deletion at kth
Node*deleteKth(Node * head,int k){

   if(head==NULL){
     return NULL;
   }

   if(k==1){
     Node * temp=head;
     head=head->next;
     free(temp);
     return head;
   }

   int c=0;
   Node * temp=head;
   Node * prev=NULL;
   while(temp!=NULL){
    c++;
    if(c==k){
      prev->next=prev->next->next;
      free(temp)
      return head;
    }
    prev=temp;
    temp=temp->next;
   }
}