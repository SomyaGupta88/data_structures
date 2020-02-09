#include<iostream>
#include<queue>

using namespace std;

class Node{
	public:
		int data;
		Node* next[2];
		Node(int data){
			this->data=data;
			next[0]=next[1]=NULL;
		}
};
Node* construct_bt(int*,Node*,int,int);
int count_halfnode(Node*);

int main(int argc,char* argv[]){
	int arr[argc],k=0;
	for(int i=1;i<argc;i++){
		arr[k]=atoi(argv[i]);
		k++;
	}
	Node* root=construct_bt(arr,root,0,k);
	cout<<count_halfnode(root);
	return 0;
}

Node* construct_bt(int arr[],Node* root,int i,int n){
	if(arr[i]!=-1 && i<n){
		Node* node=new Node(arr[i]);
		root=node;
		root->next[0]=construct_bt(arr,root->next[0],2*i+1,n);
		root->next[1]=construct_bt(arr,root->next[1],2*i+2,n);
	}
	return root;
}

int count_halfnode(Node* root){
	if(!root)
		return 0;
	int count=0;
	queue<Node*>q;
	q.push(root);
	while(!q.empty()){
		Node* temp=q.front();
		q.pop();
		if(temp->next[0] && !temp->next[1] || !temp->next[0] && temp->next[1])
			count++;
		if(temp->next[0])
			q.push(temp->next[0]);
		if(temp->next[1])
			q.push(temp->next[1]);
	}
	return count;
}
