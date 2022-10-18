class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Time : O(N^2) and Space: O(N);
        if(s.size() == 1){
            return 1;
        }
        int size = 0;
        int i,j;
        for(i = 0;i<s.size();i++){
            set<int> S;
            for(j = i;j<s.size();j++){
                if(S.find(s[j]) != S.end()){
                    size = max(size, j-i);
                    break;
                }
                else{
                    S.insert(s[j]);
                }
            }
            size = max(size, j-i);
        }
        return size;
    }
};
