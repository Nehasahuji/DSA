#include <iostream>
using namespace std;


struct Node{
    int data;
    Node *next;
    
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printNodes(Node *head){
    
//    Node *temp= head;
    while(head!=NULL){
        cout << head->data << " ";
        head=head->next;
    }
}


int main() {
	
	Node *head = new Node(1);
	Node *first = new Node(2);
	Node *second = new Node(3);
	
	head->next=first;
	first->next=second;
	
	printNodes(head);
}
