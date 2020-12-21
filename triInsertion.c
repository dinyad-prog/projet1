#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int tab[10]={-104,-5,0,110,-9,8,10,11,1,20};

	int i,j=0,n=10,tmp;


	for ( j=1; j < n; ++j)
	{
		for ( i = j; i >0 ; --i)
		{
			if (tab[i-1]>tab[i])
			{
				tmp=tab[i];
				tab[i]=tab[i-1];
				tab[i-1]=tmp;

			}
			else
				break;
		
		}
	}
	



	for (int i = 0; i < 10; ++i)
	{
		printf("%d  ",tab[i] );
	}

	return 0;
}