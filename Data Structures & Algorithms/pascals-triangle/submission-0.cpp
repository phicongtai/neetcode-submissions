class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> kq = {{1}};
        for(int i  = 1 ; i < numRows ; i++){
          int count = 0;
           int p1 = -1 ,p2= 0;
          kq.push_back({});
          while(count <= i){
           int num = 0;
          if(p2 == i){
            p2 = -1;
          }
          if(p1 == -1){
            num = kq[i-1][p2];
          }else
          if(p2 == -1){
            num = kq[i-1][p1];
          }else
          if(p1 != -1 && p2 != -1){
             num = kq[i-1][p1] + kq[i-1][p2];
          }
           kq[i].push_back(num);
          p1 = p2;
          p2++;
          count++;
          }
        }
        return kq;
    }
};