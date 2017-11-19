class Solution {
    
public:
    int reverse(int x) {
        int m = 0;
        while(x)
        {
            int temp  = m * 10 + x % 10;
            if( temp / 10 != m)
            {
                return 0;
            }
            m = temp;
            x /= 10;
        }

        return m;
        
    }
};