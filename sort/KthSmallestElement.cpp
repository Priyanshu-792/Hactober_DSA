// Rest of the code is already given

class Solution
{
    public:
    int kthSmallest(int arr[], int n, int k)
    {
        sort(arr, arr + n);
        return arr[k - 1];
    }
};