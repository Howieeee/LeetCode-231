class Solution {
public:
    //bit 處理
    bool isPowerOfTwo(int n) {
        // 31bits
        int ans = 1;
        for(int i=0;i<30;i++){
            
            if(ans == n)
                return true;
            ans = (ans << 1);

        }
        if(ans == n)
            return true;
        
        return false;
    }
};

// 1 1
// 2 10
// 3 11
// 4 100
