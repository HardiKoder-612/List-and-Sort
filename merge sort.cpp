/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
void merge(int a[],int p,int q, int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int l[n1];
    int m[n2];
    for(int i=0;i<n1;i++)
    {
        l[i]=a[p+i];
    }
    for(int j=0;j<n2;j++)
    {
        m[j]=a[q+1+j];
    }
    int i,j,k;
    i=j=0;
    k=p;
    
    while(i<n1 && j<n2)
    {
        if(l[i]<=m[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=m[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=l[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=m[i];
        j++;
        k++;
    }
}
void mergesort(int a[],int i,int j)
{
    if(i==j)
    {
        return;
    }
    else
    {
        int mid=i+(j-i)/2;
        mergesort(a,i,mid);
        mergesort(a,mid+1,j);
        merge(a,i,mid,j);
    }
}
void display(int arr[], int size)
{
    for(int i=0;i<size;i++)
    std::cout<<arr[i]<<"\t";
}
int main()
{
    int n;
    std::cout<<"\nEnter the size of the array: ";
    std::cin>>n;
    int arr[n];
    std::cout<<"\nEnter the array elements->\n";
    for(int i=0;i<n;i++)
    std::cin>>arr[i];
    std::cout<<"\nArray Before sorting->\n";
    display(arr,n);
    mergesort(arr,0,n-1);
    std::cout<<"\nArray after sorting is->\n";
    display(arr,n);
}
