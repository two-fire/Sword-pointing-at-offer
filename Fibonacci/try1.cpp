class Solution {
public:
    int Fibonacci(int n) {
        int F[39],i;
        F[0]=0;
        F[1]=1;
        if(n>1){
            for(i=2;i<=n;i++){
                F[i]=F[i-1]+F[i-2];
            }
        }
        return F[n];
    }
};