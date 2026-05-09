class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> temp;
        for(const auto& temp2 : emails){
            string temp3;
            bool check = false,check1 =false; //check để kiem tra đi qua dấu @ hay chưa, check1 để diểm tra tới dấu + hay chưa
            for(int i = 0 ; i<temp2.length();i++){
                if(temp2[i] == '@'){
                    temp3.push_back(temp2[i]);
                    check = true;
                    check1 = false;
                } else if(check ==  false && temp2[i] == '+'){
                    check1 = true;
                    continue;
                }else if(check ==  false && check1 == true){
                    continue;
                }else if(check == false && check1 == false && temp2[i] !='.'){
                    temp3.push_back(temp2[i]);
                } else if(check == true){
                     temp3.push_back(temp2[i]);
                }
            }
            temp.insert(temp3);
        }
        return temp.size();
    }  
};