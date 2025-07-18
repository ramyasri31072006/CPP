#ifndef LINKLIST_H
#define LINKTIST_H

#include <iostream>
using namespace std;
struct node{
	int data;
	node* next;
   node(int val){
   	data = val;
   	next = NULL;
   }
};

struct linklist{
	node* head =NULL;
	node* temp =NULL;
	void insert(int val){
		if(head == NULL){
			head = new node(val);
			temp=head;
		}
		else{
			temp->next = new node(val);
			temp = temp->next;
		}
	}
	void del(){
		node * tail = head ;
		while(tail->next!=NULL){
			tail=tail->next;
		}
	
		tail->next=NULL;
		
	}
	void display(){
		node *temp=head;
		while(temp!= NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
};
#endif
