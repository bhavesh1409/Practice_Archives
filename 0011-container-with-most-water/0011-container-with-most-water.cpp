// class Solution {
// public:
//     int currarea(vector<int>& height, int st, int en)
//     {
//         if(st >= 0 && en < height.size())
//             return min(height[st], height[en]) * (en-st);

//         else return INT_MIN;
//     }
//     int maxArea(vector<int>& height) {
        
//         int n = height.size();
//         int st = 0, en = n-1;

//         int maxi =  min(height[st], height[en]) * (en-st);

//         while(st <= en)
//         {
//             int ca1 = currarea(height,st+1, en);
//             int ca2 = currarea(height, st, en-1);

//             if(ca1 >= ca2)
//             {
//                 st++;
//                 maxi = max(maxi, ca1);
//             }

//             else
//             {
//                 en--;
//                 maxi = max(maxi, ca2);
//             }
//         }

//         return maxi;
//     }
// };
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int st = 0, en = n - 1;
        int maxWater = 0;
        
        while (st < en) {
            int h = min(height[st], height[en]);
            int w = en - st;
            int area = h * w;
            
            maxWater = max(maxWater, area);
            
            if (height[st] < height[en]) 
                st++;
            
            else 
                en--;
            
        }
        
        return maxWater;
    }
};
