#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            arr[j+1]=arr[j];        //swap elements
            else
            break;
        }
        arr[j+1]=temp;
    }
}

int main()
{
    int arr[]={5,4,8,9,6,2};
    insertion_sort(arr,6);
    for(int i=0;i<6;i++)
    cout<<" "<<arr[i];
    cout<<endl;
    return 0;
}