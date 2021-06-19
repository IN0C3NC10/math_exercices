#include<stdio.h>
#include<stdlib.h>
#include<math.h>//realiza a importação de dados matematicos

void main()
{
    int exe,qtd,v;
    float val,r1,n1,n2,n3,n4,med,pes,alt,imc,dis,lit,cons,salbase,vendas,salvendas,com,salfinal;
    char aluno[50],vend[50];
    v=1;//ATRIBUO O VALOR PARA REALIZAR LOOP
while(v==1){
    v=0;//TROCO O VALOR PARA NÃO VOLTAR NO LOOP
    printf("Qual exercicio deseja visualizar:[1-5]\n");
    scanf("%i",&exe);
    if (exe==1)
    {
        printf("Exercicio 1[Divisao]\n");
        printf("Qual e o valor do produto?\n");
        scanf("%f",&val);
        printf("Quantas parcelas deseja pagar?\n");
        scanf("%i",&qtd);
        r1=val/qtd;
        printf("O valor de cada parcela sera %.2f\n",r1);
    }
    else if (exe==2)
    {
       printf("Exercicio 2[Media]\n");
        printf("Digite o nome do aluno:\n");
        setbuf(stdin,NULL);//LIMPA OS DADOS DA MEMORIA RAM PARA UTILIZAR O GETS
        gets(aluno);
        printf("Digite a primeira nota:\n");
        scanf("%f",&n1);
        printf("Digite a segunda nota:\n");
        scanf("%f",&n2);
        printf("Digite a terceira nota:\n");
        scanf("%f",&n3);
        printf("Digite a quarta nota:\n");
        scanf("%f",&n4);
        med = (n1+n2+n3+n4)/4;
        printf("O %s possui media de %.2f\n",aluno,med);
    }
    else if (exe==3)
    {
        printf("Exercicio 3[IMC]\n");
        printf("Qual seu peso?\n");
        scanf("%f",&pes);
        printf("Qual sua altura?\n");
        scanf("%f",&alt);
        imc = pes/(alt*alt);
        printf("O seu IMC e de %.2f\n",imc);
        if (imc<17)
        {
            printf("No momento voce esta muito abaixo do peso\n");
        }
        else if ((imc>=17)&(imc<=18.49))
        {
            printf("No momento voce esta abaixo do peso\n");
        }
        else if ((imc>=18.5)&(imc<=24.99))
        {
            printf("No momento voce esta com o peso normal\n");
        }
        else if ((imc>=25)&(imc<=29.99))
        {
            printf("No momento voce esta acima do peso\n");
        }
        else if ((imc>=30)&(imc<=34.99))
        {
            printf("No momento voce esta com Obesidade I\n");
        }
        else if ((imc>=35)&(imc<=39.99))
        {
            printf("No momento voce esta com Obesidade II(severa)\n");
        }
        else if (imc>=40)
        {
            printf("No momento voce esta com Obesidade III(morbida)\n");
        }
        else{
            printf("Voce digitou algo errado pokemon\n");
        }
    }
else if (exe==4)
    {
        printf("Exercicio 4[Distancia]\n");
        printf("Informe a distancia percorrida:\n");
        scanf("%f",&dis);
        printf("Informe a quantidade de litros gastos:\n");
        scanf("%f",&lit);
        cons = dis/lit;
        printf("O consumo medio do veiculo = %.2f km/l\n",cons);
    }
else if (exe==5)
    {
        printf("Exercicio 5[Salario]\n");
        printf("Informe o nome do vendedor:\n");
        setbuf(stdin,NULL);//LIMPA OS DADOS DA MEMORIA RAM PARA UTILIZAR O GETS
        gets(vend);
        printf("Informe o salario base:\n");
        scanf("%f",&salbase);
        printf("Informe a comissao [Porcentagem]:\n");
        scanf("%f",&com);
        printf("Informe o valor das vendas efetuadas neste mes:\n");
        scanf("%f",&vendas);
        salvendas = (vendas*com)/100;
        salfinal = salbase+salvendas;
        printf("O vendedor %s recebeu ao final do mes o salario de R$ %.2f\n",vend,salfinal);
    }
    else{
            printf("Voce digitou algo errado pokemon\n");
    }
    printf("Deseja voltar ao inicio? [0 - Nao] [1 - Sim]\n");
    scanf("%i",&v);//O USUARIO DECIDE MUDANDO O VALOR DE "V"
    system("CLS");//APAGA LINHAS ANTERIORES
}
    system("pause");
}
