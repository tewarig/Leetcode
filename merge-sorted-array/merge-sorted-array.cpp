class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        int a = 0;
        int b = 0;
        int k = 0;
        while(a<m && b<n){
           if(nums1[a] > nums2[b]){
               v.push_back(nums2[b]);
               b++;
           }else if(nums1[a] < nums2[b]){
               v.push_back(nums1[a]);
               a++;
           }else{
               v.push_back(nums1[a]);
               v.push_back(nums1[a]);
               a++;b++;
           }
            k++;
        }
        while(a<m){
                v.push_back(nums1[a]);
                a++;
                k++;
            }
            while(b<n){
                v.push_back(nums2[b]);
                b++;
                k++;
            }
        
            nums1 = v;
        
        
    }
};