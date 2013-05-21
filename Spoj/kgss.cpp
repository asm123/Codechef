using namespace std;

#include <stdio.h>
#include <queue>

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
	int n = read (), i, a[1000001], q;
	for (i = 1; i <= 1000000; i++)
	  a[i] = 0;
	for (i = 1; i <= n; i++)
	  a[i] = read ();
	q = read ();
	while (q--)
	{
		char op;
		scanf ("%c", &op);
		int x = read (), y = read ();
		if (op == 'Q')
		{
			priority_queue <int> maxHeap;
			for (i = x; i <= y; i++)
			  maxHeap.push (a[i]);
			int n1 = maxHeap.top ();
			maxHeap.pop ();
			int n2 = maxHeap.top ();
			maxHeap.pop ();
			printf ("%d\n", n1 + n2);
		}
		else
		  a[x] = y;
	}
	return 0;
}