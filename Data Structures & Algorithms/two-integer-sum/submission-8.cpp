class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> temp;
        int size = nums.size();
        for(int i = 0 ; i < size ; i++){
            temp[nums[i]] = i;
        }
        int point1 = 0 ;
        int point2 = 0;
        for(int i = 0 ; i < size ;i++){
            int temp2 = target - nums[i];
            if(temp.count(temp2) && temp[temp2] != i){
                point1 = i;
                point2 = temp[temp2];
                vector<int> kq;
        kq.push_back(point1);
        kq.push_back(point2);
        return kq;
            }
        }
        return {};
    }
};
