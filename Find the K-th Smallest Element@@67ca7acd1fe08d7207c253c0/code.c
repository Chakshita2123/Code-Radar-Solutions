#include <stdio.h>
int main() {
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    int min = findMin(arr, n);
    int max = findMax(arr, n);
    int kthsmallest = (min + max) / 2;
    int result = kthsmallest(arr,n,k);
    printf("%d\n",result);
    return 0;
}