#include <iostream>
using namespace std;
void swap(int &m,int &n)
{
    int temp;
    temp=m;
    m=n;
    n=temp;
}

int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=0;j<=high;j++)
    {
        if(pivot>arr[j])
        {
           i++;
           swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main()
{
    int n;
    cout<<"\nEnter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the array randomly->\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEarlier the array is->\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }  
    quicksort(arr,0,n-1);
    cout<<"\nAfter quick sort array is->\n";
    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<"\t";
	}
	return 0;
}
    

