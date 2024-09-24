#ifndef ATIVIDADEI_H

struct lista{
    int valor;
    struct lista* proximo;
};

typedef struct lista Lista;

Lista* novaLista();
Lista* adicionarInicio(Lista* lista, int valor);
void mostrar(Lista* lista);
int EhVazia(Lista* lista);
Lista* adicionarFinal(Lista* lista, int valor);



#endif