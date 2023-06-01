#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num_pedido;
    int tempo_pronto;
    int tempo_confeccao;
    int lucro;
} Pedido;

int cmp(const void* a, const void* b) {
    Pedido* p1 = (Pedido*)a;
    Pedido* p2 = (Pedido*)b;
    return p1->tempo_pronto - p2->tempo_pronto;
}

int main() {
    int n;
    scanf("%d", &n);
    
    Pedido pedidos[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &pedidos[i].num_pedido, &pedidos[i].tempo_pronto, &pedidos[i].tempo_confeccao, &pedidos[i].lucro);
    }
    
    qsort(pedidos, n, sizeof(Pedido), cmp);
    
    int tempo_atual = 0;
    int lucro_total = 0;
    for (int i = 0; i < n; i++) {
        if (pedidos[i].tempo_pronto >= tempo_atual + pedidos[i].tempo_confeccao) {
            tempo_atual += pedidos[i].tempo_confeccao;
            lucro_total += pedidos[i].lucro;
        }
    }
    
    printf("%d\n", lucro_total);
    return 0;
}
