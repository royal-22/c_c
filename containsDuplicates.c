int sort(const void *p1, const void * p2){
    return (*(int*)p1 - *(int*)p2);
}

bool containsDuplicate(int* nums, int numsSize){
    
/*   for (int n=0; n<numsSize; n++){
        for (int z = numsSize; z>n; z--){
            if (nums[n] == nums[z]){
                return true;
            }
        }
    }
    return false; 
*/
    qsort(nums, numsSize, sizeof(int), sort);
    for (int i=0; i<numsSize-1; i++){
        if(nums[i] == nums[i+1]){
            return true;
        }
    }
    return false;
}
