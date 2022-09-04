class Solution {
public:
    int climbStairs(int n) {
        if(n<3)return n;
        int arr[n+1];
        arr[1]=1;
        arr[2]=2;
        for(int i=3;i<=n;i++)
        {
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[n];
    }
};

//arr[i-1] cuz adding 1 step will give arr[i]
//arr[i-2] cuz taking a double step from here will give arr[i]