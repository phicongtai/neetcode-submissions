class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size() , j = 2 , mx = 0;
        if(n == 1){
            return {-1};
        }
        vector<int> ans (n,-1);
        for(int i = n-1 ; i > 0; i--){
            mx = max(mx , arr[i]);
            ans[n-j] = mx;
            j++;
        }
        return ans;
    }
};