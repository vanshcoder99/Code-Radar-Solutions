printPrimesInRange(int a, int b){
    if(a<b && a>1 && b>1){
        for(int i=a;i<=b;i++){
            for(int j=2;j<i;j++){
                if(i%j==0){
                    break;
                }
            }
            printf("%d ",i);
        }
    }
    else{
        printf("No prime numbers");
    }
}                                   