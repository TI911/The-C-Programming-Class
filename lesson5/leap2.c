#include <stdio.h>
int main()
{
	int year, leap;
    printf("请输入年份: ");
    scanf("%d", &year);
    
	if(year%4==0 && year%100 != 0 || year%400 == 0 ){
		leap = 1;
		
	}else{
		leap = 0;
	}
	
	if(leap) printf("%d 是", year);
    else printf("%d 不是", year);

    printf("闰年.\n");
    return 0;	
}
