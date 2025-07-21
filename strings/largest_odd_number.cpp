//optimal tc-o(n)
//sc-o(1)
class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int i;
       for(i=num.size()-1;i>=0;i--){//finds the first odd number from behind
        if(num[i]%2!=0){
            break;
        }
       }
    string ans="";//string makeing //we can also use num,substr(0,i+1);
    for(int k=0;k<=i;k++){
        ans+=num[k];
    }
    return ans;
        }
};