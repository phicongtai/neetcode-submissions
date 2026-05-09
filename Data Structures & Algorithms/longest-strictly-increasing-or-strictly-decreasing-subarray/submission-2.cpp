class Solution {
   public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int kq = 1;
        int size = nums.size();
        int count = 1;
        int temp2 = 0;
        for (int i = 0; i < size - 1; i++) {
            int check = 0;
            int temp = nums[i] - nums[i + 1];
            if(temp > 0){
                check = 1;
            }else{check = -1;}
            if (check != temp2) {
                if (count > kq) {
                    kq = count;
                }
                count = 1;
            }
            if (temp < 0) {
                ++count;
            }
            if (temp > 0) {
                ++count;
            }
            if (temp == 0) {
                count = 1;
            }
            temp2 = check;
        }
        if (count > kq) {
            kq = count;
        }
        return kq;
    }
};