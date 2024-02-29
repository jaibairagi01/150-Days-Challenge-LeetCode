class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        unordered_set<int> s;
        
        for(int i=0; i< n;i++){
            s.insert(a[i]);
        }
        
        int cnt = 0;
       for(int i=0; i< m; i++){
           int key = b[i];
           if(s.find(key) != s.end()){
               cnt++;
               s.erase(key);
           }
       } 
       return cnt;
    }
};
