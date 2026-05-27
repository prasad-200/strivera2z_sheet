//brute force - coverting to binary and traversing to kth bit from right
//optimal Solution-
//make the bit who is to be checked at the last postiion
bool isKthBitSet(int n, int k)
{
    // Write your code here.
    int num=n;

    if(n>>k-1 & 1==1){  //eg n=5(101) k=3 101>>2 ->001 & 001 =1
    
             return true;//hence true
    }
    else{
        return false;
    }
}


optimal approch 2
//left shift 1 by k-1 bits and person and operation with number and check 