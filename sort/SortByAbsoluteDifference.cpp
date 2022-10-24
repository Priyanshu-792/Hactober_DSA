// Rest of the code is already given

class Solution
{
    public:
    void sortABS(int arr[], int n, int x)
    {
    stable_sort(arr, arr + n, [x](int a, int b)
    {
        if (abs(a - x) < abs(b - x))
            return true;
        else
            return false;
    });
}