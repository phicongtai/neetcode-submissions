class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.length();
        int m = t.length();
        int point1 = 0;
        int point2 = 0;
        while(point1 < n){
            if(s[point1] == t[point2]){
                point1++;
                point2++;
            }else{
                point1++;
            }
        }
        if(point2 == 1 && m == 1){
            return 0;
        }
        if(point1 != 0 && point2 > 0){
         int ans = m - point2;
         return ans;
        }
        if(point1 == n){
            return m;
        }
    }
};