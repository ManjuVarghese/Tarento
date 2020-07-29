/*1. Given four strings A, B, C, D, write a program to check if D is an interleaving of A, B and C. D is said to be an interleaving of A, B and C, if it contains all characters of A, B, C and the order of all characters in individual strings can be changed.*/




#include<stdio.h>

#include<stdbool.h>




bool interleave(char *A, char *B, char *C,char *D)
 
{ 

//iterate through all character
  
  while (*D != 0) 

    { 

// Match first character of D with first character of A. If matches them move A to next  
      
  if (*A == *D) 
        
    A++; 
  
       
 else if (*B == *D) 
    
        B++; 
      
  else if (*C == *D) 
        
    C++; 
   
       
 else
        
    return false; 
          
      
D++; 
    
} 
  
    
 
 if (*A || *B || *C) 

    {
       
    return false; 
   
    }
  
   
 return true;

} 

int main() 

{ 
   
 char *A = "pro"; 
   
 char *B = "nunc"; 
   
 char *C = "tionia"; 
  
 char *D = "pronunciation";
  
  if (interleave(A, B, C, D)== true) 
  
      printf("D =ABC"); 
  
      else
      
      printf("Cannot be interleaved"); 
  

 return 0; 

} 