/* 1-100 之间偶数 求和
*
*
*   2019-10-11 7-8节 程序设计基础
*
*/

#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    while( i<=100 ){
        if( i%2==0 ){
            sum = sum + i;
        }
        i = i + 1;
    }
    printf("sum = %d \n", sum);
    return 0;
}
