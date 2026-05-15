class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        unordered_set <char> tpm;
        for(int i = 0 ; i < n ; i++){
            for(int  j = 0 ; j < n ; j++){
                if(board[i][j] == '.'){
                    continue;
                }else{
                    if(tpm.count(board[i][j])){
                        return false;
                    }else{
                        tpm.insert(board[i][j]);
                    }
                }
            }
            tpm.clear();
        }
        tpm.clear();
        for(int j = 0 ; j < n ; j++){
            for(int  i = 0 ; i < n ; i++){
                if(board[i][j] == '.'){
                    continue;
                }else{
                    if(tpm.count(board[i][j])){
                        return false;
                    }else{
                        tpm.insert(board[i][j]);
                    }
                }
            }
            tpm.clear();
        }
         tpm.clear();
         for(int i = 0 ; i < n ; i+=3){
            for(int j = 0 ; j < n ; j+=3){
                for(int k = 0 ; k < 3 ; k++){
                    for(int p = 0 ; p < 3 ; p++){
                    if(board[i+k][j+p] == '.'){
                        continue;
                    }else{
                        if(tpm.count(board[i+k][j+p])){
                            return false;
                        }else{
                            tpm.insert(board[i+k][j+p]);
                        }
                    }
                }
            }
            tpm.clear();
            }
            tpm.clear();
         }
         return true;
    }
};
