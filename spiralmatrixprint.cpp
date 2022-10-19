#include<iostream>
#include<vector>
#include <string>
using namespace std;


void spiral(vector<vector<int>> a){
    int k=0,l=0,i;
    int m = a.size();
    int n =a[0].size();
    while(k<=m && l<=n){
        for(int i = l ; i<n; i++){
            cout<<a[k][i]; 
        }
        k++;
        for(int i = k; i<m ; i++){

            cout<<a[i][n-1];
        }
        n--;
        for(i = n-1;i>=l;i--){
        cout<<a[m-1][i];
        }
        m--;
        for(int i = m-1;i>=k;i--){
        cout<<a[i][l];
        }
        l++;
    }
    }
int main(){
    vector<vector<int>>vec = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    cout<<"size"<<vec.size();
    cout<<"size"<<vec[0].size();
    cout<<"size"<<sizeof(vec);
    // spiral(vec);
    
}
