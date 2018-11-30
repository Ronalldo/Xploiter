#include <stdio.h>
#include <stdlib.h>
#define max 10
#define TRUE 1
#define FALSE 0

typedef int boolean;

typedef int conteudo;
typedef struct
{
    int topo;
    conteudo pilha[max];
} pilhaEstatica;

void inicia(pilhaEstatica *p);
char pilhaCheia(pilhaEstatica p);
char pilhaVazia(pilhaEstatica p);
conteudo desempilha(pilhaEstatica *p);
void empilha(pilhaEstatica *p, conteudo num);
char busca(pilhaEstatica p, conteudo e);
void mostra(pilhaEstatica p);
void menu(int num, conteudo a, pilhaEstatica *p, pilhaEstatica m);

int main()
{
    int num;
    pilhaEstatica pilha1;

    inicia(&pilha1);

    printf("-------------\n");
    printf("1-Inserir\n2-Remover\n3-Buscar\n4-Mostrar\n");
    puts("-------------");
    puts("                                             ");

    
     
        
}
menu(int num, conteudo a, pilhaEstatica *p, pilhaEstatica m)
{
    scanf("%d", &num);
    while (num != -1)
    {
        switch (num)
        {
        case 1:
            mostra(m);
            break;
        //case 2:
           // empilha(p, a);
        }
        scanf("%d", &num);
    }
}

void inicia(pilhaEstatica *p)
{
    p->topo = 0;
}
char pilhaCheia(pilhaEstatica p)
{
    if (p.topo == max)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char pilhaVazia(pilhaEstatica p)
{
    if (p.topo == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
conteudo desempilha(pilhaEstatica *p)
{
    if (pilhaVazia(*p))
    {
        printf("Não é possivel Remover de Lista vazia\n");
    }
    else
    {
        p->topo--;
        return (p->pilha[p->topo]);
    }
}
void empilha(pilhaEstatica *p, conteudo num)
{
    if (pilhaCheia(*p))
    {
        printf("Pilha cheia, impossivel empilhar\n");
    }
    else
    {
        p->pilha[p->topo] = num;
        p->topo++;
    }
}
char busca(pilhaEstatica p, conteudo e)
{
    for (int i = 0; i < p.topo; i++)
    {
        if (e == p.pilha[i])
        {
            return 1;
        }
    }
    return 0;
}
void mostra(pilhaEstatica p){
    for(int i=0; i<p.topo; i++){
        printf("1 - %d", p.pilha[i]);
    }
}
