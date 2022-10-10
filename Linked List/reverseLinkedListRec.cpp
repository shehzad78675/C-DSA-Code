#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int data){
			this->data = data;
			this->next = NULL;
		}
};

void insertion(Node* &head, Node* &tail, int data){
	
	Node* newNode = new Node(data);
	
	if(head == NULL){
		head=newNode;
		tail=head;
		return;
	}
	
	tail->next = newNode;
	tail = newNode;
}

void reverse(Node* &head, Node* curr, Node* prev){
	if(curr == NULL){
		head=prev;
		return;
	}
	reverse(head, curr->next, curr);
	curr->next=prev;
}
Node* reverseLinkedList(Node* head){
	if(head == NULL || head->next==NULL){
		return head;
	}
	
	Node* prev = NULL;
	Node* curr = head;
	reverse(head, curr, prev);
	return head;
}

void print(Node* &head){
	
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	Node* head = NULL;
	Node* tail = NULL;
	
	insertion(head, tail, 1);
	print(head);
	
	insertion(head, tail, 2);
	print(head);
	
	insertion(head, tail, 3);
	print(head);
	
	insertion(head, tail, 4);
	print(head);
	
	insertion(head, tail, 5);
	print(head);
	
	Node* head1 = reverseLinkedList(head);
	print(head1);
	
	 
	return 0;
}