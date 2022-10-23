#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float a ,b;
    cout<<"Enter the two numbers\n";
    cin>>a>>b;
    char op;
    cout<<"Enter the Arithmetic symbol\n";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"The sum = "<<a+b;
        break;
    case '-':
        cout<<"The subtract = "<<a-b;
        break;
    case '*':
        cout<<"The multiplication = "<<a*b;
        break;
    case '/':
        cout<<"The Quotient is"<<a/b;
        break;              
    default:
        cout<<"Invalid symbol";
        break;
    }

    return 0;
}
