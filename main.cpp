#include "Hash.cpp"
int main() {
    dataItem *d = (dataItem *)malloc(sizeof(dataItem));
    d->city.cidade = (char *)"Pau dos Ferros";
    d->city.id = 340940;
    d->city.estado = (char *)"RN";
    d->key = 340940;
    d->GPS.id = 340940;
    d->GPS.la = -6.11;
    d->GPS.lo = -38.2;

    int res = multiplicacao(d);
    hash H;
    init(H);

    inserir(H, d, divisao);

    // Não faz sentido mudar a função Hash, mas coloquei aqui para mostrar que é possível
    inserir(H, d, multiplicacao);
    remover(H, d, multiplicacao);
    inserir(H, d, multiplicacao);
    dataItem* dt = buscar(H, 340940, multiplicacao);
}