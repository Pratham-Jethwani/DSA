/*
to check if the given key is present in an array or not
*/

/*
#include<iostream>
using namespace std;
bool linearsearch(int arr[],int n,int key)
{   
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return true;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        return false;
    }
}
int main()
{
    int arr[5]={1,3,-6,5,4};
    int key,n=5;
    cout<<"enter the key: ";
    cin>>key;
    bool found=linearsearch(arr,n,key);
    if(found)
    {
        cout<<key<<" is present.";
    }
    else
    {
        cout<<key<<" is not present.";
    }
}
*/


/*
reversing an array(swap first and last,scond and second last)
*/
/*
#include<iostream>
using namespace std;
void reverse(int a[],int n)
{
    int start=0,end=n-1,temp;
    while(start<end)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[6]={1,2,3,4,5,6};
    int n=6;
    reverse(a,n);
    printarray(a,n);
}
*/

