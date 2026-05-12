class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();
        if(n == 0) return "";
        char c = '#';
        string kq = "";
        for(int i = 0 ; i < n ; i++){
            int m = strs[i].length();
            kq += c;
            kq += m;
            kq += strs[i];
        }
        return kq;
    }

    vector<string> decode(string s) {
        vector<string> kq ;
        int n = s.length();
        string temp = "";
        char c = '#';
        for(int i = 0 ; i < n ; i++){
            if(s[i] == c){
                continue;
            }else{
                int m = i + (unsigned char)s[i] + 1;
                for(int j = i+1 ; j < m ; j++){
                    temp += s[j];
                }
                i = m;
                kq.push_back(temp);
                temp = "";
            }
        }
        return kq;
    }    
};
