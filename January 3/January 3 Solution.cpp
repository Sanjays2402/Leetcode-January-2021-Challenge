class Solution {
public:
    int count = 0;
    int countArrangement(int n) {
        
        vector<int> a;
        for(int i=1; i<=n; i++)
            a.push_back(i);
        
        check(a, 0);
        
        return count;
    }
    
    void check(vector<int> &a, int k)
    {
        if(k == a.size())
            count++;
        
        for(int i=k; i<a.size(); i++)
        {
            swap(a[i], a[k]);
            if(a[k] % (k+1) == 0 || (k+1) % a[k] == 0)
                check(a, k+1);
            swap(a[i], a[k]);
        }
    }
};
