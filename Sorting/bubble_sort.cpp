#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {   
        bool exp= false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                {   
                    exp=true;
                    swap(arr[j],arr[j+1]);
                }
        }               
        if(exp==false)             //bool=false indicates that there is noswaping in current value of i
        break;                      //which indictes that remaining array is already sorted
    }

}

int main()
{
    int arr[]={5,3,8,1,9,0};
    bubble_sort(arr,6);
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}