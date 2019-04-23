class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        if(target < nums[0]) //checks if target should be inserted at beginning
            return 0;
                         
        if(target > nums[nums.size()-1])//checks if target should be inserted at end
            return nums.size();
        
        int result;
        
        for (int i=0; i<nums.size(); i++){//check if target is equal to existing element
            
            if(nums[i] == target){
                result = i;
                break;
            }
        }
        
        for (int i=0; i<nums.size(); i++){//finds where to insert target
            
            if(target > nums[i] && target < nums[i+1]){
                result = i+1;
                break;
            }
        }
        
         return result;
    }
};
