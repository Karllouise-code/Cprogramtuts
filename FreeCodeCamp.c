/*VARIABLES
#include <string.h>
#include <stdio.h>

int main()
{

char characterName[] = "Kimmy"; 
int characterAge = 99;

    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);
     characterAge = 2104012;
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d.\n", characterAge);
    
   return 0;
} */

/*DATA TYPES
#include <string.h>
#include <stdio.h>

int main()
{
    int age = 40;
    double gpa = 99.9;
    char grade = 'S';
    char phrase[] = "Giraffe Academy";
    
    return 0;
} */

/*PRINTF
#include <stdio.h>
#include <stdlib.h>

int main() {
 int favNum = 90;
 char myChar = 'i';
    printf("My favorite %c is %d", myChar, favNum);
    
    return 0;
} */

/*WORKING WITH NUMBERS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    

    printf("%f\n", floor(36.365) );
    printf("%f\n", ceil(36.365) );


        return 0;
} */

//CONSTANTS
/*#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("%d", 70);
    
    
    
 return 0;   
} */

//GETTING USER INPUT
/*#include <stdio.h>
#include <stdlib.h>

int main () {
    
    char name[20];
    
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s", name);
    
 return 0;   
} */
//FGETS
/*#include <stdio.h>
#include <stdlib.h>

int main () {
    
    char name[20];
    
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s asdf", name);
    
 return 0;   
} */

//BUILDING BASIC CALCULATOR
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    
    double num1;
    double num2;
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    printf("Answer: %f", num1 + num2);
    
 return 0;   
} */

//BUILDING MAD LIBS GAME
/* #include <stdio.h>
#include <stdlib.h>

int main() {
    
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];
    
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural-noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s %s", celebrityF, celebrityL);
    
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);
    
 return 0;   
} */

//ARRAYS of Numbers
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int luckyNumbers[10];
     luckyNumbers[1] = 80;
     luckyNumbers[0] = 90;
    printf("%d", luckyNumbers[0]);
    
 return 0;    
}*/

//FUNCTIONS
/* #include <stdio.h>
#include <stdlib.h>

int main() {
    
    printf("Top\n");
 sayHi("Mike", 40);
 sayHi("Karl", 55);
 sayHi("Tom", 22);
    printf("Bottom\n");

 return 0;
}
    
void sayHi(char name[], int age) {
    
    printf("Hello %s you are %d years old\n", name, age);
    
} */

//RETURN STATEMENTS
/* #include <stdio.h>
#include <stdlib.h>

double cube(double num);

int main() {
    printf("Answer: %f", cube(7.0));
    
 return 0;
}

double  cube (double num) {
    return num * num *num;
} */

//IF STATEMENTS
/*#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3) {
    int result;
    
    if(num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if(num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }
  
 return result;
}

int main() {
    printf("%d", max(300, 23, 100));
 return 0;    
} */

//IF STATEMENTS
/*#include <stdio.h>
#include <stdlib.h>

int main() {
        
    if(!(3 < 2)) {
        printf("True");
    } else {
        printf("False");
    }
    
 return 0;
} */

//BUILDING A BETTER CALCULATOR
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1;
    double num2;
    char op;
    
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);
    
    if (op == '+') {
      printf("%f", num1 + num2);   
    } else if (op == '-') {
    printf("%f", num1 - num2);   
    } else if (op == '/') {
    printf("%f", num1 / num2);
    } else if (op == '*') {
    printf("%f", num1 * num2);
    } else {
        printf("Invalid Operator");
    }
    
 return 0;    
} */
//SWITCH STATEMENTS
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char grade = 'A';
    
    switch(grade) {
        case 'A' :
            printf("You did great!");
            break;
        case 'B' :
            printf("You did alright!");
            break;
        case 'C' :
            printf("You did poorly!");
            break;
        case 'D' :
            printf("You did very bad!");
            break;
        case 'F' :
            printf("You Failed!");
            break;
            
        default :
            printf("Invalid Grade");
    }
    
 return 0;
} */

//STRUCTS
/* #include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
};


int main() {
    
    struct Student student1;
    student1.age = 22;
    student1.gpa = 8.8;
    strcpy( student1.name, "Jim");
    strcpy( student1.major, "Business");
    
    printf("%s\n", student1. name);
    printf("%s\n", student1. age);
    printf("%s\n", student1. major);
    printf("%s\n\n", student1. gpa);
    
    struct Student student2;
    student2.age = 26;
    student2.gpa = 10.8;
    strcpy( student2.name, "Pam");
    strcpy( student2.major, "Cooking");
    
    printf("%s\n", student2. name);
    printf("%s\n", student2. age);
    printf("%s\n", student2. major);
    printf("%s\n", student2. gpa);
    
 return 0;   
} */
