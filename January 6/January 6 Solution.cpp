class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        unordered_map<int, int> hash;
        for(int i: arr)
            hash[i]++;
        
        for(int i=1; i<=3000; i++)
        {
            if(hash[i]==0)
            {
                k--;
                if(k == 0)
                    return i;
            }
        }
        
        return 1000;
    }
};
