/**
 * rand - check the code for Holberton School students.
 * Return: Always number of Lottery.
 */

int rand(void)

{
	static int i = -1;
	int randomn[6] = {8, 8, 7, 9, 23, 74};

	i++;
	return (randomn[i]);
}
