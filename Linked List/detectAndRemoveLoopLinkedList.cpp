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

Node* floydDetectLoop(Node* head){
	if(head == NULL){
		return NULL;
    }
    Node* fast=head;
    Node* slow=head;
    while(slow != NULL && fast!=NULL){
        fast=fast->next;
        slow=slow->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        if(fast==slow){
            return fast;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection = floydDetectLoop(head);
    if(intersection == NULL){
        return NULL;
    }
    Node* slow=head;
    
    while(slow != intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
Node *removeLoop(Node *head){
    if(head == NULL){
        return NULL;
    }
    
    Node* startOfLoop = getStartingNode(head);
    if(startOfLoop == NULL){
        return head;
    }
    Node* temp = startOfLoop;
    
    while(temp->next != startOfLoop){
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
}

int main(){
	return 0;
}