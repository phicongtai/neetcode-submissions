class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> kq;
        unordered_map<int,int> temp;
        int s1 = nums1.size() , s2 = nums2.size();
        for(int  i = 0 ; i < s2 ; i++){
            temp[nums2[i]] = i;
        }
        for(int j = 0 ; j < s1 ; j++){
            int temp1 = nums1[j];
            bool check = false;
            for(int  k = temp[temp1] ; k < s2 ; k++){
                if(temp1 < nums2[k]){
                    kq.push_back(nums2[k]);
                    check = true;
                    break;
                }
            }
            if(check == false){
                kq.push_back(-1);
            }
        }
        return kq;
    }
};