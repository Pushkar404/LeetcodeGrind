int compare(const void *a,const void *b){
    return (*(int *)a-*(int *)b);
}

double findMedianSortedArrays(int *nums1, int n1, int *nums2, int n2) {
    int n = n1+n2;
    int *merge = (int*)malloc(n*sizeof(int));
    // Extend Array
    for (int i=0; i<n1; i++){
        merge[i]=nums1[i];
    }
    for (int i=0; i<n2; i++){
        merge[i+n1]=nums2[i];
    }
    // Sorting Array
    qsort(merge, n, sizeof(int), compare);

    double median;

    if (n%2==1){
        median = merge[n/2];
    }
    else{
        median = (merge[n/2]+merge[n/2 - 1])/2.0;
    }
    free(merged);
    return median;

    
}