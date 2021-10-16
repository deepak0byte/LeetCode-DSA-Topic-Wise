class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ct=0;
        for(int i=0;i<31;i++){
            bool x=false,y=false,z=false;
            if(a&(1<<i)){
                x=true;
            }
            if(b&(1<<i)){
                y=true;
            }
            if(c&(1<<i)){
                z=true;
            }
            if(x==true && y==true&&z==true){
                ct=ct;
            }
            else if(x==true && y==true&&z==false){
                ct+=2;
            }
            else if(x==false && y==true&&z==false){
                ct++;
            }
            else if(x==true && y==false&&z==false){
                ct++;
            }
            else if(x==false && y==false&&z==true){
                ct++;
            }
        }
        
        return ct;
    }
};