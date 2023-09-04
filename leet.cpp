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
alternate swap(1st with second, third with fourth,fifth with sixth)
*/
/*
#include<iostream>
using namespace std;
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void swap(int a[],int n)
{
    int start=0,end=start+1,temp;
    while(end<n)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start=end+1;
        end=start+1;
    }
}
int main()
{
    int a[6]={1,2,3,4,5,6};
    int n=6;
    swap(a,n);
    printarray(a,n);
}
*/


/*
unique occurence of number
https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbE5JVTFiN185YVduVjFUbGFrRE5QaHJiclJKZ3xBQ3Jtc0trc1dFZ1k1azlaQXNqWXJPUlJlX0VGQ01pWDhxby1RNHJ1WFd3U1VXcEpYcm5Mdi1RblVxTDNIbThNYUJSazJqelJnX0pGWEllNHBvWVM3VjlfWTdBZFlRRlo3cV8xOE1iWHVoRWxFaUdtV1ZKdFQyQQ&q=https%3A%2F%2Fbit.ly%2F3y01Zdu&v=oVa8DfUDKTw
*/
#include<iostream>
using namespace std;
int unique(int arr[],int n)
{   
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];                 //logic------> a^a=0 and 0^a=a(xor)
        cout<<ans;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=unique(arr,n);
    cout<<"\n"<<res;
}

/*
return true if value of occurence of each value in an array is unique
*/