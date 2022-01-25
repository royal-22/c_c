include <stdio.h>

void DuplicateZeros(int* nums, int numsSize){
    int i = 0; 

    while (i<numsSize){
        if (nums[i] == 0){
            for(int n = numsSize - 2; n>i; n--){
                nums[n+1] = nums[n];
            }
            nums[i+1] = 0;
            i ++;
        }
        i++;

    }
    for(int j = 0; j < numsSize; j++){
        printf("%d", nums[j]);
    }
}

int main(){
    
    int nums[] = {1, 2, 0, 3, 0, 4, 2}; 
    int numsSize = sizeof(nums) / sizeof(nums[0]); 
    DuplicateZeros(nums, numsSize);

    return 0;
}

