#include <stdio.h>
#include <string.h>

inline int read ()
{
	char c;
	int n = 0;

	while ((c = getchar_unlocked ()) < 48);
	n += (c - '0');
	
	while ((c = getchar_unlocked ()) >= 48)
	  n = n * 10 + (c - '0');
	
	return n;
}

int main (void)
{
	int t = read ();
	while (t--)
	{
		int n = read (), a[n], i;
		for (i = 0; i < n; i++)
		  a[i] = read ();
		
	}
	return 0;
}