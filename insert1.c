//INSERT AN ELEMENT
#include <stdio.h>
void main(){
int i,size,index,arr[10],num;
printf ("Enter size of array: "); 
scanf("%d", &size);
printf("Enter array elements: "); 
for (i=0; i<size; i++){
scanf("%d", &arr[i]); }
printf("Enter the index at which you want to insert the element: ");
scanf("%d",&index);
printf("Enter the element which you want to insert : ");
scanf("%d",&num);
if(index==size){
//end position
arr[size]=num;
}
else{for (i= size; i>index; i--) 
{
arr[i] = arr[i-1];
}
printf("Now the array is: ");
arr[index]=num;}
for(i=0; i<=size; i++) 
{
printf(" %d ", arr[i]);
}
}