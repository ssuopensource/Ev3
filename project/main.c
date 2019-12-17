#include<stdio.h>

int main()
{
	int num;

	printf("=========================\n");
	printf("반려견 정보 관리 프로그램\n");
	printf("=========================\n");
	
	while(1){
		printf("산책 : 1, 장난감 : 2, 사료 : 3, 종료 : 0\n");
		scanf("%d\n",&num);

		switch(num){
			case 1:
				walk();
				break;
			case 2:
				toy();
				break;
			case 3:
				food();
				break;
			case 0:
				printf("프로그램을 종료합니다.\n");
				break;
			default:
				printf("잘못 선택함\n");
		}
	}
	return 0;
}
