#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public: 
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
         vector<int> v;
        
        int i, colstart = 0, colend = c-1, rowstart = 0, rowend = r-1;

    while (colstart <= colend && rowstart <= rowend) {
        
        for (i = colstart; i <= colend; ++i) {
             v.push_back(matrix[rowstart][i]);
        }
        rowstart++;

        for (i = rowstart; i <= rowend; ++i) {
            v.push_back(matrix[i][colend]);
        }
        colend--;
    
        if (rowstart <= rowend) { 
            for (i = colend; i >= colstart; --i) {
             v.push_back(matrix[rowend][i]);
          }
          rowend--;
        }
    
        if (colstart <= colend) { 
            for (i = rowend; i >= rowstart; --i) {
             v.push_back(matrix[i][colstart]);
        }
        colstart++;
        }
    }
       
         return v;
        
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
