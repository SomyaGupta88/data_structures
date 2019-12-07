#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int data){
			this->data=data;
			next=NULL;
		}
};

void insert(Node** root,int val){
	Node* node=new Node(val);
	if(*root==NULL)
		*root=node;
	else{
		node->next=*root;
		*root=node;
	}
}

void reverse(Node** head){
	Node* prev=NULL,*curr=*head,*next1=*head;
	while(next1!=NULL){
		next1=next1->next;
		curr->next=prev;
		prev=curr;
		curr=next1;
	}
	*head=prev;
}

void print(Node* root){
	while(root!=NULL){
		cout<<root->data;
		root=root->next;
	}
	cout<<endl;
}

int main(int argc,char* argv[]){
	Node* root=NULL;
	for(int i=argc-1;i>=1;i--){
		int x=atoi(argv[i]);
		insert(&root,x);
	}
	print(root);
	reverse(&root);
	print(root);
	return 0;
}
