// Rest of the code is already given

class Solution
{
    public:
    string countSort(string arr)
    {
        
        int count[27] = {0};
        int len = arr.length();
        
        for(int i=0;i<len;i++){
            count[int(arr[i])-97]++;
        }
        
        for(int i=1;i<27;i++){
            count[i] += count[i-1];
        }
        
        int temp[len] = {0};
        for(int j=len-1;j>=0;j--){
            temp[count[int(arr[j])-97]-1] = arr[j];
            count[int(arr[j]) - 97]--;
        }
        for(int i=0;i<len;i++){
            arr[i] = temp[i];
        }
        return arr;
    }
};