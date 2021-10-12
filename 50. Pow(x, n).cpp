/*
	https://leetcode.com/problems/powx-n/
	Striver's sheet Day 3.
	110921
	Rushabh's soln
*/
class Solution {
public:
    double power(double n, int p){
        if(p == 0) 
            return 1.0;
        if(p%2)
        {
            double temp = power(n, p/2);
            return n * temp * temp;
        } 
        else
        {
            double temp = power(n, p/2);
            return temp * temp;
        }
    }
    double myPow(double x, int n) {
        if(n < 0)
            return power(1.0/x, n);
        else if(n > 0)
            return power(x, n);
        else
            return 1.0;
    }    
};