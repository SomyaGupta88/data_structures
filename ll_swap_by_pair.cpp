#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void insert(Node** head,int n){
	Node* last=*head;
	Node* node=new Node();
	node->data=n;
	node->next=NULL;
	if(*head==NULL){
		*head=node;
		return ;
	}
	while(last->next!=NULL)
		last=last->next;
	last->next=node;
	return;
}

void print(Node* head){
	while(head!=NULL){
		cout<<" "<<head->data;
		head=head->next;
	}
}

void swaputil(int* a,int* b){
	int t=*a;
	*a=*b;
	*b=t;
}

void swap(Node** node){
	int a,b;
	Node* head=*node;
	while(head!=NULL && head->next!=NULL){
		a=head->data;
		b=head->next->data;
		swaputil(&head->data,&head->next->data);
		head=head->next->next;
	}
}


int main(int argc,char* argv[]){
	int arr[argc],k=0;
	Node* head=NULL;
	for(int i=1;i<argc;i++){
	int m=atoi(argv[i]);
	insert(&head,m);
	k++;
	}
	swap(&head);
	print(head);
	return 0;
}
