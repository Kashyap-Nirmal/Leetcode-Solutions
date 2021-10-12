/*
	https://leetcode.com/problems/merge-intervals/
	7 wrong submissions
	Done	
	Striver's list Day 1
	230821
*/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int i,j;
        bool flag=false;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        vector<int>temp;
        for(i=0;i<intervals.size();i++)
        {			
            if(i!=intervals.size()-1 && (intervals[i][1]>=intervals[i+1][0] && intervals[i][1]<=intervals[i+1][1] || intervals[i][1]>=intervals[i+1][1] && intervals[i][1]>=intervals[i+1][0]))
            {
                intervals[i+1][0]=min(intervals[i][0],intervals[i+1][0]);                 
                intervals[i+1][1]=max(intervals[i][1],intervals[i+1][1]); 
                flag=true;
                i++;
            }                
            temp.push_back(intervals[i][0]);
            temp.push_back(intervals[i][1]);            
            ans.push_back(temp);
            temp.clear();                            
        }           
        if(flag)
            ans=merge(ans);
        else
            return ans;
        return ans;
    }
};

/*	
	Logic:
	-Recursion is used because we need to merge all the intervals so iterative approach alone
	wont work. 
		TC: 
			Input:    [[1,4],[0,2],[3,5]]				
			Output:   [[0,4],[0,5]]					
			Expected: [[0,5]]

	i!=intervals.size()-1 is used coz if it is not used, we miss last element in the ans.
	-2nd condition for overlapping intervals is used for case like [[1,4],[2,3]]
*/