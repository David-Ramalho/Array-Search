#include <stdio.h>

int main()
{
	int vetora[10];
	int i, acha, busca;
	
	for(i=0;i<10; i++)
	{
		printf("digite o %d elemento\n", i);
		scanf("%d", &vetora[i]);
		
	}
	printf("informe o elemento que deseja buscar:\n");
	scanf("%d", &busca);
	i=0;
	acha=0;
	while((acha==0)&&(i<10))
	{
		if(vetora[i]==busca)
		{
			acha=1;
			
		}
		else
		{
			
			i++;
		}
		
	}
	if(acha==1)
	printf("o elemento %d foi encontrado na posicao %d", busca, i);
	else
	printf("nao encontrado");
	
	//continue
	
	
	
	
	return(0);
}