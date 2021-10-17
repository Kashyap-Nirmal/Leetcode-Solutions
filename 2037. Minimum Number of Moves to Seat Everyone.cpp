/*
	https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/
	Done
	171021
*/
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int i,sum=0;
        for(i=0;i<seats.size();i++)
        {
            sum+=abs(seats[i]-students[i]);
        }
        return sum;
    }
};