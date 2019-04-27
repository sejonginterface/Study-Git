#include <stdio.h>

int main()
{
	int num, i, cnt;

	scanf("%d", &num);

	for (i = 2; i <= num; i++) {
		cnt = 0;
		while (num%i == 0) {
			cnt++;
			num /= i;
		}

		if (cnt>0) printf("%d %d\n", i, cnt);
	}

	return 0;
}