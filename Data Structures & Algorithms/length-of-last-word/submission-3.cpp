class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<char> st;
        int n = s.length();
        int count;
        int i = n-1;
        if(n == 1) return 1;
        while(true){
        if(!st.empty() && s[i] == ' '){
            return st.size();
        }
        if(s[i] == ' '){
            i--;
        }
        if(s[i] != ' '){
            st.push(s[i]);
            i--;
        }
        }
    }
};