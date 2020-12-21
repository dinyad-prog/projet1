#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int main(int argc, char const *argv[])
{
	int n_occurent=0,max=0,min=0,nb_max=0,nb_min=0;

	do{
		printf("Entrez un nombre (-1 pour terminer): ");
		scanf("%d",&n_occurent);
	}while((n_occurent < 0 || n_occurent >20 ) && n_occurent !=-1);

	if(n_occurent==-1)
	{
		printf("Aucun nombre n'est entrez\n");
		exit(0);
	}

	max=min=n_occurent;
	nb_min=nb_max=1;

	while(n_occurent!=-1)
	{
		printf("Entrez un nombre (-1 pour terminer): ");
		scanf("%d",&n_occurent);
		
		if (n_occurent <=20 && n_occurent >=0 )
		{
			if(n_occurent > max)
			{
				max=n_occurent;
				nb_max=1;
			}
			else if (n_occurent==max)
			{
			nb_max++;
			}

			if (n_occurent <min)
			{
				min=n_occurent;
				nb_min=1;
			}
			else if (n_occurent==min)
			{
				nb_min++;
			}
			
		}
		else if (n_occurent!=-1)
			printf("Doit etre entrez 0 et 20 !!\n");

	}

	printf("Le max est %d entré %d fois\nLe min est %d entré %d  fois\n",max,nb_max,min,nb_min );

	return 0;
}