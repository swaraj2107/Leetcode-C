int searchInsert(int* nums, int numsSize, int target) {
    int l=0,r=numsSize-1,m=(r-l)/2;
    while(l<=r)
    {
        if(target==nums[m])
        {
            return m;
        }
        else if(target>nums[m])
        {
            l=m+1;
            m=(r+l)/2;
        }
        else
        {
            r=m-1;
            m=(r+l)/2;
        }
    }
    return l;
}
