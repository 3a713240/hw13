#include<stdio.h>
#include<stdlib.h>
void is_marry(char,int);
int main(void)
{
	char sex;
	int age;
	printf("請輸入性別\n是男生請輸入1,女生請輸入2\n");
	scanf("%c",&sex);
	printf("請輸入年齡\n");
	scanf("%d",&age);
	is_marry(sex,age);
}
void is_marry(char sex,int age){
	switch(sex){
		case '1':
		case '1!':
		{
			if(age>=18){
				printf("在民國100年以前可結婚\n");
			}
			else{
				printf("在民國100年以前不可結婚\n");
			}
			break;
		}
		case '2':
		case '2!':{
			if(age>=16){
				printf("在民國100年以前可結婚\n");
			}
			else{
				printf("在民國100年以前不可結婚\n");
			}
			break;
		}
		default:{
			printf("請輸入正確代號");
			break;
		}
	}

}
