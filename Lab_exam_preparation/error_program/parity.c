#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){    
   char bits[128];    
   char caruno='1';    
   int i;    
   int one = 0;
   printf("Insert the byte: "); 
   scanf("%s", bits);
   for(i=0;i<8;i++){        
       if(bits[i]==caruno){            
           one++;
       }
   }
   if(one%2==0){        
       //byte is even        
       strcat (bits, "0");    
   } else if(one%2==1){
       //byte is uneven      
       strcat (bits, "1");
   }
   printf("The result is: %s\n", bits);    
   return (EXIT_SUCCESS); 
}
