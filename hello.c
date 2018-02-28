#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		printf("Hello %s. This file was created because\n"
			"mistergarybutler wanted something to test\n"
			"his understanding of git pull.\n", argv[1]);
	}

	else
	{
		printf("Please supply only one argument.\n"
			"That argument should be your name.\n");
		return 1;
	}

	return 0;
}
