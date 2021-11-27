class Solution {
public:
    string to_binary(int n){
        string str;
        while(n){
            str += (n%2) + '0';
            n/=2;
        }
        return str;
    }
    bool isPowerOfTwo(int n) {
        string str = to_binary(n);
        int count = 0;
        
        while(n){
            if(n%2 ==1)
                count++;
            if(count > 1)
                return false;
            n/=2;
        }
        //cout << str;
        if(count == 0)
            return false;
        return true;
    }
};

// 1 1
// 2 10
// 3 11
// 4 100
