#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5]; //int형 배열 선언
    int *plist[5]; //int형 포인터 배열 선언
    list[0] = 10; //list[0]에 정수 10 넣음
    list[1] = 11; //list[1]에 정수 11 넣음
    plist[0] = (int*)malloc(sizeof(int)); //plist[0]에 int사이즈만큼 동적 메모리할당
    printf("[----- [kimgunwoo] [2021041010] -----]");
    printf("list[0] \t= %d\n", list[0]); //list[0]안에 든 값 출력
    printf("list \t\t= %p\n", list); //list는 list[0]을 가르키는 포인터 따라서 list[0]의 주소 출력
    printf("&list[0] \t= %p\n", &list[0]); //list[0]에 주소값 출력
    printf("list + 0 \t= %p\n", list+0); //list는 list[0]을 가르키는 포인터인데 거기에 0을 더했으므로 list[0]의 주소 출력
    printf("list + 1 \t= %p\n", list+1); //list는 list[0]을 가르키는 포인터인데 거기에 1을 더했으므로 list[1]의 주소 출력
    printf("list + 2 \t= %p\n", list+2); //list는 list[0]을 가르키는 포인터인데 거기에 2을 더했으므로 list[2]의 주소 출력
    printf("list + 3 \t= %p\n", list+3); //list는 list[0]을 가르키는 포인터인데 거기에 3을 더했으므로 list[3]의 주소 출력
    printf("list + 4 \t= %p\n", list+4); //list는 list[0]을 가르키는 포인터인데 거기에 4을 더했으므로 list[4]의 주소 출력
    printf("&list[4] \t= %p\n", &list[4]); //list[4]를 가르키는 주소 출력
    free(plist[0]); //plist[0]에 할당한 동적 메모리 반환


}