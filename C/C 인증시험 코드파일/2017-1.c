#include <stdio.h>

int main()
{
	int kor, math, eng;
	double avg_sum;

	scanf("%d %d %d", &kor, &math, &eng);
	avg_sum = kor * 0.2 + math * 0.3 + eng * 0.5;

	printf("%.2f", avg_sum);

	return 0;
}