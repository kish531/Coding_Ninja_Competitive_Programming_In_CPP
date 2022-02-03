Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.

int sum(int input[], int n) {
    if(n==0){
        return 0;
    }return input[0]+sum(input+1, n-1);
}
