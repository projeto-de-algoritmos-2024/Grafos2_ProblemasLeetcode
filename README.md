# PROBLEMAS LEETCODE

**Número da Lista**: 18<br>
**Conteúdo da Disciplina**: Grafos 2<br>
## Alunos
| Matrícula  | Aluno                    |
| ---------- | ------------------------ |
| 22/2006169 | Natan da Cruz Almeida    |
| 22/1022408 | Paulo Henrique Lamounier |

## Sobre 
Este projeto consta com 4 desafios resolvidos do Leetcode, sendo eles:

- **(Q1) 1514. Path with Maximum Probability:** Dado um grafo não direcionado ponderado, onde cada aresta tem uma probabilidade de sucesso associada, encontre o caminho com a maior probabilidade de sucesso de um nó inicial (`start`) para um nó final (`end`). Retorne essa probabilidade ou 0 caso não exista um caminho viável. [link](https://leetcode.com/problems/path-with-maximum-probability/description/)
- **(Q2) 2290. Minimum Obstacle Removal to Reach Corner:** Dada uma grade 2D onde:
	- 00: célula vazia
	- 11: obstáculo

	Determine o número mínimo de obstáculos a serem removidos para mover do canto superior esquerdo (0,0)(0,0) para o canto inferior direito (m−1,n−1)(m−1,n−1), utilizando apenas movimentos válidos (cima, baixo, esquerda, direita). [link](https://leetcode.com/problems/minimum-obstacle-removal-to-reach-corner/description/?envType=daily-question&envId=2024-11-28)



## Vídeos
* **Solução Q1:** [link](https://youtu.be/GMKOA1RZh1M)
* **Solução Q2:** [link](https://youtu.be/J24wFlqYk_U)
* **Solução Q3:** [link]()
* **Solução Q4:** [link]()
  
## Instalação 

**Linguagem**: C++<br>
**Framework**: Não possui frameworks<br>
Para utilizar e testar os programas, primeiro é necessário ter um compilador de c/c++ instalado em sua máquina, caso não tenha, utilize esse fórum para baixar

> [acesse-aqui](https://www.geeksforgeeks.org/installing-mingw-tools-for-c-c-and-changing-environment-variable/)

Após instalar o compilador em sua máquina, clone o repositório utilizando

``` bash
git clone <link do repisotório>
```

## Uso 
Após clonar o repositório, entre na pasta via terminal e compile os códigos utilizando

``` bash
g++ -Wall -o <nome_arquivo_compilado> <arquivo_para_compilar>
```

ex: 

``` bash
g++ -Wall -o main Q1.cpp
```

Um arquivo executável (.exe) será criado, para realizar os testes, utilize

```bash
./main
```

Dessa forma será possível utilizar os casos de teste dos programas. Também é possível colocar os casos de teste em algum arquivo de texto e utilizar o comando cat para testá-los

``` bash
cat <arquivo.txt> | ./main
```
