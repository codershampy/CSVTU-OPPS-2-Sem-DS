#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int main()
{
    int num1,num2,sum;
    cout <<"Enter two numbers:";
    cin >> num1 >> num2;

    sum = add(num1,num2);
    cout << "Sum of"<<"add"<< num2<< "is" <<sum<<endl;
    return 0;
}