#include <stdio.h>
#include <locale.h>
int main () {
int n;
setlocale (LC_ALL,"portuguese");
	
printf ("****PARA REALIZAR TECNICA FEYNMAN TEMOS QUE DIVIDI-LA EM 5 PARTES****\n\n");
printf ("Parte 1 - Escolha um assunto para aprofundar o seu conhecimento a gora pesquise nos melhores livros e sites e estude.\n\n");
printf ("Parte 2 - Pegue papel e caneta e escreva tudo o que você entendeu sobre o assunto.\n\n");
printf ("Parte 3 - Fale em voz alta como se estivesse explicando para alguem, assim ajuda a gravar o conteudo.\n\n");
printf ("Parte 4 - Apos a explicação você pode identificar os pontos que ainda não dominou.\n\n");	
	
	
	
	
while (1){
printf ("Se você conseguiu dominar o assunto até aqui digite 1 ou caso não tenha conseguido digite 2\n");
scanf ("%d",&n);
	
if (n==1){
printf ("Parte 5 - Agora que você dominou o assunto repita o processo de forma resumida.\n");
printf ("Para ajudar insira imagens tornando o material um pouco mais visual assim facilita o entendimento.\n");
printf ("Se mesmo depois aplicar as 5 partes e ainda restar duvidas refaça todo o procedimento");

break;

}
if (n==2){
printf ("Refaça a parte 02 e 03 novamente\n");
}

if (n>2 || n<1){
printf ("Escolha a opção 1 ou 2\n");		
}
}	
return 0;	



}
