/* 
to reverse a number an 32-bit integer, if the reversed integer is out of range of [2^-31, 2^31+1] that is if  reversed integer is 64-bit then give
output as 0.
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n,rem,rev=0;
    cout<<"enter the number: ";
    cin>>n;
    while(n!=0)
    {   
        if(rev>(INT32_MAX/10)||rev<(INT32_MIN/10))
        {
            rev=0;
            break;
        }
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    cout<<"reverse is: "<<rev;
}
*/

/*
two's complement
*/
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,bit,i=0,ans=0;
    cout<<"enter number: ";
    cin>>n;
    while(n!=0)
    {
        if((n&1)==0)
        {
            bit=1;
        }
        else if((n&1)==1)
        {
            bit=0;
        }
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    int comp=0,j=0;
    while(ans!=0)
    {
        bit=ans%10;
        comp=(bit*pow(2,j))+comp;
        ans=ans/10;
        j++;

    }
    cout<<comp;
}
*/

/*
two check if the given integer can be written in power of 2.
*/
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<"enter the number: ";
    cin>>n;
    for(int i=0;i<=30;i++)              //int ranges from (2^-31,2^31-1)
    {
        if(pow(2,i)==n)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
*/

/*
number of notes of 100,50,20,1 required for amount using switch case
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the amount ";
    cin>>n;
    int notes[4]={100,50,20,1};
    
    for(int i=0;i<sizeof(notes)-1;i++)
    {
        switch(notes[i])
        {
            case 100:
            cout<<"Number of 100Rs note: "<<n/100<<endl;
            n=n%100;
            break;


            case 50:
            cout<<"Number of 50Rs note: "<<n/50<<endl;
            n=n%50;
            break;
            

            case 20:
            cout<<"Number of 20Rs note: "<<n/20<<endl;
            n=n%20;
            break;
            

            case 1:
            cout<<"Number of 1Rs note: "<<n/1<<endl;
            n=n%1;
            break;
        }
        if(n==0)
        {
            break;
        }
    }
    
}

