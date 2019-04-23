class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
        int i = 0, j = 1;
        
        while(1){
            
            while(j < nums.size()){ //tests i + j, j starting out as i+1 all the wat until 
                                    //the vector ends
                if(nums[i] + nums[j] == target){ //test condition
                    vector<int> temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    return temp;
                }
                j++;
            }
            i++;  
            j= i+1; //increment i and reset value of j and repeat
        }
      
    }
};
