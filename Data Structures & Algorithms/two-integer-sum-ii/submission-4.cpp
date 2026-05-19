class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> kq;
        int n = numbers.size();
        int l = 0;
        int r = n - 1;
        bool check = true;
        int sum = 0;
        while(check){
            sum = numbers[l] + numbers[r];
            if(sum == target){
                check = false;
            }else if(sum > target){
                r--;
            }else if(sum < target){
                l++;
            }
        }
        kq.push_back(l+1);
        kq.push_back(r+1);
        return kq;
    }
};
