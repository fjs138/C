#include <stdio.h>                                                              
int main(){
    int b = 10; //assign the integer 10 to variable 'b'
    int *a;   //declare a pointer to an integer 'a'
    a = &b;	  //Get the memory location of variable 'b' cast it
 			  //to an int pointer and assign it to pointer 'a'
    int **c;  //declare a pointer to an integer 'c'
    c = &a;	  //Get the memory location of variable 'a' which is
              //a pointer to 'b'.  Cast that to an int pointer 
              //and assign it to pointer 'c'.
    printf("%d\n",(**c));   //successfully prints 10
    return 0;
}