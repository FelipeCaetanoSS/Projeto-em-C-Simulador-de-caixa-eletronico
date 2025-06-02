# Simulador de Caixa Eletrônico

## Descrição

Simulador de um caixa eletrônico (banco simplificado) desenvolvido para praticar lógica de programação. O usuário pode:

- Ver saldo
- Sacar dinheiro
- Depositar dinheiro
- Ver extrato (últimas transações)
- Sair do sistema

---

## Funcionalidades

- Verificar saldo disponível
- Realizar saques (com validação de saldo)
- Realizar depósitos (com validação de valor)
- Consultar extrato das últimas transações
- Sistema de menu interativo
- Encerrar o sistema de forma segura

---

## Tecnologias e Conceitos

- Estruturas condicionais (`if`, `else if`, `else`)
- Estrutura de seleção (`switch`) para navegação no menu
- Estruturas de repetição (`while` e `for`)
- Controle de variáveis como saldo, valores de saque, depósitos e histórico
- Validação de dados (ex.: impedir saques e depósitos com valores inválidos)

---

## Desafios Extras (Opcionais)

- Implementar senha de acesso antes de liberar o menu
- Criar múltiplas contas com login via ID simples
- Adicionar juros fictícios em depósitos
- Exibir data e hora (fixas ou simuladas) nas transações

---

## Desafios Técnicos

- Controle de limites de saque (não permitir sacar mais do que o saldo disponível)
- Validação de entradas (impedir valores negativos ou nulos)
- Manter o loop contínuo do menu até que o usuário opte por sair
- Simular extrato com histórico das últimas transações (exemplo: as 5 mais recentes)
- Organizar o código e utilizar o `switch` de forma clara e eficiente

---

## Objetivo

Criar um programa funcional que simula um caixa eletrônico, aplicando:

- Lógica condicional
- Estruturas de repetição
- Boas práticas de validação de dados
- Organização e clareza no código

Este projeto é indicado para quem está aprendendo lógica de programação e deseja praticar controle de fluxo, validações e construção de menus interativos no terminal.

---

## Licença

Este projeto é de livre uso para fins educacionais.
