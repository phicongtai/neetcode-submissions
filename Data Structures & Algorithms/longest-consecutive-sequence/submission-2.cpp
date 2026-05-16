class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int count = 1; 
        int temp2 = 0;
        int maxl = 0;
        if(n==0){
            return 0;
        }
        unordered_set<int> temp(nums.begin(),nums.end());
        for(int i : temp){
            if(temp.find(i-1) == temp.end()){
                temp2 = i;
                count = 1;
                while(temp.find(temp2 + count) != temp.end()){
                    count++;
                }
            }
            maxl = max(maxl,count);
        }
        return maxl;
    }
};
