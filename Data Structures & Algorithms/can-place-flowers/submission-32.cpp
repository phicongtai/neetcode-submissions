class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        int d = n;
        if (size == 1) {
            if (flowerbed[0] == 0) {
                d--;
            }
            if (d <= 0) {
                return true;
            } else {
                return false;
            }
        }
        for(int i = 0 ; i < size;i++){
            bool check =  false;
            if(i == 0){
               if(flowerbed[i] == 0 && flowerbed[i+1] == 0){
                flowerbed[i] = 1;
                check =  true;
               } 
            }else if(i+1 < size){
                if(flowerbed[i -1 ] == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0){
                    flowerbed[i] = 1;
                    check =  true;
                    }
            }else{
                if(flowerbed[i] == 0 && flowerbed[i-1] == 0){
                    flowerbed[i] = 1;
                    check =  true;
                }
        }
        if(check ==  true){
            d--;
        }
    }
    if(d <= 0){
        return true;
    }else{
        return false;
    }
    }
};