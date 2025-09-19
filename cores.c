#include <stdio.h>

// 🎨 Códigos ANSI como #define

// Reset
#define RESET   "\x1b[0m"

// Cores de texto
#define PRETO   "\x1b[30m"
#define VERMELHO "\x1b[31m"
#define VERDE   "\x1b[32m"
#define AMARELO "\x1b[33m"
#define AZUL    "\x1b[34m"
#define ROXO    "\x1b[35m"
#define CIANO   "\x1b[36m"
#define BRANCO  "\x1b[37m"

// Cores de fundo
#define FUNDO_PRETO   "\x1b[40m"
#define FUNDO_VERMELHO "\x1b[41m"
#define FUNDO_VERDE   "\x1b[42m"
#define FUNDO_AMARELO "\x1b[43m"
#define FUNDO_AZUL    "\x1b[44m"
#define FUNDO_ROXO    "\x1b[45m"
#define FUNDO_CIANO   "\x1b[46m"
#define FUNDO_BRANCO  "\x1b[47m"

// Estilos
#define NEGRITO     "\x1b[1m"
#define SUBLINHADO  "\x1b[4m"
#define INVERTIDO   "\x1b[7m"

int main() {
    printf(VERMELHO "Texto em vermelho" RESET "\n");
    printf(VERDE "Texto em verde" RESET "\n");
    printf(AZUL "Texto em azul" RESET "\n");
    printf(NEGRITO AMARELO "Amarelo em negrito" RESET "\n");
    printf(SUBLINHADO ROXO "Roxo sublinhado" RESET "\n");
    printf(INVERTIDO CIANO "Ciano invertido" RESET "\n");
    printf(FUNDO_VERMELHO BRANCO "Texto branco com fundo vermelho" RESET "\n");
    printf(NEGRITO "Negrito" RESET);

    return 0;
}
