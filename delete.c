//DELETE ARRAY ELEMENT
#include <stdio.h>
void main(){
int i,size,index,arr[10];
printf ("Enter size of array: "); 
scanf("%d", &size);
printf("Enter array elements:"); 
for (i=0; i<size; i++){
scanf("%d", &arr[i]); }
printf("Enter the index of the element you want to delete:");
scanf("%d",&index);
if(index==size-1){
for(i=0; i<size-1; i++) 
{
printf("%d", arr[i]);
}
}
else{
for(i=index; i<size-1; i++) 
{
arr[i]=arr[i+1];
}
for(i=0; i<size-1; i++) 
{
printf(" %d ", arr[i]);
}
}
}