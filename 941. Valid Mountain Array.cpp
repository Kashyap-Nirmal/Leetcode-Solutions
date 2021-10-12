/*
	https://leetcode.com/problems/valid-mountain-array/
	Done
	220921
*/
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool ans=false;
        if(arr.size()<3)
            return false;
        bool flag=false;
        /*
            M2
                int max_=*max_element(arr.begin(),arr.end());
        */        
        for(int i=0;i<arr.size()-1;i++)
        {
            //cout<<i<<" "<<arr[i]<<" "<<flag<<" "<<ans<<"\n";
            /*
            M2
                if(!flag && arr[i]==max_)
                    flag=true;            
            */
            if(!flag && arr[i]<arr[i+1])
                ans=true;
            else if(flag && arr[i]>arr[i+1])            
                continue;
            else if(i!=0 && !flag && arr[i]>arr[i+1] && ans)
                flag=true;                            
            else 
                return false;
            if(i==0 && !ans)
                return false;
            //cout<<"T "<<i<<" "<<arr[i]<<" "<<flag<<" "<<ans<<"\n";
        }
        //cout<<"\n";
        return (ans && flag);
    }
};