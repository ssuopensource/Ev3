#include<stdio.h>
#include<stdlib.h>

double cal();
void small();
void middle();
void big();

int food()
{
	int num;

	printf("==================\n");
	printf("먹이 관리 프로그램\n");
	printf("==================\n");

	while(1){
		printf("소형견(~7.9kg):1,중형견(8~20kg):2,대형견(21kg~):3,돌아가기:0\n");
		scanf("%d\n",&num);

		switch(num){
			case 1:
				small();
				break;
			case 2:
				middle();
				break;
			case 3:
				big();
				break;
			case 0:
			
				break;
			default:
				printf("잘못 선택함\n");
		}
	}
	return 0;
}

double cal()
{	
	double food[3];

	printf("사료 1컵:1,사료 반컵:0.5 기준으로 작성.\n");
	printf("아침,점심,저녁\n");
	scanf("%lf %lf %lf\n", &food[0],&food[1],&food[2]);
	
	double sum = food[0]+food[1]+food[2];
	double gram = 70*sum;

	return gram;
}

void small()
{	
	double gram = cal();

	double cup;

	printf("소형견 1일 사료 섭취 권장량 : 40~90g\n");
	printf("귀하의 반려견 1일 사료 섭취량 : %lfg\n",gram);
	printf("=====================================\n");
	if(gram==65) printf("현재 섭취량을 유지하십시오.\n");
	else if(gram<65) {
		cup = (65-gram)/70;
		printf("%0.2f컵만큼 더 먹이십시오.\n",cup);
	}
	else if(gram>65){
		cup = (gram-65)/70;
		printf("%0.2f컵만큼 더 줄이십시오.\n",cup);
	}
	return;
}
	
void middle()
{
	double gram = cal();

	double cup;

	printf("중형견 1일 사료 섭취 권장량 : 150~200g\n");
	printf("귀하의 반려견 1일 사료 섭취량 : %lfg\n",gram);
	printf("======================================\n");
	if(gram==175) printf("현재 섭취량을 유지하십시오.\n");
	else if(gram<175){
		cup = (175-gram)/70;
		printf("%0.2f컵만큼 더 먹이십시오.\n",cup);
	}
	else if(gram>175){
		cup = (gram-175)/70;
		printf("%0.2f컵만큼 더 줄이십시오.\n",cup);
	}
	return;
}

void big()
{
	double gram = cal();

	double cup;

	printf("대형견 1일 사료 권장 섭취량 : 240~330g\n");
	printf("귀하의 반려견 1일 사료 섭취량 : %lfg\n",gram);
	printf("======================================\n");
	if(gram==285) printf("현재 섭취량을 유지하십시오.\n");
	else if(gram<285){
		cup = (285-gram)/70;
		printf("%0.2f컵만큼 더 먹이십시오.\n",cup);
	}
	else if(gram>285){
		cup = (gram-285)/70;
		printf("%0.2f컵만큼 더 줄이십시오.\n",cup);
	}
	return;
}




	






