// solution_arrays.cpp
void rotate(int arr[], int n){
    int temp=arr[n-1];
    for (int i=n-2; i>=0; i--)  
    {
        arr[i+1]= arr[i]; 
    } 
    arr[0] = temp ; 
    return arr;
}

int main(){
    int test[] = {1, 2, 3, 4};


}