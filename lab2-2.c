#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;
printf("[checking values before ptr = &i] \n");
//포인터 변수에 i의 주소를 넣기 전의 값.
printf("value of i == %d\n", i);
//변수 i의 값을 출력.
printf("address of i == %p\n", &i);
//변수 i의 주소를 출력.
printf("value of ptr == %p\n", ptr);
//포인터 변수의 (쓰레기)값을 출력.
printf("address of ptr == %p\n", &ptr);
//포인터 변수의 주소를 출력.
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");
//포인터 변수에 i의 주소를 넣고난 뒤의 값.
printf("value of i == %d\n", i);
//변수 i의 값 출력.
printf("address of i == %p\n", &i);
//변수 i의 주소를 출력.
printf("value of ptr == %p\n", ptr);
//포인터 변수에 i의 주소를 넣었으므로 i의 주소가 출력됨.
printf("address of ptr == %p\n", &ptr);
//포인터 변수 ptr자체의 주소를 출력한다는 뜻.
printf("value of *ptr == %d\n", *ptr);
//포인터 변수 ptr에 i의 주소가 들어있고 *을 통해 값을 참조한다는 뜻이므로 1234가 출력됨.
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
//이중포인터 dptr에 ptr의 주소를 넘겨줌.
printf("value of i == %d\n", i);
//변수 i의 값을 출력함.
printf("address of i == %p\n", &i);
//변수 i의 주소를 출력함.
printf("value of ptr == %p\n", ptr);
////포인터 변수에 i의 주소를 넣었으므로 i의 주소가 출력됨.
printf("address of ptr == %p\n", &ptr);
//포인터 변수 ptr자체의 주소를 출력한다는 뜻.
printf("value of *ptr == %d\n", *ptr);
//포인터 변수 ptr에 i의 주소가 들어있고 *을 통해 값을 참조한다는 뜻이므로 1234가 출력됨.
printf("value of dptr == %p\n", dptr);
//포인터 변수 ptr의 주소를 받았으므로 ptr의 주소가 출력됨.
printf("address of dptr == %p\n", &dptr);
//이중포인터 dptr 주소가 출력됨.
printf("value of *dptr == %p\n", *dptr);
//ptr이 i의 주소를 값으로 갖고 있으므로 dptr의 값을 참조하면 i의 주소가 출력됨.
printf("value of **dptr == %d\n", **dptr);
//dptr이 ptr의 값을 참조하여 i의 주소로 한 번 참조하고 i의 주소로 한 번 더 참조하여 i의 값을 출력하게됨.
*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n");
//*ptr의 값을 바꾼다는 건 i의 값을 7777로 바꾼다는 말과 같음.
printf("value of i == %d\n", i);
//*ptr의 값을 7777로 바꿨기 때문에 i 출력시 7777로 출력이 됨.
printf("value of *ptr == %d\n", *ptr);
//*ptr을 7777로 바꿨으니 7777이 출력됨.
printf("value of **dptr == %d\n", **dptr);
//이중참조는 결국 i의 값에 접근하는 하는 거라 7777이 출력됨.
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n");
//이중포인터의 값을 바꾼다는 건 i의 값을 바꾸는 것과 같음.
printf("value of i == %d\n", i);
//이중포인터로 i의 값을 바꿨기 때문에 8888이 출력됨.
printf("value of *ptr == %d\n", *ptr);
//*ptr은 i의 값에 접근하는 것이므로 8888이 출력됨.
printf("value of **dptr == %d\n", **dptr);
//이중포인터로 ptr의 값에 접근하고 한 번 더 ptr이 가리키는 i의 값에 접근하여 8888을 출력함.
 printf("[----- [이태정] [2023041062] -----]\n");
return 0;
}