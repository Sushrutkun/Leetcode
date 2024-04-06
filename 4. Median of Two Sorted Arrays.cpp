class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int count = 0;
        int median = -1;
        double ans = 0.0;
        int i=0,j=0;
        if((nums1.size() + nums2.size()) % 2 == 1){
            count = 1;
            median = (nums1.size() + nums2.size())/2;
        }
        else{
            count = 2;
            median = (nums1.size() + nums2.size())/2 - 1 ;
        }
        cout<<count<<" "<<median;
        while(median >0 ){
            if(j>=nums2.size() || (i<nums1.size() && nums1[i]<nums2[j])){
                median--;
                i++;
            }
            else{
                median--;
                j++;
            }
            cout<<endl;
        }
        if((j>=nums2.size() || (i<nums1.size() && nums1[i]<nums2[j]))){
            ans = nums1[i];
            i++;
        }
        else{
            ans = nums2[j];
            j++;
        }
        if(count == 2){
            if((j>=nums2.size() || (i<nums1.size() && nums1[i]<nums2[j]))){
                ans += nums1[i];
                i++;
            }
            else{
                ans += nums2[j];
                j++;
            }
            ans=ans/2.0;
        }
        return ans;
    }
};