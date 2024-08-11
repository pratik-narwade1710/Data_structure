//BINARY SEARCH:-
#include <stdio.h>
int main(){
int i,j,size,arr[10],num,found=0;
int low,high,mid;
printf ("Enter size of array: "); 
scanf("%d", &size);
printf("Enter array elements: "); 
for (i=0; i<size; i++){
scanf("%d", &arr[i]); 
}
printf ("Enter the number you want to search: "); 
scanf("%d", &num);
low=0;
high=size-1;
mid=(low+high)/2;
for(i=0;i<size;i++){
if(num==arr[mid]){
    printf("Element found at %d.",mid+1);
    found++;
    break;
}
else if(num<arr[mid]){
    high=mid-1;
}
else{
    low=mid+1;
}
mid=(low+high)/2;
}
}