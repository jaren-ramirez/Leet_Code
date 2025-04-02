class Solution {
    public:
        long long maximumTripletValue(vector<int>& nums) {
            /*
            Keep track of the maximum nums[i] and the maximum nums[i] - nums[j]
            The maximum nums[i] - nums[j] can be multiplied by nums[k]
            This effecively finds the max by ensuring that we always have the 
            */
            int n = nums.size();
            long long res = 0, imax = 0, dmax = 0;
            for (int k = 0; k < n; k++) {
                res = max(res, dmax * nums[k]);
                dmax = max(dmax, imax - nums[k]);
                imax = max(imax, static_cast<long long>(nums[k]));
            }
            return res;
        }
    };