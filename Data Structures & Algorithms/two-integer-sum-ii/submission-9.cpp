class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0;
        int r = n - 1;
        bool check = true;
        int sum = 0;
        while(check){
            sum = numbers[l] + numbers[r];
            if(sum == target){
                return{l+1,r+1};
            }else if(sum > target){
                r--;
            }else if(sum < target){
                l++;
            }
        }
        return {};
    }
};
