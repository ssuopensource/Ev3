#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int toy(){
	int opt;

	printf("====================\n");
	printf("장난감 관리 프로그램\n");
	printf("====================\n");

	while(1){
		printf("목록 :1, 추가 :2\n");
		scanf("%d\n",&opt);

		switch(opt){
			case 1:
				list();
				break;
			case 2:
				add();
				break;
			default:
				printf("잘못 선택함\n");
		}
	}
	return 0;
}

char add()
{
	char list[100];

	while("\n"){
		scanf("%s", list);}

	return list;
}
void list()
{
	char list_new[200]=add();

	while(!NULL){
		printf("%s\m",list_new);
		}
	return;
}

	



