#include<iostream>
using namespace std;

void left_shift(int *a,int n)
{
    int i;
    for(i=0;i<n-1;i++)
    a[i]=a[i+1];
    a[i]=0;
}

void left_rotate(int *a,int n)
{
    int i;
    int temp=a[0];
    for(i=0;i<n-1;i++)
    a[i]=a[i+1];
    a[i]=temp;
}

int main()
{
    int n,i;

    cin>>n;

    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];

    left_rotate(a,n);

    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;

    left_shift(a,n);

    for(i=0;i<n;i++)
    cout<<a[i]<<" ";

    return 0;
}