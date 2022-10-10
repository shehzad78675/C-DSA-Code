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
		
//	void createList(int data){
//		Node* newNode = new Node(data);
//		head = newNode;
//	}
		
void insertAtHead(Node* &head, int data){
	Node* newNode = new Node(data);
			
	Node* temp = head;
	head = newNode;
	head->next = temp;
}

void insertAtTail(Node* &tail, int data){
	Node* newNode = new Node(data);
	
	tail->next = newNode;
	tail = tail->next;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){
	if(position == 1){
		insertAtHead(head, data);
		return;
	}
	int count=1;
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
	temp->next = newNode;
}

void deleteNodeAtHead(Node* &head){
	Node* temp = head;
	head = head->next;
	temp->next = NULL;
	delete temp;
}

void deleteNodeAtPosition(Node* &head, Node* &tail, int position){
	if(position == 1){
		deleteNodeAtHead(head);
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
	delete dNode;
}
		
void print(Node* &head){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main(){
	Node* head = new Node(2);
	Node* tail = head;
	print(head);
	
//	deleteNodeAtHead(head);
//	print(head);
	
	insertAtHead(head, 4);
	print(head);
	
	insertAtTail(tail, 7);
	print(head);
	
	insertAtTail(tail, 12);
	print(head);
	
	insertAtPosition(head, tail, 14, 1);
	print(head);
	
	insertAtPosition(head, tail, 1, 1);
	print(head);
	
	insertAtPosition(head, tail, 15, 7);
	print(head);
	
	insertAtPosition(head, tail, 17, 8);
	print(head);
	
	insertAtPosition(head, tail, 25, 2);
	print(head);
	
//	insertAtPosition(head, tail, 25, 10);
//	print(head);
	
	deleteNodeAtPosition(head, tail, 1);
	print(head);
	
	insertAtPosition(head, tail, 28, 1);
	print(head);
	return 0;
}