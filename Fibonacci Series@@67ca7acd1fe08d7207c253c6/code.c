int fibonacciSeries(int n){
    int x=0,y=1,z;
    while(n){
        printf("%d ",&x);
        x = y;
        z = x + y;
        y = z;
        n--;
    }
}