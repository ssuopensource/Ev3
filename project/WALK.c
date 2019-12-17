#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void diary();
void input();

int walk()
{
	int opt;

	printf("==================\n");
	printf("산책 관리 프로그램\n");
	printf("==================\n");

	while(1){
		printf("산책일지 :1, 입력 :2\n");
		scanf("%d\n",&opt);

		switch(opt){
			case 1:
				diary();
				break;
			case 2:
				input();
				break;
			default:
				printf("잘못 선택함\n");
		}
	}
	return 0;
}

void input()
{	
	char date[9];
	FILE *fp;
	fp = fopen("walking diary.txt","a");
	if(fp==NULL)
		printf("파일 열기 실패\n");
	else{
		printf("산책 날짜를 입력하시오(ex)20190309 :");
		scanf("%s",date);
		fprintf(fp,"%s",date);
	}
	fclose(fp);

	return;
}

void diary()
{	
	FILE *fp;
	char string[365];

	fp = fopen("walking diary.txt","r");
	if(fp==NULL)
		printf("파일 열기 실패\n");

	while(!feof(fp)){
		fscanf(fp,"%s",string);
		printf("%s\n",string);
	}
	fclose(fp);
	
	return;
}

