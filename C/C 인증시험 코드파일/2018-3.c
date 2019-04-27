#include <stdio.h>

int main()
{
	int cut, score;
	int i, success = 0, fail = 0;
	int max, min, sum = 0;
	double avg;

	scanf("%d", &cut);

	for (i = 1; i <= 10; i++) {
		scanf("%d", &score);
		if (i == 1) max = min = score;

		if (score>max) max = score;
		if (score <min) min = score;

		if (score>cut) {
			if (score - cut >= 35) printf(" A");
			else if (score - cut >= 20) printf(" B");
			else printf(" C");

			success++;
		}
		else fail++;

		sum += score;
	}

	if (success == 0) printf("none");
	avg = (double)sum / (success + fail);

	printf("\n%d %d\n", success, fail);
	printf("%d %d %.2f", max, min, avg);


	return 0;
}