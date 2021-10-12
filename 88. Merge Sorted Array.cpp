/*
	https://leetcode.com/problems/merge-sorted-array/
	240821
	Solution Youtube
	Gap method. https://www.youtube.com/watch?v=hVl2b3bLzBw&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=18
	Striver's list Day 1
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int gap=nums1.size();
        int i=0,j,cnt=0;
        bool flag=true;
        for(i=m;i<nums1.size();i++)
            nums1[i]=nums2[i-m]; 
        //i=0;j=i+ceil(gap/2.0);
        for(gap=ceil(gap/2.0);cnt<=1 && gap>=1;gap=ceil(gap/2.0))
        {                    
            if(gap==1)
                cnt++;
            for(i=0,j=i+gap;j<nums1.size() && i<nums1.size();i++,j=i+gap)
            {
                //cout<<i<<" "<<j<<"\n";
                if(nums1[i]>nums1[j])
                    //cout<<"I"<<i<<" "<<j<<"\n";
                    swap(nums1[i],nums1[j]);
            }
            //cout<<"\n";
        } 
        /*
        int i=m-1,j=n-1,size_=m+n-1,left=0,il=0,jl=0;
        if(m>0 && n>0)
        {
            while(i<(m+n)/2 && i>=0 && j>=0)
            {
                cout<<i<<" "<<j<<"\n";
                nums1[size_]=max(nums1[i],nums2[j]);                                
                if(nums1[i]>=nums2[j])
                    i--;
                else
                    j--;            
                size_--; 
                for(int k=0;k<m+n;k++)
                    cout<<nums1[k]<<" ";
                cout<<"\n";
                
            }
            cout<<"\n\n";
            while(left<(m+n)/2 && i<=(m+n)/2 && j<=(m+n)/2)
            {
                cout<<il<<" "<<jl<<"\n";
                il=min(m,left);
                nums1[left]=min(nums1[il],nums2[jl]);                
                if(nums1[il]<nums2[jl])
                    il++;
                else if(nums1[il]>=nums2[jl])
                    jl++;  
                left++;  
                for(int k=0;k<m+n;k++)
                    cout<<nums1[k]<<" ";
                cout<<"\n";
                
            }                    
        }
        else if(m==0)
        {
            for(i=0;i<m+n;i++)
                nums1[i]=nums2[i];                                                    
        }            
        */
    }
};