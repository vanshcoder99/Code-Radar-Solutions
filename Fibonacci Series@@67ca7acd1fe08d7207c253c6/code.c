int fibonacciSeries(int n){
    int x=0,y=1,z;
    while(n>0){
        printf("%d ",&x);
        x = y;
        z = x + y;
        y = z;
        n--;
    }
}