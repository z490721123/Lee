#include <string>
#include <stdio>

using namespace std;

class Solution {
private:
    int nMaxlen = 0;
    int nStart = 0;
public:
    string longestPalindrome(string s) 
    {
        int nLen = s.length();
        if(nLen <= 2)
        {
            return s;
        }

        for(int i = 0; i < nLen-1; i++)
        {
            expend(s, i, i);
            expend(s, i, i+1);
        }

        return s.substr(nStart, nMaxlen);
    }

private:
    void expend(string s, int i, int k)
    {
        while(i >= 0 && k < s.length() && s[i] == s[k])
        {
            i--;
            k++;
        }

        int nLen = k - i - 1;
        if(nMaxlen < nLen)
        {
            nStart = i + 1;
            nMaxlen = nLen;
        }
    }
};