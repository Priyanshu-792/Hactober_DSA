#include<iostream>
using namespace std;
int find(int arr[],int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans=ans^arr[i];
    }
    for (int  i = 1; i < size; i++)
    {
        ans=ans^i;
    }
    return ans;
    
}
int main(){
    int arr[5]={1,4,3,2,1};
    int ans=find(arr,5);
    cout<<"Answer is : "<<ans<<endl;
    return 1;
}