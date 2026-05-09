class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char , int> temp;
        int n = s.length();
        for(int i = 0 ; i < n ; i++){
            temp[s[i]]++;
        }
        int a1 = 0 , a2 = 10000;
        for(pair<char , int> i : temp){
            if(i.second % 2 == 0 ){
                if(i.second < a2) a2 = i.second;
            }else{
                if(i.second > a1) a1 = i.second;
            }
        }
        int kq = a1 - a2;
        return kq;
    }
};