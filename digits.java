class digits{
    public void countDigits(int n){
        int sum =0 ;
        while(n<0){
           n = n % 10;
            n =  n/10;
            sum++;
        }
        System.out.println("Total Sum Count :"+sum);
    }
}