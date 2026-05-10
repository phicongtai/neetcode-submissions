class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        unordered_set<int> tk ;
        vector<int> kq;
        int size = nums.size();
        for(int i = 0 ; i < size ; i++){
            mp[nums[i]]++;
        }
        int i = 0 ;
        int max = 0;
        int temp = 0;
        while(i < k){
        for(pair<int ,int> it: mp){
            if(tk.count(it.first) == 0 && it.second > max){
                max = it.second;
                temp = it.first;
            }
        }
        tk.insert(temp);
        kq.push_back(temp);
        max = 0;
        i++;
        }
        return kq;
    }
};