#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node* prev;
		
		Node(int data){
			this->data = data;
			this->next = NULL;
			this->prev = NULL;
		}
};

void insertAtHead(Node* &head, int data){
	Node* newNode = new Node(data);
	Node* temp = head;
	head = newNode;
	head->next = temp;
	temp->prev = head;
}
void insertAtTail(Node* &tail, int data){
	Node* newNode = new Node(data);
	newNode->prev = tail;
	tail->next = newNode;
	tail = tail->next;
}
void insertAtPosition(Node* &head, Node* &tail, int data, int position){
	if(position == 1){
		insertAtHead(head, data);
		return;
	}
	
	int count = 1;
	Node* temp = head;
	while(temp != NULL && count != position-1){
		temp=temp->next;
		count++;
	}
	if(temp == NULL){
		cout<<"Please enter correct position!"<<endl;
		return;
	}
	if(temp->next == NULL){
		insertAtTail(tail, data);
		return;
	}
	
	Node* newNode = new Node(data);
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;
	newNode->prev = temp;
}
void deleteNodeAtPosition(Node* &head, Node* &tail, int position){
	if(position == 1){
		Node* temp = head;
		head = head->next;
		head->prev = NULL;
		
		delete temp;
		return;
	}
	
	int count = 1;
	Node* temp = head;
	
	while(temp != NULL && count != position-1){
		temp=temp->next;
		count++;
	}
	if(temp->next == NULL){
		cout<<"Please enter correct position!"<<endl;
		return;
	}
	if(temp->next->next == NULL){
		tail = temp;
		Node* dNode = temp->next;
		temp->next = NULL;
		delete dNode;
		return;
	}
	
	Node* dNode = temp->next;
	temp->next = temp->next->next;
	temp->next->prev = temp;
	
	delete dNode;
}
void forwardPrint(Node* &head){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
void backwardPrint(Node* &tail){
	Node* temp = tail;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->prev;
	}
	cout<<endl;
}
int main(){
	Node* head = new Node(1);
	Node* tail = head;
	forwardPrint(head);
	backwardPrint(tail);
	
	insertAtHead(head, 2);
	forwardPrint(head);
	backwardPrint(tail);
	
	insertAtTail(tail, 3);
	forwardPrint(head);
	backwardPrint(tail);
	
	insertAtTail(tail, 4);
	forwardPrint(head);
	backwardPrint(tail);
	
	insertAtPosition(head, tail, 5, 1);
	forwardPrint(head);
	backwardPrint(tail);
	
	insertAtPosition(head, tail, 6, 1);
	forwardPrint(head);
	backwardPrint(tail);
	
	insertAtPosition(head, tail, 7, 7);
	forwardPrint(head);
	backwardPrint(tail);
	
	deleteNodeAtPosition(head, tail, 4);
	forwardPrint(head);
	backwardPrint(tail);
	return 0;
}