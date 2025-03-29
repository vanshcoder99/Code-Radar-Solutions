void printPrimesInRange(int a,int b){
    while(a<=b){
        if(a<2){
            a++;
            continue;
        }
        int flag = 0;
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("%d ",a);
        }
        a++;
    }
    
}                         