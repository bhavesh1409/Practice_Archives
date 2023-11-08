class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        
        int x_diff = abs(fx-sx);
        int y_diff = abs(fy-sy);
        
        if(x_diff == 0 && y_diff == 0 && t == 1) return false; 
        
        int steps = min(x_diff, y_diff) + abs(x_diff-y_diff);
        
        if(steps <= t) return true;
        return false;
    }
};