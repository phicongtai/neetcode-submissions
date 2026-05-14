class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        auto n = nums.size();
        int result[n];
        result[0] = 1;
        for(int i = 1 ; i < n ; i++){
            result[i] = result[i-1] * nums[i-1];
        }
        int temp = 1;
        for(int i = n -1 ; i >= 0; i--){
            result[i] *= temp;
            temp *= nums[i];
        } 
        vector <int> kq;
        for(int i = 0 ; i < n ; i++){
            kq.push_back(result[i]);
        }
        return kq;
    }
};