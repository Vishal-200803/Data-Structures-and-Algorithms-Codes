#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {   //Let arr[i] be minimum.
        int min=i; 
        
        for(int j=i+1;j<n;j++)
        if(arr[j]<arr[min])
        swap(arr[j],arr[min]);
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
   
}
int main()
{int *arr_sort;
    int arr[6]={5,3,6,19,9,2};
    
    selection_sort(arr,6);
   
    return 0;
}