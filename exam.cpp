#include<iostream>
using namespace std;
class Stack{
private:
    int top;
    int *arr;
    int count;
    int capacity;

public:
    Stack(int size)
    {
        this->top = -1;
        this->arr = new int[capacity];
        this->count = 0;
        this->capacity = size;
    }
    void push(int);
    void pop();
    void display();
    bool isEmpty();
    bool isfull();
    void size();
};
void Stack::push(int data){
    if (this->top == (capacity-1)){
        cout << "Array is overflow : "<<endl;
        return;
    }
    
    this->top++;
    this->arr[top] = data;
    this->count++;
}
void Stack::pop(){
    if(this->top == -1){
        cout << "The stack is empty ";
        return;
    }
    else{
        this->top = 0;
        this->top--;
    }
        this->count--;
}
void Stack::display(){
    if(this->top == -1){
        cout << "The stack is empty ";
        return;
    }

    for (int i = this->top; i >= 0; i--)
    {
        cout << this->arr[i] << " ";
    }
    cout << endl;
}
bool Stack::isEmpty(){
    if(this->top == -1){
        cout << "The stack is empty ";
        return true;
    }
    else{
        cout << "The stack is't empty ";
        return false;
    }
}
bool Stack::isfull(){
    if(this->top == capacity-1){
        cout << "Stack is full..";
        return true;
    }
    else{
        cout << "Stack is't full";
        return false;
    }
}
void Stack :: size(){
    cout << "The size is stack is :"<< this->count;
}

int main(){
    Stack s1(4);
    int choice;

    do{
        cout << "\n--------------Choices---------------"<< endl;
        cout << "Enter 1 for push :"<< endl;
        cout << "Enter 2 for pop :"<< endl;
        cout << "Enter 3 for display :"<< endl;
        cout << "Enter 4 for chaque whether stack is Empty:"<< endl;
        cout << "Enter 5 for chaque whether stack is Full:"<< endl;
        cout << "Enter 6 for Get size :"<< endl;
        cout << "--------------Choices---------------"<< endl << endl;
        cout << "Enter your choice :";
        cin >> choice;
    
        switch(choice){
            case 1:{
                int data;

                cout << "Enter your data :";
                cin >> data;

                s1.push(data);
                break;
            }
            case 2:{
                s1.pop();
                break;
            }
            case 3:{
                s1.display();
                break;
            }
            case 4:{
                s1.isEmpty();
                break;
            }
            case 5:{
                s1.isfull();
                break;
            }
            case 6:{
                s1.size();
                break;
            }
            default :
                cout << "invalid choice ";
        }

    }while(choice != 0);

return 0;
}