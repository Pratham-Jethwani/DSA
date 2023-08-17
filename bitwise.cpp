#include<iostream>
using namespace std;
int main()
{
    int a=4,b=5;
    cout<<"A & B: "<< (a&b)<<endl;  //and operator
    cout<<"A|B: "<<(a|b)<<endl;     //or operator
    cout<<"~a: "<<(~a)<<endl;       //not operator
    cout<<"a^b: "<<(a^b)<<endl;     //xor operator

    //left shift multiply by two
    cout<<"left shift on A for two times: "<<(a<<2)<<endl;      //4 -> 000000000100 after two times left shift 000000010000

    //right shift divide by two
    cout<<"right shift on B for two times: "<<(b>>2)<<endl;     //5 -> 000000000101 after two times right shift 000000000001




}



