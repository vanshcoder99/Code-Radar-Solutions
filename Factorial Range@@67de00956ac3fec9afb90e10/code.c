int factorialRange(int start,int end){
    int fact = 1;
    for(int i=start;i<=end;i++){
        for(int j=1;j<=i;j++){
            fact*=j;
        }
        printf("%d\n",fact);
    }
}