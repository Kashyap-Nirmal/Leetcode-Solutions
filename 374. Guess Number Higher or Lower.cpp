/*
	https://leetcode.com/problems/guess-number-higher-or-lower/
	Done
	031021
*/
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i;
        long long left=1,right=n,mid=(left+right)/2;
        if(guess(left)==0)
            return left;
        else if(guess(right)==0)            
            return right;
        for(i=1;i<=log2(n);i++)
        {
            if(guess(mid)==1)
                left=mid;   
            else if(guess(mid)==-1)
                right=mid;
            else if(guess(mid)==0)
                break;
            mid=(left+right)/2;
        }
        return mid;
    }
};