#include<stdio.h>
#include<string.h>
 
void rev() {
   char str[100], temp;
   int i, j = 0;
 
   printf("\nEnter the string :");
   scanf("%s\n",str);
 
   i = 0;
   j = strlen(str) - 1;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
 
   printf("\nReverse string is :%s", str);
  // return (0);
}
