#include <stdio.h>
#include <stdlib.h>


int main()
{
    int list[5]; //int형 배열 선언
    int *plist[5] = {NULL,}; //5개 정수에 대한 포인터 선언 plist[0]에 널포인터를 넣는다 아무것도 가르키지 않음
    plist[0] = (int *)malloc(sizeof(int)); // plist[0]에 int 용량만큼 동적 메모리 할당
    list[0] = 1; //list 0번에 1을 넣는다
    list[1] = 100; //list 1번에 100을 넣는다
    *plist[0] = 200; //plist[0]의 할당 받은 메모리에 200이라는 정수값을 넣는다
    printf("[----- [kimgunwoo] [2021041010] -----]");
    printf("list[0] = %d\n", list[0]); //list[0]안에든 1값을 출력한다
    printf("&list[0] = %p\n", &list[0]); //list[0]의 주소값을 출력한다
    printf("list = %p\n", list); // list는 list[0]을 가르키는 포인터라 list[0]의 주소값을 출력한다
    printf("&list = %p\n", &list); //list의 주소값 출력인데 이는 list[0]과 같다
    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]); //list[1]안에든 100을 출력한다.
    printf("&list[1] = %p\n", &list[1]); //list[1]의 주소값을 출력
    printf("*(list+1) = %d\n", *(list + 1)); //list는 list[0]을 가르키는 포인터인데 거기에 1을 더해서 list[1]을 가르킨다 따라서 list[1]안에 든 값 출력
    printf("list+1 = %p\n", list+1); //list는 list[0]을 가르키는 포인터인데 거기에 1을 더해서 list[1]을 가르킨다 따라서 list[1]의 주소 출력
    printf("----------------------------------------\n\n");
    printf("*plist[0] = %d\n", *plist[0]); //plist[0]안에 든 주소값 참조 후 출력 따라서 200출력
    printf("&plist[0] = %p\n", &plist[0]); //plist[0]의 주소값 출력
    printf("&plist = %p\n", &plist); //plist도 plist[0]을 가르키는 포인터이기에 plist[0]의 주소값을 출력한다
    printf("plist = %p\n", plist); //plist도 plist[0]을 가르키는 포인터이기에 plist[0]의 주소값을 출력한다
    printf("plist[0] = %p\n", plist[0]); //plist[0]이 들고있는 주소값 출력 
    printf("plist[1] = %p\n", plist[1]); //plist[1]이 들고있는 주소값 출력 아무것도 지정안해줬기에 NULL 출력
    printf("plist[2] = %p\n", plist[2]); //plist[2]이 들고있는 주소값 출력 아무것도 지정안해줬기에 NULL 출력
    printf("plist[3] = %p\n", plist[3]); //plist[3]이 들고있는 주소값 출력 아무것도 지정안해줬기에 NULL 출력
    printf("plist[4] = %p\n", plist[4]); //plist[4]이 들고있는 주소값 출력 아무것도 지정안해줬기에 NULL 출력
    free(plist[0]); //plist[0] 지정된 메모리 공간 할당을 해제함

    return 0;
}