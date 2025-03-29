void printPrimesInRange(int a, int b){
    if(a<b && a>1 && b>1){
        for(int i=a;i<=b;i++){
            int flag = 0;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("%d ",i);
            }
            else{
                printf("No prime numbers");
            }
        }
    }
    else{
        printf("No prime numbers");
    }
}                                   