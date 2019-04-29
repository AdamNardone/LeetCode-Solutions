class Solution {
public:
    vector<int> plusOne(vector<int>& digits) { 
        
        if(digits[digits.size() -1] + 1 < 9){
            digits[digits.size() -1] += 1; // adds 1 if no carry is needed
        }
        else{
            int i = digits.size() -1;
            while(digits[i] == 9){  //checks how many indeces require a carry
                digits[i] = 0;
                    i--;
                if(i < 0){ //inserts at beginning if carried all the way through vector
                    digits.insert(digits.begin(), 0);
                    i = 0; //resets i to beginning index
                }
            }
            
                digits[i] += 1; //adds carry to proper index
        }
        
        
        return digits;
        
    }
};
