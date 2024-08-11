//BUBBLE SORT
#include <stdio.h>
void main(){
int i,j,size,index,arr[10],temp=0;
printf ("Enter size of array: "); 
scanf("%d", &size);
printf("Enter array elements: "); 
for (i=0; i<size; i++){
scanf("%d", &arr[i]); 
}
for(i=1;i<size;i++){
for(j=0;j<size-i;j++){
if(arr[j]>arr[j+1]){
temp=arr[j+1];
arr[j+1]=arr[j];
arr[j]=temp;
}
}
}
for (i=0; i<size; i++){
printf("%d ", arr[i]); 
}
}