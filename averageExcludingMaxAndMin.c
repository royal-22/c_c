int sort(const void * p1, const void * p2){
    return( *(int*)p1 - *(int*)p2); 
}


double average(int* salary, int salarySize){
    qsort(salary, salarySize, sizeof(int), sort);
    double sum=0;
    for (int i=0; i < salarySize; i++){
        sum += salary[i];
    }
    return (sum-salary[0]-salary[salarySize-1])/(salarySize-2);
}
