#include <stdio.h>

int main()

{

	int cur, prev0 = 1, prev1 = 0, i;
	printf("Enter number of elements:\n");
	scanf("%u", & i);
	printf("seq:");
	while(i--)
	{
		cur = prev0 +prev1;
		prev1 = prev0;
		prev0 = cur;
		printf("%u, ", cur);

	}
	printf("\n");
	return 0;

}

