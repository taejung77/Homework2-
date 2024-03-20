#include <stdio.h>
int main()
{
 char charType;
 int integerType;
 float floatType;
 double doubleType;

 printf("Size of char: %ld byte\n",sizeof(charType)); 
 //문자형으로 선언된 변수의 자료형 크기 1을 출력함.
 printf("Size of int: %ld bytes\n",sizeof(integerType));
 //정수형으로 선언된 변수의 자료형 크기 4를 출력함.
 printf("Size of float: %ld bytes\n",sizeof(floatType));
 //실수형으로 선언된 변수의 자료형 크기 4를 출력함.
 printf("Size of double: %ld bytes\n",sizeof(doubleType));
 //실수형으로 선언된 변수의 자료형 크기 8을 출력함.
 printf("-----------------------------------------\n");
 printf("Size of char: %ld byte\n",sizeof(char));
 //문자형을 sizeof에 넣어 자료형 크기 1을 출력함.
 printf("Size of int: %ld bytes\n",sizeof(int));
 //정수형을 sizeof에 넣어 자료형 크기 4를 출력함.
 printf("Size of float: %ld bytes\n",sizeof(float));
 //실수형을 sizeof에 넣어 자료형 크기 4를 출력함.
 printf("Size of double: %ld bytes\n",sizeof(double));
 //실수형을 sizeof에 넣어 자료형 크기 8을 출력함.
 printf("-----------------------------------------\n");
 printf("Size of char*: %ld byte\n",sizeof(char*));
 //포인터는 항상 크기가 4이므로 4를 출력함.
 printf("Size of int*: %ld bytes\n",sizeof(int*));
 //포인터는 항상 크기가 4이므로 4를 출력함.
 printf("Size of float*: %ld bytes\n",sizeof(float*));
 //포인터는 항상 크기가 4이므로 4를 출력함.
 printf("Size of double*: %ld bytes\n",sizeof(double*));
 //포인터는 항상 크기가 4이므로 4를 출력함.
 printf("[----- [이태정] [2023041062] -----]\n");
 return 0;
}