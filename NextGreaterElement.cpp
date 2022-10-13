// Given an array, print the Next Greater Element (NGE) for every element. 
// The Next greater Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider the next greater element as -1.

// A Stack based C++ program to find next
// greater element for all array elements.
#include<bits/stdc++.h>
using namespace std;
vector<int> nextLargestElement(vector<int> &arr,int n)
{
    vector<int> v;
    stack<int> st;
    // We traverse from right side and keep track of next greatest element for every number in given array
    // If there is no number for any particular element i.e. stack is empty, then we push -1 to result array
    for(int i=n-1;i>=0;i--)
    {
        if(st.size()==0)
        {
            v.push_back(-1);
        }
        // If the top element of stack is smaller than the current element arr[i], then we pop elements from stack until we find 
        // a element greater than it or until the stack becomes empty
        else if(st.size() && st.top()<=arr[i])
        {
            while(st.size() && st.top()<=arr[i])
            {
                st.pop();
            } 
            // After performing some operations if we find a element greater than it we push to result array otherwise push -1 in array
            if(st.size()==0) v.push_back(-1);
            else v.push_back(st.top());
        }
        else
        {
            v.push_back(st.top());
        }
        st.push(arr[i]);
    }
    // Reversing the array because we traversed the array from right side and the order is reversed
    reverse(v.begin(),v.end());
    return v;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int> ans=nextLargestElement(v,n);
    // Printing the ans array which contains next greater element for each element in given array
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}