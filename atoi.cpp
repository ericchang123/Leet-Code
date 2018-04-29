class Solution {
public:
    int myAtoi(string str) {
        int i;
        int newNum = 0;
        int temp = 0;
        int neg = 0;
        int sign = 0;
        for(i = 0; i < str.length(); i++)
            if(str[i] != ' ') break;

        if((str[i] == '-' || str[i] == '+') && !sign){
                sign = 1;
                if(str[i] == '-')
                    neg = 1;
            i++;
            }

        for(i; i < str.length(); i++){
            if((str[i] - '0' >= 0) && (str[i] - '0' <= 9)){
                temp = newNum;
                newNum = newNum * 10 + str[i] - '0';
                if((newNum / 10) != temp){
                    if(neg) return INT_MIN;
                    else return INT_MAX;
                }
            }
            else break;
        }
        
        if(neg) newNum = -newNum;

        return newNum;
    }
};
