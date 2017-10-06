class Solution {
public:
    bool isUgly(int num) {
        if(num <= 0) return false;
        if(num == 1) return true;
                
        while(num%2==0) {
            num = num/2;
        }
        
        int sq = sqrt(num);
        for (int i = 3; i <= sq; i += 2) {
            while(num%i==0) {        
                if(i > 5) return false;
                num = num/i;                
            }
        }
        
        if(num > 5) return false;
        
        return true;
    }
};