class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0 , j = 0;
        int m = s.length();
        int n = t.length();
      while(j < n){
        if(s[i] != t[j]){
            j++;
        }else{
            i++;
            j++;
        }
      }
      if(i == m){
        return true;
      }else{
        return false;
      }

    }
};