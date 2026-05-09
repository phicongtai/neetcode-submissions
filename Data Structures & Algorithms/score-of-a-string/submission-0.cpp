class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        int n = s.length();
        int l = 0 , r = 1;
        while(r < s.length()){
            sum+= abs(s[r] - s[l]);
            r++ ; l++;
        }
        return sum;
    }
};