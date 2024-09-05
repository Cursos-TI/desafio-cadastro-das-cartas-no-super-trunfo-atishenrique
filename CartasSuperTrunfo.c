#include <stdio.h>
#include <string.h>
#include <locale.h>


int main (){
    setlocale(LC_ALL,"Portuguese_Brazil");

    char pais [50] = {"Brasil"};
    char cidade01,cidade02,cidade03,cidade04[50];
    char codcidade01, codcidade02, codcidade03, codcidade04[50];
    int populacaocid01, populacaocid02, populacaocid03, populacaocid04;
    float areacid01, areacid02, areacid03, areacid04;
    float PIBcid01, PIBcid02, PIBcid03, PIBcid04;
    int PTcid01, PTcid02, PTcid03, PTcid04;

    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Digite o nome do seu país:\n");
    scanf("%s", &pais);

    printf("Digite o nome da sua primeira cidade:\n");
    scanf("%s", &cidade01);
    printf("Agora digite a população da sua primeira cidade:\n");
    scanf("%d", &populacaocid01);
    printf("Agora digite a área da sua primeira cidade:\n");
    scanf("%f", &areacid01);
    printf("Agora digite o PIB da sua primeira cidade:\n");
    scanf("%f", &PIBcid01);
    printf("Agora digite a quantidade de Pontos Turísticos da sua primeira cidade:\n");
    scanf("%d", &PTcid01);

    printf("Digite o nome da sua segunda cidade:\n");
    scanf("%s", &cidade02);
    printf("Agora digite a população da sua segunda cidade:\n");
    scanf("%d", &populacaocid02);
    printf("Agora digite a área da sua segunda cidade:\n");
    scanf("%f", &areacid02);
    printf("Agora digite o PIB da sua segunda cidade:\n");
    scanf("%f", &PIBcid02);
    printf("Agora digite a quantidade de Pontos Turísticos da sua segunda cidade:\n");
    scanf("%d", &PTcid02);
    
    printf("Digite o nome da sua terceira cidade:\n");
    scanf("%s", &cidade03);
    printf("Agora digite a população da sua terceira cidade:\n");
    scanf("%d", &populacaocid03);
    printf("Agora digite a área da sua terceira cidade:\n");
    scanf("%f", &areacid03);
    printf("Agora digite o PIB da sua terceira cidade:\n");
    scanf("%f", &PIBcid03);
    printf("Agora digite a quantidade de Pontos Turísticos da sua terceira cidade:\n");
    scanf("%d", &PTcid03);
    
    printf("Digite o nome da sua quarta cidade:\n");
    scanf("%s", &cidade04);
    printf("Agora digite a população da sua quarta cidade:\n");
    scanf("%d", &populacaocid04);
    printf("Agora digite a área da sua quarta cidade:\n");
    scanf("%f", &areacid04);
    printf("Agora digite o PIB da sua quarta cidade:\n");
    scanf("%f", &PIBcid04);
    printf("Agora digite a quantidade de Pontos Turísticos da sua quarta cidade:\n");
    scanf("%d", &PTcid04);

    printf("Segue abaixo as informações de cada cidade:\n");
    printf("Cidade 01:\n - Nome: %s\n - População: %d\n", cidade01, populacaocid01);
    printf("- Área: %f\n - PIB: %f\n - Quantidade de Pontos Turísticos: %d\n,",  areacid01, PIBcid01, PTcid01);

    printf("Cidade 02:\n - Nome: %s\n - População: %d\n", cidade02, populacaocid02);
    printf("- Área: %f\n - PIB: %f\n - Quantidade de Pontos Turísticos: %d\n,",  areacid02, PIBcid02, PTcid02);

    printf("Cidade 03:\n - Nome: %s\n - População: %d\n", cidade03, populacaocid03);
    printf("- Área: %f\n - PIB: %f\n - Quantidade de Pontos Turísticos: %d\n,",  areacid03, PIBcid03, PTcid03);

    printf("Cidade 04:\n - Nome: %s\n - População: %d\n", cidade04, populacaocid04);
    printf("- Área: %f\n - PIB: %f\n - Quantidade de Pontos Turísticos: %d\n,",  areacid04, PIBcid04, PTcid04);

    
    return 0;
}
