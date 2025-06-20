#include <iostream> // Necessário para entrada e saída de dados (cout, cin)
#include <iomanip>  // Necessário para formatar a saída com casas decimais (setprecision, fixed)


double calcularSomaHarmonica(int N) {
    // Se N for não positivo, a função não imprime nada e retorna 0.0.
    // O controle de impressão para N <= 0 será feito antes da chamada desta função no main.
    if (N <= 0) {
        return 0.0; // Retorna 0, mas a impressão será evitada no main
    }

    double soma = 0.0; // Variável para armazenar a soma, inicializada com 0.0

    // Loop para imprimir os termos no formato "1 + 1/2 + ..."
    for (int i = 1; i <= N; ++i) {
        if (i == 1) {
            std::cout << "1"; // O primeiro termo é apenas '1'
        } else {
            std::cout << " + 1/" << i; // Para os termos seguintes, adiciona " + 1/i"
        }
        soma += (1.0 / i); // Adiciona o termo à soma.
    }
    std::cout << std::endl; // Quebra de linha após imprimir todos os termos

    return soma; // Retorna o valor final da soma
}

// Função principal do programa
int main() {
    int valorN;

    // Lemos N apenas UMA VEZ.
    std::cin >> valorN;

    // A lógica crucial: imprimir APENAS se N for POSITIVO.
    if (valorN > 0) {
        // Chama a função calcularSomaHarmonica e armazena o resultado
        double resultadoSoma = calcularSomaHarmonica(valorN);

        // Imprime o valor final da soma S, formatado para 3 casas decimais
        std::cout << std::fixed << std::setprecision(3) << resultadoSoma << std::endl;
    }
    // Se valorN <= 0, o bloco 'if' é ignorado, e nada é impresso.
    // O programa simplesmente termina.

    return 0; // Indica que o programa terminou com sucesso
}