class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool checker[26]={0};
        for(int i=0;i<sentence.size();i++){
            checker[sentence[i]-'a']=1;
        }
        for(int i=0;i<26;i++){
            if(checker[i] !=1){
                return false;
            }
        }
        return true;
    }
};