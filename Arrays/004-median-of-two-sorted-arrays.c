int* mergeArrays(int* nums1, int nums1Size, int* nums2, int nums2Size, int* mergedSize) {
    *mergedSize = nums1Size + nums2Size;
    int* merged = (int*)malloc((*mergedSize) * sizeof(int));
    for (int i = 0; i < nums1Size; i++)
        merged[i] = nums1[i];
    for (int j = 0; j < nums2Size; j++)
        merged[nums1Size + j] = nums2[j];

    return merged;
}
int compare(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int mergedSize;
    int* merged = mergeArrays(nums1, nums1Size, nums2, nums2Size, &mergedSize);
    qsort(merged, mergedSize, sizeof(int), compare);
    double median;
    if (mergedSize%2==1){
        median = merged[mergedSize/2];
    }
    else{
        median = (merged[mergedSize/2] + merged[(mergedSize/2) - 1]) / 2.0;
    }
    free(merged);
    return median;    
}