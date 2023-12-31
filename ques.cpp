/*
about for loops
post increment -> i++ (first use the value of i and then increment it)  i+=1(i=i+1)
pre increment -> ++i   (first increment the value of i and then use it) 
post decrement -> i--  (first use the value of i and then decrement it) i-=1(i=i-1)
pre decrement -> --i    (first decrement the value of i and then us it)
*/

//________________________________________________________________________________________________________________
// to check if the number is prime or not
/*
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
}*/

//________________________________________________________________________________________________________________
// fibonacci series
/*
#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,sum,n;
   
    cout<<"\nenter the length of the series: ";
    cin>>n;
    cout<<a<<"\t"<<b<<"\t";
    for(int i=0;i<n;i++)
    {
       sum=a+b;
       cout<<sum<<"\t";
       a=b;
       b=sum;
    }
}
*/

//________________________________________________________________________________________________________________
/*
//use of continue
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<25;i++)
    {
        if(i<=20)
        {
            continue;
        }
        else
        {
            cout<<i<<"\t";
        }
    }
}
*/

//________________________________________________________________________________________________________________

/*
n=234
give (product of its digits)-(sum of its digits)
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,prod=1;
    cin>>n;
    while(n>0)
    {
        int rem=n%10;
        sum=sum+rem;
        prod=prod*rem;
        n=n/10;
    }
    cout<<(prod-sum);
}*/

//________________________________________________________________________________________________________________
/*
to count the number of 1's in the binary form of an integer
*/
/*
#include<iostream>
using namespace std;
int sol(int n)
{   int count=0;
    while(n!=0)
    {
        if((n&1)==1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int ans=sol(n);
    cout<<ans;
}
*/


/*
number of notes of 100,50,20,1 required for amount using switch case
*/
/*
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
*/
