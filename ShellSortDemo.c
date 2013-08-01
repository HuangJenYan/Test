/* ShellSort Sort */
// �O����}���J�Ƨ�
// �D�n�O�Q�Ϋe�@�����Ƨ�,�ӧ����ثe���Ƨ�
// ��󱵪񧹦��Ƨǧ��������,�|�۷��Ĳv. 
 
#include <stdio.h>
#define MAX      20            /* �̤j�r����� */
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
   printf("��J���ƧǪ��r�� ==> ");
   gets(data);                    
   len = strlen(data);           
   shell(data, len);
   printf("\n��X�Ƨǵ��G: [%s]\n",data); 
   system("PAUSE");
   return 0; 
}
