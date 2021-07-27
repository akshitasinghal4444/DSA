/*
1. display all elements - O(n)
2. add/append an element - O(1)
3. insert at a particular index - O(n)
*/

#include<iostream>
using namespace std;
#define max 100

void display(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

void append(int *a,int *n)
{
    if(*n<max)
    {
        cout<<"enter no. :";
        cin>>a[*n];
        (*n)++;
    }
    else
    {
        cout<<"overflow !!!\n";
    }
}

void insert(int *a,int *n)
{
    int num,index,i;

    if(*n>=max)
    {
        cout<<"overfloww !!\n";
        return;
    }

    cout<<"enter no. to be inserted and index \n";
    cin>>num>>index;

    if(index>=max)
    {
        cout<<"invalid index !!\n";
        return;
    }

    for(i=*n;i>index;i--)
    {
        a[i]=a[i-1];
    }
    a[i]=num;
    (*n)++;
}

void deletes(int *a,int *n)
{
    int index,i;

    if(*n==0)
    {
        cout<<"underfloww !!\n";
        return;
    }

    cout<<"enter index :  \n";
    cin>>index;

    if(index>=*n)
    {
        cout<<"invalid index !!\n";
        return;
    }

    for(i=index;i<(*n)-1;i++)
    {
        a[i]=a[i+1];
    }
    (*n)--;
}

int main()
{
    int a[max],n;
    int i,j,ch;

    cout<<"enter no. of elements : ";
    cin>>n;

    for(i=0;i<n;i++)
    cin>>a[i];

    do
    {
        cout<<"menu :\n1.append\n2.insert\n3.display\n4.delete\n5.exit\n";
        cout<<"enter choice (1-5):";
        cin>>ch;

        switch(ch)
        {
            case 1:append(a,&n);
                  break;
            case 2:insert(a,&n);
                  break;
            case 3:display(a,n);
                  break;
            case 4:deletes(a,&n);
                  break;
            case 5:
                  break;
            default:cout<<"wrong choice !!\n";
        }
    } while (ch!=5);
    
    

    return 0;
}