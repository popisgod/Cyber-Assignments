#include <stdio.h>
#include <unistd.h>


int sumNumbers(int n) {
	int i; for (i = 0; 0 < n; n--) {
		i += n;  
	} return i; 
}

int factorial(int n) {
	int i; for (i = 1; 0 < n; n--) {
		i *= n; 
	} return i; 
}

int main(int argc, char *argv[]) {
 
	if (argc != 3) {
        // If the number of arguments is not 3, print an error message and exit
        fprintf(stderr, "Usage: %s <number1> <number2>\n", argv[0]);
        return 1; 
    }
   

    pid_t childPidSumNumber = fork();
    pid_t childPidFactorial = fork(); 

    if (childPidSumNumber == 0) {
    	int sumNumbersResutlt = sumNumbers(stoi(argv[1])); 

    } if else (childPidFactorial == 0) {
    	int factorialResult = factorial()


    } else {



    }



    return 	0;
}