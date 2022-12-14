#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node(int data){
	this->data=data;
	this->next=NULL;
   }
};
void insertAtHead(Node* &head, int da){
   	Node* temp= new Node(da);
   	temp->next=head;
   	head=temp;
   }
void insertAtTail(Node* &tail,int da){
	Node* temp=new Node(da);
	tail->next=temp;
	tail=tail->next;
}
void Print(Node* &head){
   Node* temp=head;
   	while(temp!=NULL){
   		cout<<temp->data<<"->";
   		temp=temp->next;
	   }cout<<"NULL"<<endl;
   }




int main(){
	Node* n=new Node(10);
	//cout<<n->data<<endl;
	//cout<<n->next<<endl;
	Node* head=n;
	Node* tail=n;
	Print(head);
	
    insertAtTail(tail,15);
	Print(head);
	insertAtTail(tail,54);
	Print(head);
	
	return 0;
}
