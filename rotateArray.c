/*int reverse(int* nums, int numsSize){
    for (int low = 0, high = numsSize - 1; low < high; low++, high--)
    {
        int temp = nums[low];
        nums[low] = nums[high];
        nums[high] = temp;
    }
} */

void rotate(int* nums, int numsSize, int k){
    //if (k == numsSize) return;
    
	size_t tmp;
	size_t i;
	for(i = 0; i < numsSize / 2; i++)
	{
		// reverse array
		tmp = nums[i];
		nums[i] = nums[numsSize - i - 1];
		nums[numsSize - i - 1] = tmp;
	}	    
	 
	k %= numsSize;
    
	for(i = 0; i < k / 2; i++)
	{
		// reverse first k elements
		tmp = nums[i];
		nums[i] = nums[k - i - 1];
		nums[k - i - 1] = tmp;
		
	}


	for(i = k; i < (numsSize - k) / 2 + k ; i++)
	{
		// reverse last (numsSize - k) elements
		tmp = nums[i];
		nums[i] = nums[numsSize - i + k - 1];
		nums[numsSize - i + k - 1] = tmp;
}
}
