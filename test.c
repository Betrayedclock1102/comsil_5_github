#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 

#define MAX 5 

int main(void) 
{ 
    int index = 0 ; 

    srand(time(NULL)); 
    printf("�� ������ rand()�Լ��� �̿��Ͽ� ������ �����ϴ� �����Դϴ�.\n") ; 

    for ( index = 0 ; index < MAX ; index++ ) 
       printf( "%d ", rand()%10 ) ; 
    printf( "\n" ) ;

    return 0 ; 
}