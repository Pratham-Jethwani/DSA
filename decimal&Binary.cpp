// converting decimal to binary
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,bit;
    int ans=0;
    cout<<"enter the number: ";
    cin>>n;
    int i=0;
    while(n!=0)
    {   
        bit=n&1;
        ans=(bit*pow(10,i))+ans;
        i++;
        n=n>>1;
    }
    cout<<ans;
}
*/


//converting binary to decimal
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,last_digit;
    cout<<"enter the binary number: ";
    cin>>n;
    int i=0,ans=0;
    while(n!=0)
    {
        last_digit=n%10;
        
        ans=(last_digit*(pow(2,i)))+ans;
        i++;
        n=n/10;
    }
    cout<<ans<<endl;
}
*/


//two'complement
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,bit,ans=0,i=0;
    cout<<"enter the number: ";
    cin>>n;
    //one's complement
    while(n!=0)
    {
        if((n&1)==1)
        {
            bit=0;
        }
        else if((n&1)==0)
        {
            bit=1;
        }
        ans=bit*pow(10,i)+ans;
        i++;
        n=n>>1;
    }
    
    //two's complement
    int two_comp=0,j=0,flag=0;
    while(ans!=0)
    {
        if((ans%10)==1)
        {
            bit=0;
        }
        else if((ans%10)==0)
        {
            bit=1;
            flag=1;
        }
        two_comp=(bit*pow(10,j))+two_comp;
        j++;
        ans=ans/10;
        if(flag==1)
        {
            break;
        }
    }
   

    while(ans!=0)
    {
        if((ans%10)==1)
        {
            bit=1;
        }
        else if((ans%10)==0)
        {
            bit=0;
        
        }
        two_comp=(bit*pow(10,j))+two_comp;
        j++;
        ans=ans>>1;
    }
    cout<<two_comp;
}





