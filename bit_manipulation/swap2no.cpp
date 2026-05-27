
//brute force -using 3rd variable 
//optimal 
class Solution {
  public:
    pair<int, int> get(int a, int b) {
        // code here
        b=a^b;//b=a^b
        a=a^b;//a=a^a^b->a=b;
        b=a^b;//b=a^a^b->b^a^b=a;
        return {a,b};
    }
};