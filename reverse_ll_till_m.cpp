#include<iostream>

using namespace std;

class Node{
	public:
	int data;
	Node* next;
};

void insert(int data,Node** head){
	Node* node=*head;
	Node* new_node=new Node();
	new_node->data=data;
	new_node->next=NULL;
	if(*head==NULL){
		*head=new_node;
		return;
	}
	while(node->next!=NULL)
		node=node->next;
	node->next=new_node;
	return;
}

void reverse(Node** head,int n){
	int c=0;
	Node* prev=NULL;
	Node* next1=NULL;
	Node* curr=*head;
	Node* frst=*head;
	while(c!=n && curr!=NULL){
		next1=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next1;
		c++;
	}
	frst->next=curr;
	*head=prev;
	return;
}


void print(Node* head){
	while(head!=NULL){
		cout<<head->data;
		head=head->next;
	}
}

int main(int argc,char* argv[]){
	Node* head=NULL;
	for(int i=1;i<argc-1;i++){
		insert(atoi(argv[i]),&head);
	}
	int n=atoi(argv[argc-1]);
	reverse(&head,n);
	print(head);
	return 0;
}
