#include <stdio.h>
#include <stdlib.h>
//PAULA ANACLETO E GUILHERME CORDEIRO 
int main(){
	int matriz_id_estoque[10][2];
	float vetor_preco[10];
	
	for (int i = 0; i < 10; i++) {
        printf("Produto %d: ID = ", i + 1);
        scanf("%d", &matriz_id_estoque[i][0]);
        printf("Quantidade = ");
        scanf("%d", &matriz_id_estoque[i][1]);
        printf("Preco = ");
        scanf("%f", &vetor_preco[i]);
}int op; 
do{
	printf("\nMenu:\n");
        printf("1.Exibir produtos\n2.Vender produto\n0.Sair\n");
        scanf("%d", &op);
	switch (op){
            case 1: 
            printf("ID | Quantidade | Preco\n");
            for (int i = 0; i < 10; i++){
            printf("%d | %d | R$ %2.f\n", matriz_id_estoque[i][0], matriz_id_estoque[i][1], vetor_preco[i]);
            if (matriz_id_estoque[i][1] <3){
            printf("\nEstoque Baixo\n");
        }
	}break;
			case 2: {
                int id, qtd;
                printf("ID do produto: ");
                scanf("%d", &id);
                int encontrado = 0;
                for (int i = 0; i < 10; i++) {
                if (matriz_id_estoque[i][0] == id) {
            	encontrado = 1;
                printf("Quantidade a vender: ");
                scanf("%d", &qtd);

                if (matriz_id_estoque[i][1] <= 0) {
                printf("Estoque esgotado, venda nao permitida.\n");
                } else if (qtd > matriz_id_estoque[i][1]) {
                printf("Estoque insuficiente.\n");
                } else {
                matriz_id_estoque[i][1] -= qtd;
                float valorTotal = qtd*vetor_preco[i];
                printf("Venda realizada. Valor total: R$ %.2f\n", valorTotal);
                printf("Quantidade restante do produto %d: %d unidades\n", matriz_id_estoque[i][0], matriz_id_estoque[i][1]);
                if (matriz_id_estoque[i][1] < 3) {
                printf("Produto %d esta agora com %d unidades, estoque Baixo\n", matriz_id_estoque[i][0], matriz_id_estoque[i][1]);
                            }
                        }
                        break;
                    }
                }
                if (!encontrado) {
                    printf("ID %d nao encontrado.\n", id);
                }
                break;
            }
            case 0:
                printf("Voce desejou sair! Tchau...\n");
                break;
            default:
            	printf("Opcao invalida!Tente novamente...\n");
        }
    } while (op!= 0);
}
