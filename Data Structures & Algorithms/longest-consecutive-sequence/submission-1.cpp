class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int count = 1; 
        int maxl = 0;
        if(n==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i = 1 ; i < n ; i++){
            if(nums[i-1] != nums[i]){
                if(nums[i] - nums[i-1] == 1 ){
                    count++;
                }else{
                    maxl=max(maxl,count);
                    count = 1;
                }
            }
        }
        maxl=max(maxl,count);
        return maxl;
    }
};
