class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> kq;
        unordered_set<string> st;
        int n = words.size();
        for(int i=0 ; i < n ; i++){
            for(int j = 0 ; j < n ;j++){
                if(i!=j){
                    if(words[i].length() >= words[j].length()){
                        int l = 0 ,r = 0 , check = 0;
                        while(l < words[i].length()){
                            if(words[i][l] == words[j][r] ){
                                check++;
                                l++;
                                r++;
                            }else{
                                check = 0;
                                l++;
                                r=0;
                            }
                            if(check == words[j].length() && st.find(words[j]) == st.end()){
                            st.insert(words[j]);
                        }
                        }
                    }else{
                        continue;
                    }
                }else{
                    continue;
                }
            }
        }
    return vector<string>(st.begin(), st.end());;
    }
};