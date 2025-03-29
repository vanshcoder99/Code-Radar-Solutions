void printPrimesInRange(int a,int b){
    int flag;
    while(a<=b){
        if(a<2){
            a++;
            continue;
        }
        flag = 0;
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                flag = 1;
            }
        }
        if(flag == 0){
            printf("%d ",a);
        }
     
        a++;
    }
       if(flag == 1){
            printf("No prime numbers");
        }
    
}                       