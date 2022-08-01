class Solution {
public:
    int mySqrt(int x) {
        long start=0;
        long end=x;
        long mid=0;
        while(start+1<end){
          mid=start+(end-start)/2;
            if(mid*mid==x)
                return (int)mid;
            else if(mid * mid > x)
                end=mid;
            else
                start=mid;
            
            
        }
        if(end*end==x)
            return int(end);
            
        return int(start);
    }
};