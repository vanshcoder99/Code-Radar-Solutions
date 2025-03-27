int fibonacciSeries(int n){
    int x=0,y=1,z;
    while(n){
        printf("%d ",x);
        z = x + y;
        x = y;
        y = z;
        n--;
    }
}