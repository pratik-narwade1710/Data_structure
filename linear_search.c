//LINEAR SEARCH
#include <stdio.h>
void main(){
int arr[10];
int num,i,found=0,size;
printf("Enter the size of array: "); 
scanf("%d", &size);
if(size<=0){
printf("Invalid size.Sorry.");
}
else{
printf("Enter the array elements:"); 
for(i=0;i<size;i++)
{ 
scanf("%d",&arr[i]); 
}
printf("Enter the element you want to search: "); 
scanf("%d", &num);
for (int i=0;i<size;i++)
{
if (arr[i]==num) 
{
printf("Element found at %d position.", i+1);
found++; 
} 
}
if (found == 0){
printf("Element not found. ");}}
}