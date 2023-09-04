/*
write a program fro calculating a^b using a will defined function
*/
/*
#include<iostream>
using namespace std;
int pow(int a,int b)
{
    int ans=1;
    for(int i=0;i<b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
    int a,b;
    cout<<"\nenter the numbers: ";
    cin>>a>>b;
    int res=pow(a,b);
    cout<<a<<"^"<<b<<": "<<res;
}
*/

/*
to check if the number is even or odd using well dfined function
*/
/*
#include<iostream>
using namespace std;
bool iseven(int num)
{
    if(num%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    cout<<"enter the number: ";
    cin>>num;
    bool res=iseven(num);
    if(res==true)
    {
        cout<<num<<" is even";
    }
    else
    {
        cout<<num<<" is odd";
    }
}
*/



/*
calculate nCr given value of n and r, nCr=n!/r!*(n-r)!
*/
/*
#include<iostream>
using namespace std;
int fact(int num)
{
    int ans=1;
    while(num>0)
    {
        ans=ans*num;
        num--;
    }
    return ans;
}
int main()
{
    int n,r;
    cout<<"n: ";
    cin>>n;
    cout<<"\nr: ";
    cin>>r;
    int res=fact(n)/(fact(r)*fact(n-r));
    cout<<n<<"C"<<r<<": "<<res;

}
*/

/*
to check if the number is prime or not using well defined function
*/
/*
#include<iostream>
using namespace std;
bool isprime(int num)
{   
    int count=0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count>0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    cout<<"\nenter the number: ";
    cin>>num;
    int res=isprime(num);
    if(res)
    {
        cout<<num<<" is prime number";
    }
    else
    {
        cout<<num<<" is not prime number";
    }
}
*/

/*
calculate for nth term for AP (3*n+7) given the vslue of n using well defined function
*/
/*
#include<iostream>
using namespace std;
int ap(int n)
{
    return (3*n)+7;
}
int main()
{
    int n;
    cout<<"enter the nth term: ";
    cin>>n;
    int res=ap(n);
    cout<<"AP: "<<res;
}
*/


/*
total number of set bits in a and b(total number of 1s in and b)
*/
/*
#include<iostream>
using namespace std;
int setbit(int num)
{
    int count=0;
    while(num>0)
    {
        if((num&1)==1)
        {
            count++;
        }
        num>>=1;
    }
    return count;
}
int main()
{   

    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    int res=setbit(a)+setbit(b);
    cout<<"setbits in "<<a<<" and "<<b<<" is: "<<res;
}
*/

/*
return the nth term of the fibonacci series using well defined function
*/
/*
#include<iostream>
using namespace std;
int fibonacci(int num)
{
    int a=0,b=1;
    int sum=0;
    for(int i=2;i<num;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"enter the nth term: ";
    cin>>n;
    int res=fibonacci(n);
    cout<<n<<"th term in fibonacci series is: "<<res;
}
*/
