#include <stdio.h>
int main()
{
	int loop = 0;
    int resposta = 0;

    printf (" qual é a idade do yuji? \n");
    printf (" digite 3 para sair \n");

    while(loop == 0){
        scanf("%d", &resposta);
        switch (resposta) // escolha
	    {
            case 3: //case 
                printf("fim do programa\n");
                loop = 1;
                break;
            case 20:
                printf("Parabéns, acertou a idade\n");
                loop = 1;
                break;
		    default: // qualquer outra coisa
                printf ("você chutou: %d\n" , resposta);
		        printf("você errou, tente novamente\n");
		        break;
	    }
    }
	return 0;
}
