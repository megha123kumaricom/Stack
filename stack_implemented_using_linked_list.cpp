#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=nullptr;

    }
};
class Stack{
    Node*top;
    int size;
     public:
    Stack(){
       
        top=nullptr;
        size=0;
    }
    //PUSH OPERATION
    void push(int value){
        Node*temp=new Node(value);
        if(temp==nullptr){
            cout<<"stack overflow"<<endl;
            return;
        }
        temp->next=top;
        top=temp;
        size++;
        cout<<"pushed item "<<value<<endl;
    }
    //POP OPERATION
    void pop(){
        if(top==nullptr){
            cout<<"stack underflow"<<endl;

        }
        Node*temp=top;
        top=top->next;
        delete temp;
        size--;
    }
    //PEEK OPERATION
int peek(){
    return top->data;
}
bool isEmpty(){
    return top==nullptr;
}
int isSize(){
    return size;
}

};
int main(){
    Stack S;
    S.push(10);
    S.push(20);
    S.push(60);

}
