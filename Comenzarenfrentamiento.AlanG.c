/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

**************************************************************/
 
#include <stdio.h>  


  void comenzar_enfrentamiento(){
    
        printf ("\n\nEl enfrentamiento esta por comenzar\n");
        
    
 }
    
int recibir_animo(){
    
 int animo_recibido;
 int min= 1; 
 int max= 100; 
 
        printf ("ingresar valor de animo: \n");
        scanf ("%i", &animo_recibido); 
 
    while( (animo_recibido<min) || (animo_recibido>max)){

        printf ("\nincorrecto, vuelva a ingresar el valor\n");
        scanf ("%i", &animo_recibido);
        
  }    
      
        printf ("\nBien hecho, valor correcto\n");
        printf ("\nComenzar enfrentamiento\n"); 
    
    return animo_recibido;
      
  } 
  
      
  
  
  
  
  
  
int main(){ 
      
       
    comenzar_enfrentamiento();
    recibir_animo();
      
    return 0; 
}
    


