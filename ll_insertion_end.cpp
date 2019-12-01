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

void print(Node* node){
        while(node!=NULL){
                cout<<node->data<<" ";
                node=node->next;
        }
}

int main(int argc,char* argv[]){
        Node* node=NULL;
        for(int i=1;i<argc;i++){
                int x=atoi(argv[i]);
                insert(&node,x);
        }
        print(node);
        return 0;
}

