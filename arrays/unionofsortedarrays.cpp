my approch 
tc-o(m+n)(log(m+n))
sc-o(m+n) -set using
class Solution {
    public:
      // a,b : the arrays
      // Function to return a list containing the union of the two arrays.
      vector<int> findUnion(vector<int> &a, vector<int> &b) {
          // Your code here
          int n=a.size();
          int m=b.size();
          set<int>s;
  
          for(int i=0;i<n;i++){
              s.insert(a[i]);
          }
  
          for(int i=0;i<m;i++){
              s.insert(b[i]);
          }
  
          vector<int>finalans;
          for(int it:s){
               finalans.push_back(it);
          }
          return finalans;
  
          // return vector with correct order of elements
      }
  };

  optimal approch 
tc-o(m+n)
sc-o(m+n) -for returning 
class Solution {
    public:
      // a,b : the arrays
      // Function to return a list containing the union of the two arrays.
      vector<int> findUnion(vector<int> &a, vector<int> &b) {
          // Your code here
          int n=a.size();
          int m=b.size();
          
      vector<int>finalans;
       int i=0;
       int j=0;
       while(i<n && j<m){
           if(a[i]<=b[j]){
               if(finalans.size()==0 || finalans.back()!=a[i]){
                   finalans.push_back(a[i]);
               }
               i++;
           }
           else{
               if(finalans.size()==0 || finalans.back()!=b[j]){
                   finalans.push_back(b[j]);
               }
               j++;
           }
           }
           
           while(i<n){
               if(finalans.back()!=a[i]){
                   finalans.push_back(a[i]);
               }
               i++;
           }
           
           while(j<m){
               if(finalans.back()!=b[j]){
                   finalans.push_back(b[j]);
               }
               j++;
           }
           return finalans;
       }
        
  
          // return vector with correct order of elements
      };
  