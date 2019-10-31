#include <stdlib.h>
#include<stdio.h>
int main() {
        int arr[]={1,2,3,4,5};
        int *p=(int*)calloc(sizeof(arr)/sizeof(arr[0]),sizeof(int));
        printf("\n Address of array = %p %p %p %p %p",(p+arr[0]),(p+arr[1]),(p+p+arr[2]),(p+p+arr[3]),(p+p+arr[4]));
        return 0;
}
