#include<stdio.h>

int main(){
    int lin, col, cont = 0;
    char car;
 
    scanf("%d",&lin);
    while(lin != 0){
    scanf("%d", &col);
    scanf("%c",&car);
    char campo[lin][col];


    for(int i = 0; i < lin; i++){
        puts("1");
        for(int j = 0; j < col;j++){
            scanf("%c",&car);
            campo[i][j] = car; 
            printf("%c", campo[i][j]);
        }
        scanf("%c",&car);

            
    }
    
   for(int i = 0; i < lin; i++)
      for(int j = 0; j < col; j++){
        if(campo[i][j] == '*')
           printf("%c ", campo[i][j]);
           
        else{
            for(int k = i-1; k < i + 2; k++)
               for(int t = j - 1; t < j + 2; j++)
               if(k > -1 && t > -1)
                 if(campo[k][t] == '*')
                   cont++;
            printf("%d ", cont);
            cont = 0;

        }
        

      }
      scanf("%d",&lin);
      
    }
    
   
      


}
    

