    #include <stdio.h>
    /*BELEZA!! int=Número inteiro; float=Para medida 
    de menor valor; double=É de medida mas para 
    valores ALTOS; char=Caracteres; void= Uma função não 
    retorna nenhum valor*/
    /*%d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número com ponto flutuante no formato padrão.
    %e: Imprime um número com vírgula/ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.*/
    int main(){
    int pontos = 20, pontos2 = 25;
    long int populacao = 201418, populacao2 = 728400;
    float area = 498, area2 = 650;
    double pib = 13.2, pib2 = 34.3; 
    char estado[50] = "SP";
    char estado2[50] = "SP";
    char cidade[50] = "Rio Claro";
    char cidade2[50] = "Ribeirao Preto";
    char codigo[5] = "A01";
    char codigo2[5] = "B01";

    printf("CARTA 1\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f Km2\n", area);
    printf("PIB: %.2lf bilhões de reais\n", pib);
    printf("Numero de pontos turísticos: %d\n", pontos);

    printf("CARTA 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n",populacao2);
    printf("Area: %.2f Km2\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de pontos turisticos: %d\n", pontos2);
    printf("\n");

    float densidade = populacao /area;
    float densidade2 = populacao2 /area2;
    double capita = pib * 1000000000.0 / (float) populacao;
    double capita2 = pib2 * 1000000000.0/ (float) populacao2;

    printf("Suas cartas cadastradas sao:\n");
    printf("       CARTA 1\n");
    printf("    ESTADO: %s\n", estado);
    printf("    CÓDIGO: %s\n", codigo);
    printf("    CIDADE: %s\n", cidade);
    printf("    POPULAÇÃO: %d \n", populacao);
    printf("    ÁREA: %.2f Km2\n", area);
    printf("    PIB: %.2lf bilhões de reais\n", pib);
    printf("    NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontos);
    printf("    DENSIDADE POPULACIONAL: %.2f hab/km2\n", densidade);
    printf("    PIB PER CAPITA: %.2lf reais\n",capita);

    printf("       CARTA 2\n");
    printf("    ESTADO:%s\n", estado2);
    printf("    CÓDIGO:%s\n", codigo2);
    printf("    CIDADE:%s\n", cidade2);
    printf("    POPULAÇÃO:%d\n", populacao2);
    printf("    ÁREA:%.2f Km2\n", area2);
    printf("    PIB:%.2lf bilhões de reais\n", pib2);
    printf("    NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontos2);
    printf("    DENSIDADE POPULACIONAL: %.2f hab/km2\n", densidade2);
    printf("    PIB PER CAPITA: %.2lf reais\n", capita2);
    printf("\n");
    
   int escolha[6] = {0}; // marca quais atributos já foram usados
    int opcao, i;
    double soma1 = 0, soma2 = 0;

  for(i=0; i<2; i++){ // duas rodadas de escolha
       
    printf("ESCOLHA UM ATRIBUTO PARA DEFINIR A CARTA VENCEDORA:\n", i+1);
    if (!escolha[1])printf("1. POPULACAO\n");
    if (!escolha[2])printf("2. AREA\n");
    if (!escolha[3])printf("3. PIB\n");
    if (!escolha[4])printf("4. NUMERO DE PONTOS TURISTICOS\n");
    if (!escolha[5])printf("5. DENSIDADE DEMOGRAFICA\n");
    scanf("%d", &opcao);
    
    if(escolha[opcao]){
    printf("Essa opção já foi escolhida! Tente de novo.\n");
     i--; 
     continue;
     }
     escolha[opcao] = 1; // opcão como usado


    switch (opcao){
    case 1:
    printf("CARTA 1: %i mil | Carta 2: %i mil\n", populacao, populacao2);
     soma1 += populacao;
     soma2 += populacao2;
    break;

    case 2:
    printf("CARTA 1: %.2f Km2 | Carta 2: %.2f Km2\n", area, area2);
    soma1 += area;
    soma2 += area2;
    break;

    case 3:
        printf("CARTA 1: %.2lf Bilhoes de reais | Carta 2: %.2lf Bilhoes de reais\n", pib, pib2);
    soma1 += pib;
    soma2 += pib2;
    break;

   case 4: 
    printf("Carta 1: %d | Carta 2: %d\n", pontos, pontos2);
    soma1 += pontos;
    soma2 += pontos2;
    break;

    case 5:
      printf("Carta 1:  %.2lf hab/km2 | Carta 2:  %.2lf hab/km2\n", densidade, densidade2);
    soma1 += densidade;
    soma2 += densidade2;
    break;
    default:
    printf("Opção inválida!\n");
    i--; // repete a rodada
    break;
    }
  }
      printf("\n RESULTADO FINAL (soma dos atributos escolhidos):\n");
    printf("Carta 1: %.2lf | Carta 2: %.2lf\n", soma1, soma2);
    if(soma1 > soma2) printf(" Carta 1 venceu!\n");
    else if(soma2 > soma1) printf(" Carta 2 venceu!\n");
    else printf(" Empate!\n");

    return 0;
    }