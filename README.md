#!/bin/bash

# =========================
# 📘 Guia Básico de Git (Bash)
# =========================

echo "📂 Navegação entre pastas"
cd projetos      # entrar na pasta
cd ..            # voltar uma pasta
cd /             # ir para raiz

echo "⚙️ Configuração do Git (primeira vez)"
git config --global user.name "Seu Nome"
git config --global user.email "seu@email.com"
git config --list

echo "🔍 Ver status do projeto"
git status

echo "➕ Adicionar arquivos"
git add index.html   # adicionar arquivo específico
git add .            # adicionar tudo

echo "💾 Commit (salvar alterações)"
git commit -m "minha alteração"

echo "🔄 Atualizar repositório local"
git pull

echo "🚀 Enviar para o repositório remoto"
git push

echo "✅ Fluxo completo"
cd projeto
git status
git add .
git commit -m "minha alteração"
git pull
git push

echo "🎉 Fim do script"
