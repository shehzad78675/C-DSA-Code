#include<iostream>
using namespace std;

class Node{
	public:
		
		int data;
		Node* next;
		Node(int data){
			this->data=data;
			this->next = NULL;
		}
};
		
void insert(Node* &head, int data){
	Node* newNode = new Node(data);
	
	if(head == NULL){
		head=newNode;
		newNode->next=head;
		return;
	}
	
	Node* temp = head;
	
	while(temp->next != head){
		temp=temp->next;
	}
	
	temp->next=newNode;
	newNode->next=head;
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
		temp->next = head;
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
		newNode->next=head;
		return;
	}
	
	newNode->next = temp->next;
	temp->next = newNode;
}

void deleteNodeAtHead(Node* &head){
		Node* temp = head;
	
		while(temp->next != head){
			temp=temp->next;
		}
		Node* seTemp = head;
		head = head->next;
		temp->next = head;
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
		delete dNode;
		return;
	}
	Node* dNode = temp->next;
	temp->next = temp->next->next;
	delete dNode;
}
		
void print(Node* &head){
	Node* temp = head;
	do{
		cout<<temp->data<<" ";
		temp = temp->next;
	}while(temp != head);
	cout<<endl;
}

int main(){
	Node* head = NULL;
	
	insert(head, 4);
	print(head);
	
	insert(head, 5);
	print(head);
	
	insert(head, 6);
	print(head);
	
	insert(head, 7);
	print(head);
	
	insertAtPosition(head, 3, 1);
	print(head);
	
	insertAtPosition(head, 2, 1);
	print(head);
	
	insertAtPosition(head, 8, 4);
	print(head);
	
	insertAtPosition(head, 9, 3);
	print(head);
	
	insertAtPosition(head, 9, 9);
	print(head);
	
	insertAtPosition(head, 10, 10);
	print(head);
	
	deleteNodeAtHead(head);
	print(head);
	
	deleteNodeAtHead(head);
	print(head);
	
	deleteNodeAtPosition(head, 6);
	print(head);
	return 0;
}