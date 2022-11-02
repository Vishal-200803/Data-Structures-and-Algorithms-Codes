#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++)
        if(arr[i]<=pivot)
            cnt++;
    int pivot_index=cnt+s;
    swap(arr[s],arr[pivot_index]);
    int i=s;int j=e;

    while((i<pivot_index)&& (j>pivot_index))
    {
            while(arr[i]<=pivot)
                i++;
            
            while(arr[j]>pivot)
                j--;
                    
            if((i<pivot_index) && (j>pivot_index))
                swap(arr[i++],arr[j--]);
    }
    return pivot_index;
}
void quick_sort(int arr[],int s,int e)
{
    if(s<e)
    {
        int p=partition(arr,s,e); //partition the array from p(pivot index)

        quick_sort(arr,s,p-1);//sorting the left part
        quick_sort(arr,p+1,e);//sorting the right part
    }
 
}
int main()
{   int arr[11]={4,23,6,9,1,8,0,5,1,3,2};
    cout<<"Unsorted array"<<endl;
    for(int i=0;i<11;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    quick_sort(arr,0,10);
    
    cout<<"Sorted array"<<endl;
    for(int i=0;i<11;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
} 