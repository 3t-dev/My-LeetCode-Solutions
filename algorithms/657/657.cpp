class Solution {
public:
    bool judgeCircle(string moves) {
        // R: 0 [1,0]
        // L: 1 [-1,0]
        // U: 2 [0,1]
        // D: 3 [0,-1]
        int d_x[] = {1,-1,0,0};
        int d_y[] = {0,0,1,-1};
        
        int s_x = 0, s_y = 0;
        
        int size = moves.length();
        for(int i = 0; i < size; ++ i) {
            switch(moves[i]) {
                case 'R': {
                    s_x += d_x[0];
                    s_y += d_y[0];                
                }
                    break;
                case 'L': {
                    s_x += d_x[1];
                    s_y += d_y[1];                
                }
                    break;
                case 'U': {
                    s_x += d_x[2];
                    s_y += d_y[2];                
                }
                    break;
                case 'D': {
                    s_x += d_x[3];
                    s_y += d_y[3];                
                }
                    break;
                default: 
                    break;
            }
        }
        
        return (s_x == 0) && (s_y == 0);        
    }
};