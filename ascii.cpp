// Q) to check if the given character is lowercase or uppercase or an integer
/*
If the ASCII value lies in the range of [48, 57], then it is a number.
If the ASCII value lies in the range of [65, 90], then it is an uppercase letter.
If the ASCII value lies in the range of [97, 122], then it is a lowercase letter.
*/

#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"\nEnter: ";
    cin>>c;
    cout<<"\nthe ascii value of the character is "<<int(c);
    if(c>='A' && c<='Z')
    {
        cout<<"\nis uppercase";
    }
    else if(c>='a' && c <='z')
    {
        cout<<"\nis lower";
    }
    else if(c>'0' && c<'9')
    {
        cout<<"numeric";
    }
    
}
