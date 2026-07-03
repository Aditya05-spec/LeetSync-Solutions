int ans = 1e9;

        while(start <= end) {
            int mid = start + (end-start)/2;
            if(nums[mid] >= nums[start]) {
                ans = min(ans , nums[start]);
                start = mid+1;
            }
            else {
                ans = min(ans , nums[mid]);
                end = mid-1;
            }
        }
        return ans;
    }
};