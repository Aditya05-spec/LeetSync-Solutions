// }

            if(mid*mid <= x) {
                ans = mid;
            //     return mid;
            // if(mid*mid == x) {
            long long mid = start + (end-start)/2;
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return ans;
    }
};