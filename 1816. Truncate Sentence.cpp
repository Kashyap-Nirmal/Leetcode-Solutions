/*
	https://leetcode.com/problems/truncate-sentence/
	Done. Needs improvement.
	29/10/2021
*/
class Solution {
public:
    string truncateSentence(string s, int k) {
        int cnt=0;        
        stringstream ss(s);
        s="";
        string word;        
        while (ss >> word && cnt<k) {            
            s+=word+" ";
            cnt++;
        }
        s.resize(s.size()-1);
        return s;
    }
};