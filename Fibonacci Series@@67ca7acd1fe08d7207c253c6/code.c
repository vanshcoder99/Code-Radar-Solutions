void fibonacciSeries(int n){
    int x = 0,y = 1,z;
    while(n == 0){
        printf("%d ",x)
        z = x + y;
        x = y;
        y = z;
    }
}