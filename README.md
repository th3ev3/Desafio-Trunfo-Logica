Comparador de Cartas - Atributos de Países (Linguagem C)
Este projeto é um jogo em linguagem C onde o jogador escolhe dois atributos diferentes para comparar cartas de países. A carta vencedora é determinada com base nas comparações dos atributos e na soma total dos valores.

Requisitos Funcionais Implementados
Escolha de dois atributos por meio de menus interativos.

O sistema impede que o mesmo atributo seja selecionado duas vezes.

Comparação por múltiplos atributos:

Regra geral: vence a carta com o maior valor.

Exceção: no atributo Densidade Demográfica, vence o menor valor.

Soma dos dois atributos escolhidos:

A carta com a maior soma vence a rodada.

Tratamento de empates:

Se a soma dos atributos for igual nas duas cartas, é exibida a mensagem "Empate!".

Menus dinâmicos com estrutura switch:

Após a seleção do primeiro atributo, ele é removido das opções do segundo menu.

Exibição clara do resultado:

Nome dos dois países comparados.

Atributos escolhidos.

Valores de cada atributo para cada país.

Soma dos dois atributos para cada país.

Resultado final indicando a carta vencedora ou se houve empate.

Como Compilar e Executar
Requisitos
Compilador C (como GCC)

Terminal ou uma IDE que suporte C (Code::Blocks, Dev-C++, VSCode, etc.)

Compilação no terminal
bash
Copiar
Editar
gcc -o comparador cartas.c
./comparador
Substitua cartas.c pelo nome do seu arquivo principal, se necessário.

Exemplo de Execução
O jogador escolhe o primeiro atributo:

Copiar
Editar
1 - População
2 - Área
3 - Densidade Demográfica
4 - PIB
O atributo escolhido é removido do segundo menu.

O sistema realiza as comparações com base nas regras e exibe o resultado com todos os dados relevantes.

Atributos Disponíveis
População

Área

Densidade Demográfica (vence o menor valor)

PIB

Requisitos Não Funcionais Atendidos
Usabilidade: Interface simples com instruções claras.

Performance: Processamento e resposta rápida das comparações.

Manutenibilidade: Código organizado, com indentação adequada, comentários e nomes de variáveis descritivos.

Confiabilidade: Entrada inválida é tratada com mensagens de erro apropriadas, utilizando a opção default no switch.

Estrutura do Projeto
bash
Copiar
Editar
comparador-cartas/
│
├── cartas.c        # Código-fonte do projeto
├── README.md       # Arquivo de documentação
