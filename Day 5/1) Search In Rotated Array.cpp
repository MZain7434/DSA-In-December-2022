class Solution {
    int findMinIndex(const vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        while(high - low > 1)
        {
            int middle = (high + low)/2;
            if(nums[middle] < nums[high])
                high = middle;
            else
                low = middle;
        }
        if(nums.size() > 0 and nums[low] < nums[high])
            return low;
        else
            return high;
    }
    
public:
    int search(vector<int>& nums, int target) {
        int high = nums.size()-1, low = 0;
        int midIndex = findMinIndex(nums);
        while(high >= low)
        {
            int middle = (high + low)/2;
            int rotMiddle = (middle + midIndex) % nums.size();
            if(nums[rotMiddle] == target)
                return rotMiddle;
            if(target > nums[rotMiddle])
                low = middle + 1;
            else
                high = middle - 1;
        }
        return -1;        
    }
};