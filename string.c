
/*2. Accept a String input from the stdin or file 
- Print the count of words in the String. Space is assumed to be the separator between words 
- Print the count of alphabets & numbers in the String */





#include <stdio.h>

#include <string.h>
 

void main()

{
   
char s[500];

int count = 0, i, alphabets=0, digits=0;

//take input from standard input

   
printf("Enter the string:\n");
    
scanf("%[^\n]s", s);


//count number of words in  a string
    
for (i = 0;s[i] != '\0';i++)
 
  	 {
       	
	 if (s[i] == ' ' && s[i+1] != ' ')
        
    	 count++;    
   	
         }

   
printf("Total words -  %d\n", count + 1);
 


//count number of alphabets and digits in  a string
	
for (i = 0;s[i] != '\0';i++)
    
 {
   
    if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
   
     {
        
    alphabets++;
     
     }
       
    if(s[i]>='0' && s[i]<='9')
      
    {
          
    digits++;
       
    }
        
   
 }
    
printf("Alphabets - %d\n", alphabets);
 
printf("Numbers - %d\n", digits);
 


}