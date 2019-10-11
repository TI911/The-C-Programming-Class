/* 1-100 之间偶数 求和
*
*
*   2019-10-11 7-8节 程序设计基础
*
*/

#include <stdio.h>

int main()
{
    int num = 0, s = 0;
    while( num<=2 ){
        num++;
        s += num;
    }
    printf("s = %d \n", s);
    return 0;
}
