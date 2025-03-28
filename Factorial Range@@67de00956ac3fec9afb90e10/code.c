int factorialRange(int start,int end){
    if(start>=0 || start>=end){
    for(int i=start;i<=end;i++){
        int fact = 1;
        for(int j=1;j<=i;j++){
            fact*=j;
        }
        printf("%d\n",fact);
    }
    else{
        printf("Invalid range");
    }
    }
}