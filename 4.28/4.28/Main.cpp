#include <stdio.h>
#include <stdlib.h>

int main()
{
	int code;
	float manager_salary;
	float hourly_worker_money, hourly_worker_hour, hourly_worker_total;
	float com_mission_worker_sells;
	float pieceworker_money, pieceworker;

	printf("請輸入代碼 (manager:1 hourly worker:2 com-mission worke:3 pieceworker:4) ：");
	scanf("%d",&code);

	switch (code)
	{
		case 1:
			printf("請輸入每周固定薪資：");
			scanf("%f",&manager_salary);
			printf("每周薪資為：%.0f\n",manager_salary);
			break;
		case 2:
			printf("請輸入每小時的工資為：");
			scanf("%f", &hourly_worker_money);
			printf("請輸入工作的時數為：");
			scanf("%f", &hourly_worker_hour);
			if (hourly_worker_hour <= 40)
				hourly_worker_total = hourly_worker_hour * hourly_worker_money;
			else
				hourly_worker_total = (40* hourly_worker_money) +((hourly_worker_hour-40) * (hourly_worker_money*1.5));
			printf("每周薪資為：%.0f\n", hourly_worker_total);
			break;
		case 3:
			printf("請輸入此周的銷售總額為：");
			scanf("%f", &com_mission_worker_sells);
			printf("每周薪資為：%.0f\n", (com_mission_worker_sells*0.057)+250);
			break;
		case 4:
			printf("請輸入此周製作產品件數為：");
			scanf("%f", &pieceworker);
			printf("請輸入製作一件產品的薪水為：");
			scanf("%f", &pieceworker_money );
			printf("每周薪資為：%.0f\n", pieceworker*pieceworker_money);
			break;
	}
	return 0;
}