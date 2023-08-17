// to check if the number is prime or not
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    int ct=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {   
            ct++;
            cout<<"not a prime number";
            break;
        }
    }
    if(ct==0)
    {
        cout<<"prime!!";

    }

}