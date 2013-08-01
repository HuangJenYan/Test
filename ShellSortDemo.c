/* ShellSort Sort */
// 是為改良插入排序
// 主要是利用前一次的排序,來完成目前的排序
// 對於接近完成排序完成的資料,會相當有效率. 
 
#include <stdio.h>
#define MAX      20            /* 最大字串長度 */
#define HELEMENT 3
void shell(char array[], int count) {
   int gap[HELEMENT] = {4,2,1};
   int i,j;                        
   char temp;
   int pos,h;
   
   // 0 1 2 3 4   i j h  pos temp
   // g f d s a   0 4 4   0   a

   
   for( i = 0 ; i < HELEMENT ; i++){
        h = gap[i];
        for( j = h ; j < count ; j++ ){
             temp = array[j];
             pos = j - h;
             while( temp < array[pos] & pos >= 0 && j <= count ){
                    array[pos+h] = array[pos];
                    pos = pos - h;
             }
             array[pos+h] = temp;
        }

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
   shell(data, len);
   printf("\n輸出排序結果: [%s]\n",data); 
   system("PAUSE");
   return 0; 
}
