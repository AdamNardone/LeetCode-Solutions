class Solution {
    public int romanToInt(String s) {
        
        int result = 0;
        char[] Nums = s.toCharArray();
        
        for(int i = 0; i < Nums.length; ++i)
        {
            
            if(Nums[i] == 'I')
            {
                if(i < Nums.length -1) //Make sure out next comparison isn't out of bounds
                { 
                    if(Nums[i+1] == 'V' || Nums[i+1] == 'X')
                    {  
                        result -= 1;  // if next element is X or V, I is a -1
                    }
                    else
                    {
                        result += 1; // else it is a +1
                    }
                }
                else
                {
                    result += 1;
                }
            }
            
            if(Nums[i] == 'V')
                result += 5;
            
            if(Nums[i] == 'X')
            {
                if(i < Nums.length -1) //Make sure out next comparison isn't out of bounds
                {
                    if(Nums[i+1] == 'L' || Nums[i+1] == 'C')
                    {
                        result -= 10; // if next element is L or C, X is a -10
                    }
                    else
                    {
                        result += 10; // else its a +10
                    }
                }
                else
                {
                    result += 10;
                }
            }
            
            if(Nums[i] == 'L')
                result += 50;
            
            if(Nums[i] == 'C')
            {
                if(i < Nums.length -1) //Make sure out next comparison isn't out of bounds
                {
                    if(Nums[i+1] == 'D' || Nums[i+1] == 'M')
                    {
                        result -= 100; // if next element is D or M, C is a -100
                    }
                    else
                    {
                        result += 100; // else its +100
                    }
                }
                else
                {
                    result += 100;
                }
            }
            
            if(Nums[i] == 'D')
                result += 500;
            
            if(Nums[i] == 'M')
                result += 1000;
            
        }
        return result;
    }
}
