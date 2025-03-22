class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = m + n - 1; n; --i)
            nums1[i] = (m && nums1[m - 1] > nums2[n - 1]) ? nums1[--m] : nums2[--n];
    }
};
