#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int n){
		data=n;
		next=NULL;
	}
};
Node *insertPos(Node *head,int pos,int data){
	Node *temp=new Node(data);
	if(pos==1){
		temp->next=head;
		return temp;
	}
	Node *curr=head;
	for(int i=1;i<pos-2 && curr!=NULL;i++){
		curr=curr->next;
	}
	if(curr==NULL){
		return head;
	}
	temp->next=curr->next;
	curr->next=temp;
	return head;
}
void display(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<endl;
		curr=curr->next;
	}
}
int main(){
	Node *head=NULL;
	head=insertPos(head,1,10);n
	head=insertPos(head,2,50);
	display(head);
	return 0;
}
