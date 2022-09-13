int _putchar()
{
	char alpha[] = "_putchar";
	int num;

	for (num = 0; num < 8; num++)
	{
		putchar(alpha[num]);
	}
	putchar('\n');
	return (0);
}
