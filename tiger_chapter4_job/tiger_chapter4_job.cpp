// ConsoleApplication43.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*��ϰ4��3*/
#include<stdio.h>
#include<math.h>
#include<iostream>
int liti43(void){
	int main();
	double eps;
	printf("����һ����ʵ����");
	scanf("%lf", &eps);
	double x, y, z, h;
	x = y = 1;
	double pi, he;
	pi = 1;
	he = 0;
	while (fabs(x / y) > fabs(eps)) {
		z = y;
		y = z + 2;
		h = x;
		x = -h;
		he = x / y;
		pi = pi + he;
	}
	printf("pi=%.6f\n", pi);
	getchar();
	getchar();
	return 0;
}

/*��ϰ4-6*/
int liti46() {
	int mynumber, n, yournumber, flag, count = 0;
	printf("��������");
	scanf("%d",&mynumber);
	printf("��������");
	scanf("%d",&n);
	flag = 0;
	while (count < n) {
		printf("�����µ�����");
		scanf("%d",&yournumber);
		count++;
		if (yournumber == mynumber) {
			printf("Luck You!\n");
			flag = 1;
			break;
		}
		else
			if (yournumber > mynumber)
				printf("̫����\n");
			else
				printf("̫С��\n");
	}
	if ((flag == 0)&(mynumber < 0))
		printf("GAME OVER");
	getchar();
	getchar();	
	return 0;
}


/*��ϰ4-7*/
int liti47() {
	int n, i, i_2;
	double e = 1;
	double sum = 1;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (i_2 = 1; i_2 <= i; i_2++) {
			sum = sum*i_2;
		}
		e = e + 1.0 / sum;
		sum = 1;
	}
	printf("%.4f", e);
	system("pause");
	return 0; 
}
/*��ϰ4-10*/
int liti410()
{
	int i, n, mark, sma;
	printf("����n��ֵ\n");
	scanf("%d", &n);
	printf("�����һ���ɼ�\n");
	scanf("%d", &mark);
	sma = mark;
	for (i = 1; i < n; i++) {
		if (mark < sma)
			sma = mark;
		printf("������һ���ɼ�\n");
		scanf("%d", &mark);
	}
	printf("��СֵΪ%d", sma);
	system("pause");
	return 0;
}
/*��ϰ4-11*/
int liti411()
{
	int m, n;
	printf("����m n\n");
	scanf("%d %d", &m, &n);
	int i;
	int count = 0, sum = 0;

	for (m; m <= n; m++) {
		int m_1;
		m_1 = sqrt(m);
		for (i = 2; i <= m_1; i++) {
			if (m%i == 0) {
				break;
			}
		}
		if (i > m_1) {
			if (m == 1) {
				count = count;
			}
			else {
				sum += m;
				count++;
			}

		}

		printf("%d %d", count, sum);
		system("pause");
		return 0;
	}
}

int main()
{
	liti43();
	//liti46();
	//liti47();
	//liti410();
	//liti411();
	return 0;
}

