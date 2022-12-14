#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*next;
	    node(int val){
			data=val;
			next=NULL;	
		}
};
void insertAt_Head(node* &head,int val){
	node* n=new node(val);
	 n->next=head;
	 head=n;
	
}
void insertAt_Tail(node* &head,int val){
	node* n=new node(val);
	if(head==NULL){
		head=n;
		return ;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
void display(node* head){
	node* temp=head;
	while(temp!=NULL){
	cout<<temp->data<<"->";
	temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
bool search(node*head,int key){
	node*  temp=head;
	while(temp!=NULL){
		if(temp->data==key){
			return true;
		}
		temp=temp->next;
	}
	return false;
}
int main(){
	node *head=NULL;
	insertAt_Tail(head,1);
	insertAt_Tail(head,2);
	insertAt_Tail(head,3);
	insertAt_Tail(head,4);
	display(head);
	insertAt_Head(head,5);
	display(head);
	cout<<search(head,6)<<endl;
	cout<<search(head,5)<<endl;
	return 0;
	
	
	
	
}
