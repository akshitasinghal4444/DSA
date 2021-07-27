#include<iostream>
using namespace std;

//using separate array
void reverse1(int *a,int n)
{
    int b[n];
    int i,j;

    for(i=0,j=n-1;i<n;i++,j--)
    b[i]=a[j];

    for(i=0;i<n;i++)
    a[i]=b[i];
}

//without using another array
void reverse2(int *a,int n)
{
    int i,j;
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}

int main()
{
    int n,i;

    cin>>n;

    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];

    reverse2(a,n);

    for(i=0;i<n;i++)
    cout<<a[i]<<" ";

    return 0;
}