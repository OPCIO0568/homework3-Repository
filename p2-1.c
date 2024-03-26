#include <stdio.h>
#define MAX_SIZE 100 //MAX_SIZE 상수 선언 상수값은 100

    float sum1(float list[], int); //sum1 함수선언
    float sum2(float *list, int); //sum2 함수선언
    float sum3(int n, float *list); //sum3 함수선언
    float input[MAX_SIZE], answer; //float형 input배열, answer 변수선언
    int i; //int형 변수 i 선언

    void main(void)
    {

    for(i=0; i < MAX_SIZE; i++) //input[0~99]까지 1~99을 넣는다
        input[i] = i;
    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input은 input[0]을 가르키는 포인터 input[0]의 주소 출력
    answer = sum1(input, MAX_SIZE); //answer은 sum1의 tempsum 값을 받는다
    printf("The sum is: %f\n\n", answer); //answer값을 출력한다
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input은 input[0]을 가르키는 포인터 input[0]의 주소 출력
    answer = sum2(input, MAX_SIZE); //answer은 sum2의 tempsum 값을 받는다
    printf("The sum is: %f\n\n", answer); //answer값을 출력한다
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input은 input[0]을 가르키는 포인터 input[0]의 주소 출력
    answer = sum3(MAX_SIZE, input); //answer은 sum3의 tempsum 값을 받는다
    printf("The sum is: %f\n\n", answer); //answer값을 출력한다


}

float sum1(float list[], int n) {
    printf("list\t= %p\n", list); //list는 list[0]을 가르키는 포인터라 list[0]의 주소를 출력한다. list[]에 input배열이 들어갔기에 input[0]과 주소가 같다.
    printf("&list\t= %p\n\n", &list); //float list[]에서 list를 선언했기에 list의 주소값이 나온다
    int i;
    float tempsum = 0;
    for(i = 0;i < n;i++)
        tempsum += list[i]; //tempsun은 list[0] ~ list[99]까지 값을 다 더한다.
    return tempsum; //tempsun을 되돌려준다.
}
float sum2(float *list, int n) { //배열을 포인터로 받는다
    printf("list\t= %p\n", list); //input배열을 받았기에 input[0]의 주소값이 출력된다.
    printf("&list\t= %p\n\n", &list); //list의 주소값이 나온다.
    int i;
    float tempsum = 0;
    for( i = 0; i < n; i++)
       tempsum += *(list + i); //tempsun은 list[0] ~ list[99]까지 값을 다 더한다. 
    return tempsum; //tempsun을 되돌려준다.
}
/* stack variable reuse test */
float sum3(int n, float *list) { //sum2과 받는 순서만 다르다. input배열을 포인터로 받는다
    printf("list\t= %p\n", list); //input배열을 받았기에 input[0]의 주소값이 출력된다.
    printf("&list\t= %p\n\n", &list); //list의 주소값이 나온다.
    int i;
    float tempsum = 0;
    for( i = 0; i < n; i++)
        tempsum += *(list +i); //tempsun은 list[0] ~ list[99]까지 값을 다 더한다. 
    return tempsum; //tempsun을 되돌려준다.
}