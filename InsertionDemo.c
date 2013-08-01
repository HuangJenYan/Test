/* Insertion Sort */
#include <stdio.h>
#define MAX      20            /* 最大字串長度 */
void insertSort(char array[], int count) {
   int i,j;                        
   char temp;
   // 0 1 2 3 4   i j  temp
   // g f d s a   1 0   f
   
   for( i = 1 ; i < count; i++ ){
        temp = array[i];
        j = i - 1;
        while( j >= 0  && temp < array[j] ){
               array[j+1] = array[j];
               j--;
        }
       array[j+1] = temp;
       printf("%d: [%s]\n",i,array);
   }
}

void insertSort2(char array[], int count){
    int i,j;
    char temp;
    for( i = 1 ; i < count ; i++ ){
      temp = array[i];
      for(j = i ; j>0 && temp < array[j-1] ; j--){
          array[j] = array[j-1];
      }
      array[j] = temp;
      printf("%d: [%s]\n",i,array);
      getch();
    }
 }
 
int main() {
   char data[MAX];            
   int len;                  
   printf("輸入欲排序的字串 ==> ");
   gets(data);                    
   len = strlen(data); 
   insertSort(data, len);
   printf("\n輸出排序結果: [%s]\n",data);   
   system("PAUSE");
   return 0; 
}
