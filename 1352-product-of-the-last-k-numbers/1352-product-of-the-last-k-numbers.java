class ProductOfNumbers {
    ArrayList<Integer> a = new ArrayList<>();
    public ProductOfNumbers() {
        
    }
    
    public void add(int num) {
        a.add(num);
    }
    
    public int getProduct(int k) {
        int prod = 1;
        int n = a.size();
        for(int i=n-k;i<n;i++){
            prod *= a.get(i);
        }
        return prod;
    }
}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers obj = new ProductOfNumbers();
 * obj.add(num);
 * int param_2 = obj.getProduct(k);
 */