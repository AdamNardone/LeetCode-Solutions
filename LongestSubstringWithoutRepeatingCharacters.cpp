

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int result = 0;
        std::string sub;
        std::vector<int> subStringLengths;
        
        for ( std::string::iterator it=s.begin(); it!=s.end(); ++it){
            
            if(sub.find(*it) == std::string::npos){
                sub.push_back(*it);
                result ++;
            }
            else{
                sub.clear();                
                subStringLengths.push_back(result);
                it -= result;
                result = 0;
            }
        }
        
        subStringLengths.push_back(result);
        return *max_element(std::begin(subStringLengths), std::end(subStringLengths));
    }
};



