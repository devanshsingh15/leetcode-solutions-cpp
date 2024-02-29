class Solution {
public:
    int addDigits(int num) {
        while(num>9)
        {
            int sum=0;
            while(num>0)
            {
                int a=num%10;
                sum=sum+a;
                num=num/10;
            }
            num=sum;
        }
        return num;
    }
};
