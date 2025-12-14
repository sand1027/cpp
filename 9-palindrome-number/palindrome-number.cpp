class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long  rev = 0;
        if(x < 0) return false;
        while(x){
            int ld = x%10;
            rev = (rev*10)+ld;
            x = x/10;
        }
        return (temp == rev);
    }
};