typedef struct ponto Ponto;

Ponto* cria (float x, float y);

void limpa (Ponto* p);

void acessa (Ponto* p, float* x, float* y);

void atribui (Ponto* p, float x, float y);

float distancia_entre_pontos (Ponto* p1, Ponto* p2);