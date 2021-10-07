int solve(int* A, int n1, int B) {
    int max=0,count=0;
    int i , j;
    // if(B<=0){
    //     return -1;
    // }
    if(n1==1&&B==1)
        return A[0];

        for( i=0;i<n1;i++){
            for( j=i;j<=B;j++){
                count+=A[j];
                }
                if(count>max){
                    max=count;
                }
            }
            return max;
    }
