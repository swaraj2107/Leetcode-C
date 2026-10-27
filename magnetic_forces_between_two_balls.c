#include <stdlib.h>

void merge(int* position, int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;

    int* temp = (int*)malloc((right - left + 1) * sizeof(int));

    while (i <= mid && j <= right)
    {
        if (position[i] <= position[j])
            temp[k++] = position[i++];
        else
            temp[k++] = position[j++];
    }

    while (i <= mid)
        temp[k++] = position[i++];

    while (j <= right)
        temp[k++] = position[j++];

    for (i = left, k = 0; i <= right; i++, k++)
        position[i] = temp[k];

    free(temp);
}

void mergeSort(int* position, int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(position, left, mid);
    mergeSort(position, mid + 1, right);

    merge(position, left, mid, right);
}

bool feasible(int* position, int positionSize, int m, int distance)
{
    int count = 1;
    int lastPosition = position[0];

    for (int i = 1; i < positionSize; i++)
    {
        if (position[i] - lastPosition >= distance)
        {
            count++;
            lastPosition = position[i];

            if (count >= m)
                return true;
        }
    }

    return false;
}

int maxDistance(int* position, int positionSize, int m)
{
    // Sort the positions using merge sort
    mergeSort(position, 0, positionSize - 1);

    int low = 1;
    int high = position[positionSize - 1] - position[0];
    int answer = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (feasible(position, positionSize, m, mid))
        {
            answer = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return answer;
}
