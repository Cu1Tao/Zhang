// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int low=1,high=n;
    int mid;
    while(low<high)
    {
        mid=low+(high-low)/2;
        if(isBadVersion(mid))
        {
            high = mid;
        }
        else
        {
            low = mid+1;
        }
    }
    return high;
}
//二分法两个初始值都超过限定大小的一半会发生溢出，应使用 low+(high-low)/2作为mid
