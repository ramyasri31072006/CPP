#include <iostream>
using namespace std;
 class stack{
private:
int top,st[100];
public:
  stack(){
    top=-1;
  }
  bool is_empty(){
    return top==-1;
  }
  bool is_full(){
    return top==99;
  }
  void push(int x){
    if(!is_full()){
        st[++top]=x;
    }
    return;
  }
  void pop(){
    if(!is_empty()){
        top--;
    }
    return;
  }
  int peek(){
    if(is_empty())return -1;
    return st[top];
  }
  void display(){
    for(int i=0;i<=top;i++){
        cout<<st[i]<<" ";
    }
  }
 };
 int main(){
    stack s;
    s.push(12);
   s.push(4);
    s.push(45);
    s.push(34);
    s.pop();
    cout<<s.peek()<<"\n";
   
    s.display();
 }