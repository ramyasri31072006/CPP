#include<iostream>
#include<vector>
using namespace std;
 class queue{
    private:
    int front,rear,q[100];
    public:
    queue(){
        front =-1;
        rear =-1;
    }
    bool is_full(){
        return (rear==99);
    }
    bool is_empty(){
        return (front==rear);
    }
    void enqueue(int x){
        if(!is_full()){
     q[++rear]=x;
        }
        
    }
    void dequeue(){
        if(!is_empty()) ++front;
            
    }
    void display(){
        for(int i=front+1;i<=rear;i++){
            cout<<q[i]<<" ";
        }
    }
 };
 int main(){
    queue arr;
    int n;
    cin>>n;
    // vector<int>v(n);
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.enqueue(x);
    }
    arr.dequeue();
    arr.display();
    // arr.enqueue(25);
    // arr.enqueue(26);
    // arr.enqueue(27);
    // arr.enqueue(28);
    // arr.dequeue();
    // arr.display();
 }