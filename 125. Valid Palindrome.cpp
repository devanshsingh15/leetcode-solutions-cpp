//approach 1
class Solution {
private:
    bool valid(char ch){
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }

    char lower(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
            return ch;
        else {
            ch+=32;
            return ch;
        }
    }

    bool check(string s){
        int st=0;
        int e=s.length()-1;
        while(st<=e){
            if(s[st]!=s[e]){
                return 0;
            }
            else {
                st++;
                e--;
            }
        }
        return 1;
    }

public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }

        for(int i=0;i<temp.length();i++){
            temp[i]=lower(temp[i]);
        }
        return check(temp);
    }
};


//approach 2
class Solution {
public:
    bool isPalindrome(string s) {
        //change every character to lower
        for(int x=0;x<s.size();x++) s[x]=tolower(s[x]);

        int i=0;
        int j=s.size()-1;
        while(i<=j){
            //check for alphanumeric
            if(((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')) && ((s[j]>='a' && s[j]<='z') || (s[j]>='0' && s[j]<='9'))){
                if(s[i]==s[j]){
                    i++;
                    j--;
                }
                else return false;
            }
            //iterate if not alphanumeric
            else{
                if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')) j--;
                else if((s[j]>='a' && s[j]<='z') || (s[j]>='0' && s[j]<='9')) i++;
                else{
                    i++;
                    j--;
                }
            }
        }
        return true;
    }
};
