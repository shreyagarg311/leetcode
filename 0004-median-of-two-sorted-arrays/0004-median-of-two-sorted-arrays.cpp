
#include<algorithm> 
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int b=m+n;
        vector<int> merged (b);
        double median;
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),   merged.begin());
        int a=merged.size();
        if (a%2 !=0){
             median = (double)merged[a/2];
            
        }
        else{
             median =(double)(merged[(a - 1) / 2] + merged[a / 2]) / 2.0;
        }
        return median;
        
    }
};