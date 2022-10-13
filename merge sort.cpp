#include <iostream>
using namespace std;
void merge(int arr[] ,int s,int mid,int e){ // function for merge the array
    int length1=mid-s+1;
    int length2=e-mid;
    int *first= new int[length1];
    int *second= new int[length2];
    int k=0;
    for(int i=s;i<=mid;i++)
    {
        first[k]=arr[i];
        k++;
    }
    int j=0;
    for(int i=mid+1;i<=e;i++)
    {
       second[j]=arr[i];
        j++;
    }
    int original_index=s;
    int index1=0;
    int index2=0;
    while(index1<length1 &&  index2<length2)
    {
        if(first[index1]<second[index2])
        {
            arr[original_index]=first[index1];
            original_index++;
            index1++;
        }
        else{
           
        {
            arr[original_index]=second[index2];
            original_index++;
            index2++;
        }
        }
    }
    while (index1<length1)
    {
       arr[original_index]=first[index1];
       index1++;
       original_index++;
    }
     while (index2<length2)
    {
       arr[original_index]=second[index2];
       index2++;
       original_index++;
    }
    


}
void mergesort(int arr[],int s,int e)
{
    if(s>=e)
    return;
    int mid = s+(e-s)/2;
    mergesort(arr, s, mid);
    mergesort(arr, mid+1, e);
    merge(arr,s,mid,e);

}
int main()
{
   int arr[1000]; //making array
    int key,n;
   cout<<"enter the size of array"<<endl;
    cin >>n;
     cout<<"enter the value in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout<<"the soted array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

   
}