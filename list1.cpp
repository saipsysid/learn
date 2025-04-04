#include<iostream>
using namespace std;

struct Node{
int data;
Node *next;	
};
class LinkedList{
	Node *head;
	public :
		LinkedList (){
			head = '\0';
		}
		void Insertatstart(int value){
			Node *newNode = new Node();
			newNode->data=value;
			newNode->next=head;
			head=newNode;
		}
		void insertionatend(int value){
			Node *newNode = new Node();
			newNode->data=value;
			newNode->next='\0';
			
			if(head=='\0'){
		head=newNode;
		return;
	}
			Node *temp = head;
			while(temp->next != 0){
				temp=temp->next;
			}
			temp->next = newNode;
			
		}
		void display(){
			if(head=='\0'){
	cout<<"List is Empty";
	return;
}
Node *temp = head;
while(temp != '\0'){
	cout<<temp->data<<"->";
	temp = temp->next;
}
cout<<"NULL\n";
}
~LinkedList(){
	Node *temp = head;
	while(temp->next !='\0'){
		delete temp;
		temp = temp->next;
	}
}
		
};
int main(){
	LinkedList l;
	l.Insertatstart(2);
	l.Insertatstart(1);
	l.insertionatend(3);
	l.insertionatend(4);
	l.display();
	l.~LinkedList();
	l.display();
	cout<<"hoi";
}
