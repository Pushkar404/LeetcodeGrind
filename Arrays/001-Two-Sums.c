int* twoSum(int* nums,int numSize, int target,  int* returnSize ){
      *returnSize = 2;
      int* ans = malloc(2*sizeof(int));
      for (int i = 0; i<numSize; i++){
            for (int j = i+1; j<numSize; j++){
                  if (nums[i]+nums[j]==target){
                        ans[0]=i;
                        ans[1]=j;
                        return ans;
                  }
            }
      }
      return NULL;

}