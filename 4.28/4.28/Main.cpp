#include <stdio.h>
#include <stdlib.h>

int main()
{
	int code;
	float manager_salary;
	float hourly_worker_money, hourly_worker_hour, hourly_worker_total;
	float com_mission_worker_sells;
	float pieceworker_money, pieceworker;

	printf("�п�J�N�X (manager:1 hourly worker:2 com-mission worke:3 pieceworker:4) �G");
	scanf("%d",&code);

	switch (code)
	{
		case 1:
			printf("�п�J�C�P�T�w�~��G");
			scanf("%f",&manager_salary);
			printf("�C�P�~�ꬰ�G%.0f\n",manager_salary);
			break;
		case 2:
			printf("�п�J�C�p�ɪ��u�ꬰ�G");
			scanf("%f", &hourly_worker_money);
			printf("�п�J�u�@���ɼƬ��G");
			scanf("%f", &hourly_worker_hour);
			if (hourly_worker_hour <= 40)
				hourly_worker_total = hourly_worker_hour * hourly_worker_money;
			else
				hourly_worker_total = (40* hourly_worker_money) +((hourly_worker_hour-40) * (hourly_worker_money*1.5));
			printf("�C�P�~�ꬰ�G%.0f\n", hourly_worker_total);
			break;
		case 3:
			printf("�п�J���P���P���`�B���G");
			scanf("%f", &com_mission_worker_sells);
			printf("�C�P�~�ꬰ�G%.0f\n", (com_mission_worker_sells*0.057)+250);
			break;
		case 4:
			printf("�п�J���P�s�@���~��Ƭ��G");
			scanf("%f", &pieceworker);
			printf("�п�J�s�@�@�󲣫~���~�����G");
			scanf("%f", &pieceworker_money );
			printf("�C�P�~�ꬰ�G%.0f\n", pieceworker*pieceworker_money);
			break;
	}
	return 0;
}