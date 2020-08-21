class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector <int> frq;
        sort(arr.begin(),arr.end());
        int count = 1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])
            {
                count++;
            } else {
                frq.push_back(count);
                count = 1;
            }
        }
        frq.push_back(count);
        sort(frq.begin(),frq.end());
        bool ans = true;
        for(int i=1;i<frq.size();i++)
        {
            if(frq[i]==frq[i-1])
            {
                ans = false;
                break;
            }
        }
        return ans;
    }
};
