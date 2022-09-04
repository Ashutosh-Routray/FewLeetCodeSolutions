class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int arr[n+1];
        arr[0]=0;
        arr[1]=0;
        for(int i=2;i<n;i++)
        {
            arr[i]=min(cost[i-1]+arr[i-1],cost[i-2]+arr[i-2]);
        }
        return min(cost[n-1]+arr[n-1],cost[n-2]+arr[n-2]);
    }
};

//how the fcuk did i do this