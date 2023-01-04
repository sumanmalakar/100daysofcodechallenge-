class Solution {
public:
    int romanToInt(string s) {
        int New = 0;
        int o = 0;
        int sum = 0;
        for(int i=0; i<s.length(); i++){
            switch(s[i]){
                case 'I':
                    New = 1;
                    break;
                case 'V':
                    New = 5;
                    break; 
                case 'X':
                    New = 10;
                    break; 
                case 'L':
                    New = 50;
                    break;
                case 'C':
                    New = 100;
                    break;
                case 'D':
                    New = 500;
                    break; 
                case 'M':
                    New = 1000;
                    break;
            }
            if(i==0){
                o = New;
            }else{
                if(o<New){
                    sum+= (New-o);
                    o = New;
                }else{
                    sum+=(New+o);
                    o = New;
                }
            }
        }
        return sum;
    }
};