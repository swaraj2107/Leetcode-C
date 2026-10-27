/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *ans = (int*) malloc(8);
    *returnSize=2;
    int l=0,r=numsSize-1,m;
    int first_index,last_index;
    while(l<=r)
    {
        m=(r+l)/2;
        if(target==nums[m])
        {
            r=m-1;
        }
        else if(target>nums[m])
        {
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    if(l<numsSize && nums[l]==target)
    {
        first_index=l;
    }
    else
    {
        ans[0]=-1;
        ans[1]=-1;
        return ans;
    }

    l=0,r=numsSize-1,m;
    while(l<=r)
    {
        m=(r+l)/2;
        if(target==nums[m])
        {
            l=m+1;
        }
        else if(target>nums[m])
        {
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    last_index=r;
    ans[0]=first_index;
    ans[1]=last_index;
    return ans;
}
