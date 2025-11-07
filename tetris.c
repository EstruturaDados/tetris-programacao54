#include <stdio.h>
#include<string.h>
#define TAMANHO_FILA 5
typedef struct{
    char tipo[20];
}Peca;

Peca fila[TAMANHO_FILA];
int inicio=0;
int fim=0;
int quantidade=0;

void exibirFila(){
    printf("Fila atual:\n");
    if(quantidade==0){
        printf("Fila vazia.\n");
        return;
    }

    for(int i=0;i<quantidade;i++){
        int indice=(inicio+1)%TAMANHO_FILA;
        printf("Posição %d: %s\n", i+1,fila[indice].tipo);
    }
}

void inserirPeca(){
    if(quantidade==TAMANHO_FILA){
        printf("Fila cheia!Não é possívelinserir nova peça.\n");
        return;
    }

    Peca nova;
    printf("Digite o tipo da nova peça:\n");
    scanf("%[^\n]",nova.tipo);

    fila[fim]=nova;
    fim=(fim+1)%TAMANHO_FILA;
    quantidade++;

    printf("Peça inserida com sucesso\n");
    exibirFila();
}

void jogarPeca(){
    if(quantidade==0){
        printf("Fila vazia!\n");
        return;
    }
    printf("PEça jogada:%s\n",fila[inicio].tipo);
    inicio=(inicio+1)%TAMANHO_FILA;
    quantidade--;

    exibirFila();
}

int main(){
    int opcao;

    printf("Inicializando a fila com 5 peças...\n");
    for(i=0;i<TAMANHO_FILA;i++){
        printf("Digite o tipo da peça %d:",i+1);
        scanf("%[^\n]",fila[i].tipo);
    }
    quantidade=TAMANHO_FILA;
    fim=0;
    exibirFila();

    do{
        printf("\n---Menu---\n");
        printf("1. Jogar peça(remover da frente)\n");
        printf("2. Inserir nova peça\n");
        printf("3. Sair\n");
        printf("Escolha uma opção:");
        scanf("%d",&opcao);

        switch (opcao){
            case 1:
            jogarPeca();
            break;
        case 2:
            inserirPeca();
            break;
        case 3:
            printf("Encerrando o jogo...\n");
            break;
        
        default:
            printf("Opção inválida\n");
            break;
        }
    } while (opcao!=0);
    return 0;
    
}


// Desafio Tetris Stack
// Tema 3 - Integração de Fila e Pilha
// Este código inicial serve como base para o desenvolvimento do sistema de controle de peças.
// Use as instruções de cada nível para desenvolver o desafio.

int main() {

    // 🧩 Nível Novato: Fila de Peças Futuras
    //
    // - Crie uma struct Peca com os campos: tipo (char) e id (int).
    // - Implemente uma fila circular com capacidade para 5 peças.
    // - Crie funções como inicializarFila(), enqueue(), dequeue(), filaCheia(), filaVazia().
    // - Cada peça deve ser gerada automaticamente com um tipo aleatório e id sequencial.
    // - Exiba a fila após cada ação com uma função mostrarFila().
    // - Use um menu com opções como:
    //      1 - Jogar peça (remover da frente)
    //      0 - Sair
    // - A cada remoção, insira uma nova peça ao final da fila.



    // 🧠 Nível Aventureiro: Adição da Pilha de Reserva
    //
    // - Implemente uma pilha linear com capacidade para 3 peças.
    // - Crie funções como inicializarPilha(), push(), pop(), pilhaCheia(), pilhaVazia().
    // - Permita enviar uma peça da fila para a pilha (reserva).
    // - Crie um menu com opção:
    //      2 - Enviar peça da fila para a reserva (pilha)
    //      3 - Usar peça da reserva (remover do topo da pilha)
    // - Exiba a pilha junto com a fila após cada ação com mostrarPilha().
    // - Mantenha a fila sempre com 5 peças (repondo com gerarPeca()).


    // 🔄 Nível Mestre: Integração Estratégica entre Fila e Pilha
    //
    // - Implemente interações avançadas entre as estruturas:
    //      4 - Trocar a peça da frente da fila com o topo da pilha
    //      5 - Trocar os 3 primeiros da fila com as 3 peças da pilha
    // - Para a opção 4:
    //      Verifique se a fila não está vazia e a pilha tem ao menos 1 peça.
    //      Troque os elementos diretamente nos arrays.
    // - Para a opção 5:
    //      Verifique se a pilha tem exatamente 3 peças e a fila ao menos 3.
    //      Use a lógica de índice circular para acessar os primeiros da fila.
    // - Sempre valide as condições antes da troca e informe mensagens claras ao usuário.
    // - Use funções auxiliares, se quiser, para modularizar a lógica de troca.
    // - O menu deve ficar assim:
    //      4 - Trocar peça da frente com topo da pilha
    //      5 - Trocar 3 primeiros da fila com os 3 da pilha





