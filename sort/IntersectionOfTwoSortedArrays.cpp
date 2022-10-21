// Rest of the code is already given

class Solution
{
    public:
    vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
{   vector<int>v;
    int i=0,j=0;
    
    while(i<N && j<M)
    {
        if(i>0){
            while(arr1[i-1]==arr1[i]) 
            i+=1;
        }
        if( ( (i>0  && arr1[i-1] != arr1[i]) || i==0 ) && arr1[i]==arr2[j]   )
        {
            v.push_back(arr1[i]);
            i++;
            j++;
            
        }
        
      
        
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr2[j]<arr1[i])
        {
            j++;
        }
    }
    if(v.size()==0)
    v.push_back(-1);
    
    return v;
}
};