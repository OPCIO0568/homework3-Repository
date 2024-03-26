#include <stdio.h>

void print_one(int *ptr, int rows);

int main()
{

    int one[] = {0, 1, 2, 3, 4}; //int 배열 선언 밑 배열에 값을 넣어줌
    printf("[----- [kimgunwoo] [2021041010] -----]");
    printf("one = %p\n", one); //one은 one[0]을 지정하는 포인터이기에 one[0]의 주소다.
    printf("&one = %p\n", &one); //one은 one[0]을 지정하는 포인터이자 본인이기에 one[0]의 주소다.
    printf("&one[0] = %p\n", &one[0]); //one[0]의 포인터 주소 출력
    printf("\n");
    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5); //ptr의 one[0]의 주소를 넣는다. 배열 크기는 5이다
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5); //one은 one[0]을 지정하는 포인터이기에 one[0]의 주소를 ptr에 넣는다. 

    return 0;

}

void print_one(int *ptr, int rows){
    /* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
    printf("%p \t %5d\n", ptr + i, *(ptr + i)); //ptr포인터는 one[0]의 주소값을 받았기에 one[0]의 주소값 출력, one[0]안에 든 값 출력/ 0~4까지 반복한다
    printf("\n");

}