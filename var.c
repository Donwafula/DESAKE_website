#include <stdio.h>

/**
  *loop - function
  *@x: int
  *return: void
  */
void loop(int x)
{
	while (x < 20)
	{
		printf("%d", x);
		printf("\n");
		x++;
	}
}

/**
  *main - function
  *return: 0
  */
int main(void)
{
	int x = 0;

	loop (x);
	return (0);
}