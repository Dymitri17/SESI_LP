 O que é Git Bash / Terminal?
Terminal: lugar onde você digita comandos
Git Bash: terminal no Windows que permite usar comandos estilo Linux + Git
 Você controla arquivos e projetos só com texto (comandos)

 Comando básico de navegação
cd nome_pasta → entra na pasta
cd .. → volta
cd / → vai para raiz
 Exemplo:

cd projetos
 Configuração do Git (primeira vez)
Definir nome
git config --global user.name "Seu Nome"
Definir email
git config --global user.email "seu@email.com"
Ver configurações
git config --list
 --global = vale para todos os projetos

 Ver status do projeto
git status
 Mostra:

arquivos modificados
arquivos novos
o que vai ser enviado
 Adicionar arquivos
git add nome_arquivo
 Exemplo:

git add index.html
Adicionar tudo:

git add .
 Salvar (commit)
git commit -m "mensagem"
 É como tirar uma “foto” do projeto

 Enviar (push)
git push
 Envia seus commits para o servidor (ex: GitHub)

Baixar (pull)
git pull
 Baixa atualizações do repositório remoto

Fluxo completo 
cd projeto
git status
git add .
git commit -m "minha alteração"
git pull
git push
Resumo 
cd → navegar
git status → ver situação
git add → preparar
git commit → salvar
git push → enviar
git pull → atualizar
