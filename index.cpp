#include <iostream>
using namespace std;

struct Stack{
    int data[5];
    int top;

};
Stack a;
bool isFull();
bool isNull();
void Push(int x);
int Pop();
void Create();
void Cetak();

int main(){
    Create();
    Push(9);
    Push(8);
    Push(21);
    Cetak();
    return 0;
}

bool isFull(){
    return (a.top == 4);
}
bool isNull(){
    return (a.top == -1);
}
void Push(int x){
    if (!isFull())
    {
        a.top++;
        a.data[a.top]=x;
    }else{
        cout << "Stack Kosong" << endl;
    }
}
int Pop(){
    int x = 0;
    if(!isNull()){
        x = a.data[a.top];
        --a.top;
    }else{
        cout << "stack kosong" << endl;
    }
    return x;
}
void Create(){
    a.top=-1;
}
void Cetak(){
    if(!isNull()){
        for (int t = a.top; t >=0; t--)
        {
            cout << "[" << a.data[t] << "]" <<  endl;
        }
        
    }
}
