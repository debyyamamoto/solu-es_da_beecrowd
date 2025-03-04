import os

def contar_arquivos(diretorio_base):
    tabela = "| Categoria | Quantidade de Arquivos |\n"
    tabela += "|---------| --------------------|\n"
    
    diretorio_problemas = os.path.join(diretorio_base, "problemas")

    for raiz, dirs, arquivos in os.walk(diretorio_problemas):
        relacao_pasta = os.path.relpath(raiz, diretorio_problemas)
        if relacao_pasta == '.':
            continue
        quantidade_arquivos = len(arquivos)
        tabela += f"| {relacao_pasta} | {quantidade_arquivos} |\n"
    return tabela

def gerar_readme(diretorio_base, caminho_readme = "README.md"):
    tabela = contar_arquivos(diretorio_base)

    with open(caminho_readme, "w") as arquivo:
        arquivo.write("# Reunião de exercícios e materiais teóricos de exercícios do BeeCrowd\n")
        arquivo.write("Apenas um lugar para reunir os exercícios que eu for fazendo :)\n")
        arquivo.write("# Quantos exercícios foram documentados de cada categoria?\n")
        arquivo.write(tabela)

if __name__ == "__main__":
    diretorio_projeto = "."
    gerar_readme(diretorio_projeto)