int main()
{
    // faça um programa em C que peça ao utilizador dois números e apresente a sua soma
    int n1, n2, soma;
    int *pt1 , *pt2;
    
    pt1 = &n1;
    pt2 = &n2;
    
    printf("Digite um número: ");
    scanf("%d", pt1);
    printf("Digite outro número: ");
    scanf("%d", pt2);
    
    soma = *pt1 + *pt2;
    
    printf("A soma dos números apresentados é %d", soma);
    

    return 0;
}
