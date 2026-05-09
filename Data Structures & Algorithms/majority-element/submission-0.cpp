class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        int n = nums.size();
        for(int i = 0 ; i < n ;i++){
            count[nums[i]]++;
        }
        int max = -1;
        int kq = 0;
        for(const auto& [key, value] : count){
            if(value > max){
                max = value;
                kq = key;
            }
        }
        return kq;
    }
};