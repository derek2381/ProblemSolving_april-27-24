// problem link
// https://leetcode.com/problems/a-number-after-a-double-reversal/description/

class Solution {
public:

    int reverse_number(int n){
        int rem = 0, rev = 0;
        while(n > 0){
            rem  = n % 10;
            rev = rev*10 + rem;
            n /= 10;
        }

        return rev;
    }

    bool isSameAfterReversals(int num) {
        int rev = reverse_number(num);
        rev = reverse_number(rev);

        if(rev == num){
            return true;
        }else{
            return false;
        }
    }
};
