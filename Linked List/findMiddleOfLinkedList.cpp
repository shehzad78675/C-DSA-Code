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

int middleOfLinkedList(Node* head){
	if(head == NULL || head->next==NULL){
		return head->data;
	}
	
	if(head->next->next == NULL){
		return head->next->data;
	}
	
	Node* slow = head;
	Node* fast = head;
	int count=1;
	while(fast != NULL && fast->next != NULL){
		slow=slow->next;
		fast=fast->next->next;
		count++;
	}
	if(count%2==0){
		return slow->next->data;
	}
	return slow->data;
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
	cout<<middleOfLinkedList(head)<<endl;
	
	insertion(head, tail, 3);
	print(head);
	
	insertion(head, tail, 4);
	print(head);
	
//	insertion(head, tail, 5);
//	print(head);
	
	cout<<middleOfLinkedList(head)<<endl;
	
	insertion(head, tail, 5);
	print(head);
	
	cout<<middleOfLinkedList(head)<<endl;
	
	return 0;
}