/*
	270721
	https://leetcode.com/problems/bulb-switcher/
	Solution	
*/
class Solution {
public:
    int bulbSwitch(int n) {
        int cnt=sqrt(n);
        return cnt;
        /*
            32/35 TC Passed. TLE for last 3.
            if(n==0)
                return 0;
            int i,cnt=1;
            vector<int> arr(n+1, 1);
            arr[0]=0;            
            for(i=2;i<n+1;i++)
                cnt=n;
                cnt
                for(int j=i;j<n+1;j+=i)       
                {

                    arr[j]=(arr[j]==0)?1:0;   
                    if(arr[j]==1)
                        cnt++;                
                }
            return cnt;
        */
    }
};