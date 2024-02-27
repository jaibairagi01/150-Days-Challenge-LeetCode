class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> ans;

        int start = 0, end = arr.size()-1;

        while(start < end){
            if(arr[start]+arr[end]==target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
            else if(arr[start] + arr[end] < target){
                start++;
            }
            else{
                end--;
            }
        }
        return ans;
    }
};
