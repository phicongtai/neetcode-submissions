class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size();
        string kq = "";
        int j = 0 , k = 0;
        while(strs.size() != 0 && k < strs[0].size()){
            if(j < size - 1){
            if(k >= strs[j].size() || k >= strs[j+1].size() || strs[j][k] != strs[j+1][k]){return kq;}
            else{
                j++;
            }    
        }else{
            kq.push_back(strs[0][k]);
                k++;
            j = 0;
        }
    }
    return kq;
    }
};