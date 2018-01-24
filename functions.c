#include <stdio.h>

int chooser(int n, int m, char choices [][m])
{
	puts("Make a choice:");

	for(int i = 0; i < n; i++)
	{
		printf("%i: ", i+1);
		for (int j = 0; j < m; j++)
		{
			printf("%c", choices[i][j]);
		}
		printf("\n");
	}
	
	int selection;
	scanf("%i", &selection);

	if(selection > n || selection < 1){
		return -1;
	} else {
		return selection;
	}
}



