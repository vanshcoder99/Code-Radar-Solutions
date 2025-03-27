int isprime(num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            break;
            return 0;
        }
    }
    return 1;

}