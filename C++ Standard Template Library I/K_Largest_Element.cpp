Given an array A of random integers and an integer k, find and return the kth largest element in the array.
Note: Try to do this question in less than O(N * logN) time.

#include<queue>
int kthLargest(int* arr, int n, int k) {
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int ans=0;
    for(int i=0;i<k;i++){
        ans=pq.top();
        pq.pop();
    }return ans;
}
