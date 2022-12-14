#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* left;
		node* right;
	node(int d){
		this->data=d;
		this->left=left;
		this->right=right;
	}
};
void Inorder(node* root){
	cout<<"Enter the data: "<<endl;
	int data;
	cin>>data;
	root=new node(data);
	if(root==NULL){
		return ;
	}
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
int main(){
	node* root=NULL;
//	cout<<"The Inorder Traversal is: "<<endl;
	Inorder(root);
}


