
#include <iostream>

using namespace std;
void merge(int a[],int l,int mid,int u)
{   int i=l;
   // int mid=(l+u)/2;
    int j=mid+1;
    int b[10]={0};      ///b[10]: size of orignal array
    int k=l;
    
    while((i<=mid)&&(j<=u))
    {
        if(a[i]<=a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++]; 
    }
        while(j<=u)
        {
            b[k]=a[j];
            j++;k++;
        }
        while(i<=mid)
        {
            b[k]=a[i];
            i++;k++;
        }
        for(k=l;k<=u;k++)
        a[k]=b[k];
}


void Merge_sort(int a[],int lb,int ub)
{   
    if(lb<ub)
    {  
        int mid=(lb+ub)/2;
        Merge_sort(a,lb,mid);
        Merge_sort(a,mid+1,ub);
        merge(a,lb,mid,ub);
        lb=ub+1;
    }
    else
    return;
}

int main()
{   cout<<"aa";
    int a[9]={1,5,10,15,8,3,17,16,20};
    cout<<"Unsorted arraay"<<endl;
    for(int i=0;i<9;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    Merge_sort(a,0,8);
    cout<<"Sorted arraay"<<endl;
    for(int i=0;i<9;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}