int check(int piles[],int pilesSize,int h, int k)
{
    int sum=0;
    for(int i=0;i<pilesSize;i++)
        {
            if(sum<=h)
            {
                sum=sum+((piles[i]+k-1)/k);
            }
            else
            {
                break;
            }
        }
        if(sum<=h)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}

int minEatingSpeed(int* piles, int pilesSize, int h) {
    int max=piles[0];
    for(int i=0;i<pilesSize;i++)
    {
        if(piles[i]>max)
        {
            max=piles[i];
        }
    }
    int l=1,r=max;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(check(piles,pilesSize,h,m))
        {
            r=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    return l;
}
