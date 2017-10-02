class Solution {
    
    public int check(String A, String B, String C) {
        if(C.indexOf(B) >= 0) return 0;
        if((C.concat(A)).indexOf(B) >= 0) return 1;
        return -1;
    }
    
    public int repeatedStringMatch(String A, String B) {
        
        int n = 1;
        String C = A;                    
        while(C.length() < B.length()) {
            C = C.concat(A);
            ++ n;
        }                    
        
        int tmp = check(A, B, C);
        if(tmp == -1) return -1;
        else return tmp + n;
    }
}