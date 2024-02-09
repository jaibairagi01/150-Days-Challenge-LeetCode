class Solution {
public:
    int hIndex(vector<int>& c) {
        int low=0,high=c.size();
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            int cnt=0;
            for(int i=0;i<c.size();i++){
                if(c[i]>=mid)cnt++;
            }
            if(cnt>=mid){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
};
