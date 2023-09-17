#include <stdio.h>

int main()
{
	int rate = 0;
	scanf("%d", &rate);

	if (rate >= 90 && rate <= 100)
		printf("%d A dasaran", rate);
	else if (rate >= 80 && rate < 90)
		printf("%d B dasaran", rate);
	else if (rate >= 70 && rate < 80)
		printf("%d C dasaran", rate);
	else if (rate >= 60 && rate < 70)
		printf("%d D dasaran", rate);
	else if (rate >= 0 && rate < 60)
		printf("%d E dasaran", rate);
	else
		printf("Gnahatakanner 0-ic 100 en.");

        return 0;
}

