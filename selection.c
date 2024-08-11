//SELECTION SORT
#include <stdio.h>
void main(){
int i,j,size,arr[10],temp=0;
printf ("Enter size of array: "); 
scanf("%d", &size);
printf("Enter array elements: "); 
for (i=0; i<size; i++){
scanf("%d", &arr[i]); 
}
for(i=0;i<size-1;i++){
for(j=i+1;j<size;j++){
if(arr[i]>arr[j]){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for (i=0; i<size; i++){
printf("%d ", arr[i]); 
}
}