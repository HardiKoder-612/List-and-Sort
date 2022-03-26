/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int n,swap=0;
    cout<<"\nEnter the size of the array: ";
    cin>>n;
    int arr[n],temp;
    cout<<"\nEnter the array randomly->\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nBubble sorting the array.....\n";
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap++;
            }
        }
        cout<<"\nPass "<<i+1<<":\t";
        for(int k=0;k<n;k++)
        cout<<arr[k]<<"\t";
        cout<<endl;
    }
    cout<<"\nBubble Sorting Completed.....";
    cout<<"\n\nArray is->\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\nAfter "<<swap<<" swaps.";
}
