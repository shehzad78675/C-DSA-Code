#include<iostream>
using namespace std;

class Node{
	public:
		
		int data;
		Node* next;
		Node* prev;
		Node(int data){
			this->data=data;
			this->next = NULL;
			this->prev = NULL;
		}
};
		
void insert(Node* &head, int data){
	Node* newNode = new Node(data);
	
	if(head == NULL){
		head=newNode;
		newNode->next=head;
		head->prev = newNode;
		return;
	}
	
	Node* temp = head;
	
	while(temp->next != head){
		temp=temp->next;
	}
	
	temp->next=newNode;
	newNode->prev = temp;
	newNode->next=head;
	head->prev = newNode;
}

void insertAtPosition(Node* &head, int data, int position){
	Node* newNode = new Node(data);
	if(position == 1){
		Node* temp = head;
	
		while(temp->next != head){
			temp=temp->next;
		}
		Node* seTemp = head;
		
		head = newNode;
		head->next=seTemp;
		seTemp->prev = head;
		temp->next = head;
		head->prev = temp;
		return;
	}
	
	int count=1;
	Node* temp = head;
	
	while(temp->next != head && count != position-1){
		temp=temp->next;
		count++;
	}
	if(temp->next == head && count != position-1){
		cout<<"Please enter correct position!"<<endl;
		return;
	}
	if(temp->next == head && count == position-1){
		temp->next=newNode;
		newNode->prev = temp;
		newNode->next=head;
		head->prev = newNode;
		return;
	}
	
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;
	newNode->prev = temp;
}

void deleteNodeAtHead(Node* &head){
		Node* temp = head;
	
		while(temp->next != head){
			temp=temp->next;
		}
		Node* seTemp = head;
		head = head->next;
		temp->next = head;
		head->prev = temp;
		delete seTemp;
}

void deleteNodeAtPosition(Node* &head, int position){
	if(position == 1){
		deleteNodeAtHead(head);
		return;
	}
	
	int count = 1;
	Node* temp = head;
	
	while(temp->next != head && count != position-1){
		temp=temp->next;
		count++;
	}
	if(temp->next == head){
		cout<<"Please enter correct position!"<<endl;
		return;
	}
	if(temp->next->next == head){
		Node* dNode = temp->next;
		temp->next = head;
		head->prev = temp;
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
	do{
		cout<<temp->data<<" ";
		temp = temp->next;
	}while(temp != head);
	cout<<endl;
}

void backwardPrint(Node* &head){
	Node* temp = head->prev;
	do{
		cout<<temp->data<<" ";
		temp = temp->prev;
	}while(temp != head->prev);
	cout<<endl<<endl;
}

int main(){
	Node* head = NULL;
	
	insert(head, 4);
	forwardPrint(head);
	backwardPrint(head);
	
	insert(head, 5);
	forwardPrint(head);
	backwardPrint(head);
	
	insert(head, 6);
	forwardPrint(head);
	backwardPrint(head);
	
	insert(head, 7);
	forwardPrint(head);
	backwardPrint(head);
	
	insertAtPosition(head, 3, 1);
	forwardPrint(head);
	backwardPrint(head);
	
	insertAtPosition(head, 2, 1);
	forwardPrint(head);
	backwardPrint(head);
	
	insertAtPosition(head, 8, 4);
	forwardPrint(head);
	backwardPrint(head);
	
	insertAtPosition(head, 9, 3);
	forwardPrint(head);
	backwardPrint(head);
	
	insertAtPosition(head, 9, 9);
	forwardPrint(head);
	backwardPrint(head);
	
	insertAtPosition(head, 10, 10);
	forwardPrint(head);
	backwardPrint(head);
	
	deleteNodeAtHead(head);
	forwardPrint(head);
	backwardPrint(head);
	
	deleteNodeAtHead(head);
	forwardPrint(head);
	backwardPrint(head);
	
	deleteNodeAtPosition(head, 1);
	forwardPrint(head);
	backwardPrint(head);
	return 0;
}