#include<iostream>
using namespace std;
//IMPLEMENTED STACK WITH ARRAY
class Stack{
    
    int *arr;
    int top;
    int size;
    public:
     Stack(int s){
size=s;
top=-1;
arr=new int[s];

    }
    //PUSH OPERSTION
void push(int value){
    if(top==size-1){
        cout<<"stack overflow"<<endl;
        return;
    }
    else{
        top++;
        arr[top]=value;
        cout<<"pushed value is"<<value<<endl;
    }
}

//POP OPERATION
void pop(){
    if(top==-1){
        cout<<"stack underflow";
        return;
    }
    else{
        top--;
        cout<<"poppped value is"<<arr[top+1]<<endl;
    }
}
//PEEK OPERSTION
int peek(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
        return -1;

    }
    return arr[top];
}
//ISEMPTY OPERATION

bool isEmpty(){
    return top==-1;
}
//ISSIZE OPERATION

int isSize(){
    return top+1;


}


};





int main(){
    Stack S(5);
    
    S.push(10);
    S.push(13);
    S.push(12);
    S.push(11);
    S.push(1);
S.pop();
S.pop();
S.pop();
cout<<S.peek();
cout<<S.isEmpty();
cout<<S.isSize();

}