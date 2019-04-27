#include <stdio.h>

int main()
{
	int sum = 0, cnt = 0;
	int sum20 = 0, sum30 = 0;
	int cnt20 = 0, cnt30 = 0;
	int num, flag = 0;

	while (1) {
		scanf("%d", &num);
		if (num <= 0) break;

		sum += num;
		if (flag == 0) {
			if (sum>20) {
				sum20 = sum - num;
				cnt20 = cnt;
				flag = 1;
			}
		}

		if (flag == 1) {
			if (sum>30) {
				sum30 = sum - num;
				cnt30 = cnt;
				flag = 2;
			}
		}
		cnt++;
	}

	printf("%d %d\n", sum20, cnt20);
	printf("%d %d\n", sum30, cnt30);

	return 0;
}