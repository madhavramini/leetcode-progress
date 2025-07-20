// Last updated: 20/07/2025, 20:58:30
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        if (n1 > n2) return findMedianSortedArrays(nums2, nums1);
        vector<int> A = nums1, B = nums2;
        int total = n1 + n2;
        int half = (total + 1)/2;
        
        int l = 0, r = n1;

        while (l <= r) {
            int i = (l+r)>>1;
            int j = half - i;
            
            int Al = INT_MIN, Ar = INT_MAX, Bl = INT_MIN, Br = INT_MAX;
            
            if (i-1 >= 0) Al = A[i-1];
            if (i < n1) Ar = A[i];
            if (j-1 >= 0) Bl = B[j-1];
            if (j < n2) Br = B[j];

            if (Al <= Br && Bl <= Ar) {
                if (total%2==1) return max(Al,Bl);
                else return ((double)(max(Al, Bl) + min(Ar, Br)))/2.0;
            }
            else if (Al > Br) r = i - 1;
            else l = i + 1;
        }
        return 0;
    }
};