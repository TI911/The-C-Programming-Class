#include <stdio.h>
int main()
{
	int year, leap;
    printf("���������: ");
    scanf("%d", &year);
    
	if(year%4==0 && year%100 != 0 || year%400 == 0 ){
		leap = 1;
		
	}else{
		leap = 0;
	}
	
	if(leap) printf("%d ��", year);
    else printf("%d ����", year);

    printf("����.\n");
    return 0;	
}
