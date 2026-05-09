class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int size1 = s.length();
        int size2 = t.length();
        int arr1[255] = {0};
         int arr2[255] = {0};
        if(size1 != size2){
            return false;
        }
        for(int i = 0;i< size1 ; i++){
            if(arr1[s[i]] == 0){
                arr1[s[i]] = t[i];
            }else{
                if(arr1[s[i]] != t[i]){
                    return false;
                }
            }
        }
        for(int i = 0;i< size1 ; i++){
            if(arr2[t[i]] == 0){
                arr2[t[i]] = s[i];
            }else{
                if(arr2[t[i]] != s[i]){
                    return false;
                }
            }
        }
        return true;
    }
};