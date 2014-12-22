class Solution {
public:
    int numTrees(int n) {
        if(n<=1)
            return 1;
        int total=0;
        int l=0;
        for(l=0;l<n;l++)
        {
            total+=numTrees(l)*numTrees(n-l-1);
        }
        return total;
    }
};