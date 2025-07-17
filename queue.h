#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

#define MAX 100

struct queue{
int queue[MAX];
int rear=-1,front=-1;
void enqueue(int val){
	if(rear==MAX-1) cout<<" queue is overflown\n";
	else if(rear==-1&&front==-1){//if queue is empty increment both rear,front
		rear++;
		front++;
		queue[rear]=val;//store val at rear pos
	}
	else queue[++rear]=val;//increment rear store at that pos
}
void dequeue(){
	if(rear==-1&&front==-1){
	cout<<" queue is empty\n";
	}
	else if(rear==front){//if rear and front equal queue becomes empty so point both to -1
		rear=front=-1;
	}
	else ++front;//pop element
}
 void peek (){
 	if( rear == -1) cout << " queue is empty\n";
 	else{
 	cout << "peek element is :"
 	cout << queue[rear];
 }
 }
 void display(){
	if(rear==-1&&front==-1){
		cout<<"queue is empty\n";
	}
	cout<<" queue elements are :";
	for(int i=front;i<rear+1;i++){
	cout<<queue[i]<<" ";
	}
}
	
};

#endif
 
 
