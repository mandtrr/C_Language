#include <stdio.h>

int main() {
    int opcao;
    float saldo = 0;
    float valor;
    int servicos;
    
    while(1) {
        printf("\nCaixa Multibanco\n");
        printf("[1] Levantar dinheiro\n");
        printf("[2] Depósito\n");
        printf("[3] Consultar saldo\n");
        printf("[4] Pagamento de serviços\n");
        printf("[5] Sair\n");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
            printf("Digite o valor que deseja levantar: ");
            scanf("%f", &valor);
            
            if(valor>saldo) {
                printf("Saldo insuficiente!\n");
            }
            else {
                if(valor >= 1){
                saldo = saldo - valor;
                printf("Levantou %.2f! Saldo disponível agora é de %.2f.\n", valor, saldo);
                }
                else {
                    printf("Não é permitido inserir valor 0 ou um valor negativo!\n");
                }
            }
            break;
            
            case 2: 
            printf("Digite o valor que deseja depositar: ");
            scanf("%f", &valor);
            if(valor >= 1){
                saldo = saldo + valor;
                printf("Depositou %.2f! Saldo disponível agora é de %.2f.\n", valor, saldo);
            break;
            }
            else{
                printf("Não é permitido inserir valor 0 ou um valor negativo!\n");
            }
            break;
            
            case 3:
            printf("Deseja ver o saldo no visor ou impresso?\n");
            printf("[1] VISOR\n");
            printf("[2] IMPRESSO\n");
            printf("Digite a opção desejada: ");
            int escolha;
            scanf("%d", &escolha);
            if(escolha == 1) {
            printf("O seu saldo atual é de: %.2f\n", saldo);
            break;   
            }
            else if(escolha == 2) {
                printf("A IMPRIMIR.......\n");
                break;
            }
            else {
                printf("Número inválido.\n");
                break;
            }
            
            case 4:
            printf("Qual serviço deseja efetuar pagamento?\n");
            printf("[1] Água\n");
            printf("[2] Eletricidade\n");
            printf("[3] Internet\n");
            printf("Digite a opção: ");
            scanf("%d", &servicos);
            
            printf("Digite o valor a ser pago: ");
            scanf("%f", &valor);
            
            if(valor > saldo) {
                printf("Saldo insuficiente!\n");
            }
            else {
                if(valor <= 0){
                    printf("Não é permitido inserir valor 0 ou um valor negativo!\n");
                }
                else {
                saldo = saldo - valor;
                switch(servicos) {
                    case 1:
                    printf("Pagamento de água no valor de %.2f€ efetuado com sucesso!", valor);
                    break;
                    case 2:
                    printf("Pagamento da eletricidade no valor de %.2f€ efetuado com sucesso!", valor);
                    break;
                    case 3:
                    printf("Pagamento da internet no valor de %.2f€ efetuado com sucesso!", valor);
                    break;
                    default:
                    printf("Número do serviço inválido!\n");
                }    
                }
            }
            break;

            case 5:
            printf("Opção escolhida: SAIR. Obrigada por utilizar o multibanco!");
            return 0;
            
            default:
            printf("Opção inválida. Tente novamente!\n");
            
        }
    }
}