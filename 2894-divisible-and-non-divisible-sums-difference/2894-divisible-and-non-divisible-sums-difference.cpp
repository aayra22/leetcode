class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum =0;
        for(int i =m ;i<=n; i=i+m){
        sum = sum + i;
    }
    int num1 = (n*(n+1))/2 - sum ;
    int num2 = sum;
    return num1 - num2;
    }
};