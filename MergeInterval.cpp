#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    int index = 0, n = intervals.size();
    vector<vector<int>> ans;
    for (int i = 1; i < n; i++)
    {
        if (intervals[index][1] >= intervals[i][0])
        {
            intervals[index][1] = max(intervals[i][1], intervals[index][1]);
        }
        else
        {
            index++;
            intervals[index] = intervals[i];
        }
    }
    for (int i = 0; i <= index; i++)
    {
        vector<int> temp;
        temp.push_back(intervals[i][0]);
        temp.push_back(intervals[i][1]);
        ans.push_back(temp);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> intervals(n);
    for(int  i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        intervals[i].push_back(x);
        intervals[i].push_back(y);
    }
    vector<vector<int>> ans=overlappedInterval(intervals);
    for(auto it:ans)
    {
        for(auto j:it)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}