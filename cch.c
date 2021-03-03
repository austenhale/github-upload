//Include definitions for C Runtime Library functions used in this program
#include <stdio.h>				//The standard I/O functions

//-------------------------------------------------------------------------------
//This is the main function, invoked by the C Runtime (CRT) to start the program
//-------------------------------------------------------------------------------
int main(void) {

    int c, total,upper, lower, constants, vowels, numbers;
    total = upper = lower = constants = vowels = numbers = 0;
    
   
    
    while ((c = getchar()) != EOF){
      switch (c){
      // cases for capitals
      case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
      case 'G': case 'H': case 'I': case 'J': case 'K': case 'L':
      case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R':
      case 'S': case 'T': case 'U': case 'V': case 'W': case 'X':
      case 'Y': case 'Z': 
        upper++;
            //checks for vowels
           if (c == 'A' || c == 'I' || c == 'O' || c == 'E' || c == 'Y' || c == 'U'){
            vowels++;
        }else{
          constants++;
          }
        break;
      
      // case for lower cases
      case 'a' ... 'z':
        lower++;
        //checks for vowels
        if (c == 'a' || c == 'i' || c == 'o' || c == 'e' || c == 'y' || c == 'u'){
            vowels++;
        }else{
          constants++;
          }
        break;
      
      // case for the number things
      case '0' ... '9' :
        numbers++;
        break;

    
    } //end switch
    total++;
    } // end while
  //prints final amounts
  printf("upper-case: %d\n", upper);
  printf("lower-case: %d\n", lower);
  printf("vowels: %d\n", vowels);
  printf("consonants: %d\n", constants);
  printf("digits: %d\n", numbers);
  printf("total: %d\n", total);

  return 0;
}
	
