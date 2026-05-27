
//optimal tc-0(log(n))
//sc-0(1)
//if we encounter a zero while converting to binary we add 2's power of that index from right
class Solution {
  public:
    int setBit(int n) {
        // Write Your Code here
        int power=1;//for keeeping track of power
        int num=n;//to not destroy original n input
        int flag=0;
        while(num>0){
            if(num%2==0){
                n+=power;
                flag=1;//inditacates a bit zero was found 
                break;
            }
            power=power*2;//multiply power at every step 
            num=num/2;
        }
        if(flag==1){
        return n;//if bit 1 was found 
        }
            return n+power;
    }
};