class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        int count=0;
        for(int i=0;i<n-1;i++){
            char ch=word[i];
            bool flag=false;
            for(int j=i+1;j<n;j++){
                if(isupper(ch)){
                    if(word[j]==ch+32){
                        if(!flag){
                            count++;
                            flag=true;
                        }
                       
                        word[j]='1';
                        //break;
                    }   
                }
                else{
                    if(word[j]==ch-32){
                        if(!flag){
                            count++;
                            flag=true;
                        }
                        word[j]='2';
                       // break;
                    }
                }
            }
        } 
        return count;   
    }
};