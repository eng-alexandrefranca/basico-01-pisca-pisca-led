# 🚀 Projeto Básico de Pisca Pisca Led da IUB (basico-01-pisca-pisca-led)

Este projeto consiste na montagem e programação de um circuito oscilador simples para piscar um LED (Light Emitting Diode). Desenvolvido como a primeira lição prática do curso de Eletrônica do Instituto Universal Brasileiro (IUB) para compreender os conceitos de temporização, resistores de limitação de corrente e portas digitais.

---

## 📈 Status de Evolução do Projeto
- [x] ☁️ **Fase 1:** Simulação inicial concluída no Tinkercad.
- [x] 🤖 **Fase 2:** Programação e Firmware escritos na IDE do Arduino.
- [ ] 💻 **Fase 3:** Simulação avançada validada (Proteus/LTspice/Falstad).
- [ ] 📐 **Fase 4:** Diagrama esquemático e layout de placa PCI desenhados (KiCad/EasyEDA).
- [ ] 🛠️ **Fase 5:** Montagem física na bancada e testes com componentes reais.

---

## 📂 Estrutura de Arquivos deste Repositório

```text
📂 basico-01-pisca-pisca-led/
├── 📂 01-tinkercad/
│   ├── 📄 link.txt
│   └── 📄 print_circuito.png
├── 📂 02-simulacao/
├── 📂 03-diagramas-pci/
├── 📂 04-firmware/
│   └── 📁 arduino/
├── 📂 05-midia-e-dados/
└── 📄 README.md
```

---

## 🛠️ Tecnologias e Softwares Utilizados

*   **Simulação Virtual:** [Tinkercad](https://tinkercad.com)
*   **Ambiente de Programação:** [Arduino IDE](https://arduino.cc)
*   **Linguagem:** C++ (Wiring do Arduino)

---

## 📝 Descrição Detalhada por Fase

### ☁️ 1. Protótipo Virtual (Tinkercad)
*   **Link do Projeto:** [Clique aqui para acessar meu circuito no Tinkercad](INSIRA_O_LINK_DO_SEU_TINKERCAD_AQUI)
*   *O que foi feito:* O circuito foi montado virtualmente utilizando uma placa Arduino Uno, um LED e um resistor. O objetivo desta etapa foi validar a pinagem e garantir que o resistor calculado estivesse protegendo o LED contra queima por sobrecorrente.

### 🤖 2. Firmware e Lógica de Programação (Arduino)
*   O código-fonte principal `.ino` está localizado dentro da pasta `04-firmware/arduino/`.
*   *Lógica utilizada:* O programa configura o pino digital (ex: Pino 13) como saída (`OUTPUT`). Dentro do laço principal (`loop`), a porta é colocada em nível lógico alto (`HIGH`) por 1000 milissegundos e, em seguida, em nível lógico baixo (`LOW`) por mais 1000 milissegundos, criando o efeito de pisca-pisca contínuo.

---

## 📋 Lista de Componentes Principais (BOM)

| Quantidade | Componente | Descrição / Valor |
| :--- | :--- | :--- |
| 1 | Placa de Desenvolvimento | Compatível com Arduino Uno R3 |
| 1 | Resistor | 220Ω ou 330Ω (Limitador de corrente) |
| 1 | LED | Vermelho de 5mm |
| - | Jumpers | Cabos de conexão |

---

## 🎓 Sobre este Projeto
Este repositório registra o meu passo inicial na eletrônica prática e programação de sistemas embarcados pelo IUB. 
Desenvolvido com dedicação por **Alexandre França**.


