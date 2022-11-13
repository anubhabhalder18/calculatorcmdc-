#include<iostream>
using namespace std;

void add(double a , double b){
    cout<<a<<"+"<<b<<"="<<a+b;
}

void sub(double a , double b){
    cout<<a<<"-"<<b<<"="<<a-b;
}

void mul(double a , double b){
    cout<<a<<"*"<<b<<"="<<a*b;
}
void div(double a , double b){
    cout<<a<<"/"<<b<<"="<<a/b;
}

void cal(){
    double num1,num2;
    char op;
    cout<<"\t\tWelcome to command line based CALCULATOR \n\nEnter data like - num1 operator num2"<<endl;
    cin>>num1>>op>>num2;
    switch(op){
        case '+':
        add(num1,num2);
        break;

        case '-':
        sub(num1,num2);
        break;

        case '*':
        mul(num1,num2);
        break;

        case '/':
        div(num1,num2);
        break;

        default:
        cout<<"Wrong input";
        break;
    }
}

int main(){
    cal();
    int f=1;
    while(f==1){    
        cout<<"\nEnter flag 1 to start calculator 0 to stop\t";
        cin>>f;
        if(f==1){
            cal();
        }
        }
    return 0;

}