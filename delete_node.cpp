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

void insert(Node** head,int val){
       Node* node=new Node(val);
       Node* last=(*head);
       if((*head)==NULL){
               (*head)=node;
               return;
       }
        while(last->next!=NULL){
                last=last->next;
        }
        last->next=node;
}

void delete_node(Node** head,int val){
	Node* node=*head,*prev;
	if(node!=NULL && node->data==val){
		(*head)=node->next;
		free(node);
		return;
	}

	while(node!=NULL && node->data!=val){
		prev=node;
		node=node->next;
	}
	if(node==NULL)
		return;
	prev->next=node->next;
	free(node);
}

void print(Node* node){
        while(node!=NULL){
                cout<<node->data<<" ";
                node=node->next;
        }
}

int main(int argc,char* argv[]){
        Node* node=NULL;
	int val=atoi(argv[1]);
        for(int i=2;i<argc;i++){
                int x=atoi(argv[i]);
                insert(&node,x);
        }
        print(node);
	cout<<endl<<"linked list after deletion of a node"<<endl;
	delete_node(&node,val);
	print(node);
        return 0;
}

