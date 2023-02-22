/**
 * main - Entry point
 * Return: Always 0
 */
int main (void)
{
       int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if ((n % 10) > 5)
{ printf("last digit of %d is %d and is greater than 5\n"
 	
