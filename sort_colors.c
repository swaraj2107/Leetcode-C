void sortColors(int* nums, int numsSize) {
    int l=0,m=0,r=numsSize-1;
    int temp=0;
    while(m<=r)
    {
        if(nums[m]==2)
        {
            temp=nums[m];
            nums[m]=nums[r];
            nums[r]=temp;
            r--;
        }
        else if(nums[m]==0)
        {
            temp=nums[m];
            nums[m]=nums[l];
            nums[l]=temp;
            l++;
            m++;
        }
        else
        {
            m++;
        }
    }
}
