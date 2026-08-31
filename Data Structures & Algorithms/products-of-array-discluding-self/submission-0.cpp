class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> output(nums.size(),1);
        int fwdproduct = 1;
        int bwdproduct = 1;
        for(int i = 0; i < nums.size(); i++){
            output[i] *= fwdproduct;
            fwdproduct *= nums[i];
        }
        for(int i = nums.size() - 1; i >= 0; i--){
            output[i] *= bwdproduct;
            bwdproduct *= nums[i];
        }
        return output;

    }
};
