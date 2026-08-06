# template-projeto-eletronica
Modelo de repositório que será usados para os estudos do IUB.

"Este projeto começou com um protótipo simples no Tinkercad, foi validado no LTspice para análise de sinal, teve sua placa de circuito impresso desenhada no KiCad e o firmware final foi escrito em Linguagem C."

"Neste projeto da Lição X do IUB, primeiro montei o circuito virtual no Tinkercad para entender as conexões. Depois, evoluí o projeto criando a programação oficial do Arduino para controlar os componentes."

# 🚀 Nível-Número: Nome do Projeto (Ex: basico-01-pisca-pisca)

Breve descrição do projeto em uma ou duas frases. (Ex: Este projeto foi desenvolvido como parte do curso de Eletrônica do Instituto Universal Brasileiro (IUB). Ele consiste em um circuito temporizador utilizando o famoso CI 555 para piscar um LED em uma frequência controlada.)

A melhor estratégia é usar uma nomenclatura padronizada combinando o nível, a numeração sequencial e o nome do projeto.
Evite usar apenas números (como projeto-01), pois você não lembrará o que tem lá dentro sem abrir. Também evite acentos, espaços ou letras maiúsculas, pois o GitHub transforma tudo em traços minúsculos.
------------------------------
## 🏷️ Modelo de Nome Recomendado
O padrão ideal é: nivel-numero-nome-do-projeto
## 🟩 Fase 1: Projetos Iniciais (Tinkercad / Eletrônica Básica)
Use o prefixo basico-.

* basico-01-pisca-pisca-led
* basico-02-semaforo-simples
* basico-03-sensor-luz-ldr

## 🟨 Fase 2: Projetos Intermediários (Arduino / Sensores / Motores)
Use o prefixo inter- ou int-.

* inter-01-controle-servo-potenciometro
* inter-02-termometro-lcd-lm35
* inter-03-carrinho-botoes-motores

## 🟥 Fase 3: Projetos Avançados (IoT / Layouts de Placa PCI / KiCad)
Use o prefixo avancado- ou avc-.

* avancado-01-estacao-clima-wifi-esp32
* avancado-02-placa-driver-motores-kicad
* avancado-03-automacao-mqtt-proteus

------------------------------
## 🎯 Por que essa ordem funciona perfeitamente?

   1. Ordenação Alfabética automática: No seu perfil do GitHub, os repositórios podem ser listados de A a Z. Com essa nomenclatura, todos os projetos básicos ficarão juntos e em ordem numérica (basico-01, basico-02), seguidos pelos intermediários e avançados.
   2. Clareza Imediata: Quem olhar o seu perfil (ou você mesmo no futuro) vai entender o seu nível de maturidade técnica em cada etapa apenas batendo o olho no nome.
   3. Flexibilidade: Se você criar um projeto básico novo daqui a seis meses para testar um componente novo, basta nomeá-lo como basico-04-nome-do-componente, mantendo a lógica da sua biblioteca de estudos.

Qual vai ser o tema do seu primeiro circuito do Tinkercad para inaugurarmos o repositório basico-01?



---

## 📈 Status de Evolução do Projeto
Marque o progresso à medida que avança no desenvolvimento deste circuito:
- [ ] ☁️ **Fase 1:** Simulação inicial concluída no Tinkercad.
- [ ] 💻 **Fase 2:** Simulação avançada validada (Proteus/LTspice/Falstad).
- [ ] 🤖 **Fase 3:** Programação e Firmware escritos (Arduino/C/Assembly/Python).
- [ ] 📐 **Fase 4:** Diagrama esquemático e layout de placa PCI desenhados (KiCad/EasyEDA).
- [ ] 🛠️ **Fase 5:** Montagem física na bancada e testes de sinal concluídos.

---

## 📂 Estrutura de Arquivos deste Repositório

*   **`📁 01-tinkercad/`**: Contém o link de acesso público e capturas de tela do protótipo virtual.
*   **`📁 02-simulacao/`**: Arquivos de análise de circuito (.pdsprj do Proteus, .asc do LTspice ou circuitos do Falstad).
*   **`📁 03-diagramas-pci/`**: Arquivos de desenvolvimento de Hardware (esquemáticos e placas de circuito impresso).
*   **`📁 04-firmware/`**: Código-fonte de controle do microcontrolador (códigos .ino, .c, .asm, .py).
*   **`📁 05-midia-e-dados/`**: Fotos do projeto real funcionando, gráficos gerados por osciloscópio e lista de materiais (BOM).

## 📂 Estrutura Básica (Para cada repositório)
```text
📂 basico-01-nome-da-licao/
├── 📂 01-tinkercad/       --> Aqui fica a fase virtual
│   ├── 📄 link.txt        --> Bloco de notas com o link do seu Tinkercad
│   └── 📄 circuito.png    --> Um print da tela do seu circuito virtual
├── 📂 02-arduino/          --> Aqui fica a fase real / programação
│   └── 📂 codigo_arduino/ --> Pasta com o arquivo .ino da IDE do Arduino
└── 📄 README.md           --> Onde você vai contar como foi fazer esse projeto
```
## 📂 Estrutura Completa e Avançada (Para cada repositório)
```text
📂 basico-01-nome-do-projeto/
├── 📂 01-tinkercad/         --> Fase inicial (Nuvem)
│   ├── 📄 link.txt          --> Link público do circuito no Tinkercad
│   └── 📄 print_circuito.png
│
├── 📂 02-simulacao/         --> Softwares de simulação em PC
│   ├── 📁 proteus/          --> Arquivos .pdsprj (Proteus)
│   ├── 📁 ltspice/          --> Arquivos .asc (LTspice)
│   └── 📁 falstad/          --> Arquivos .txt exportados do Falstad
│
├── 📂 03-diagramas-pci/     --> Engenharia de Hardware e Placas
│   ├── 📁 kicad/            --> Arquivos brutos do projeto KiCad (.kicad_sch, .kicad_pcb)
│   ├── 📁 easyeda/          --> Arquivos exportados do EasyEDA
│   └── 📁 pdf-export/       --> Diagrama esquemático em PDF (para visualização rápida)
│
├── 📂 04-firmware/          --> Códigos e Programação
│   ├── 📁 arduino/          --> Pasta com o arquivo .ino para Arduino IDE
│   ├── 📁 c-cpp/            --> Códigos puros em C ou C++ (Atmel Studio, MPLAB, etc.)
│   ├── 📁 assembly/         --> Arquivos .asm para microcontroladores raiz (PIC/8051)
│   └── 📁 python/           --> Scripts em MicroPython ou CircuitPython
│
├── 📂 05-midia-e-dados/     --> Comprovação e Resultados
│   ├── 📁 osciloscopio/     --> Prints de formas de onda e gráficos de resposta
│   ├── 📁 fotos-reais/      --> Fotos e vídeos do circuito montado na bancada física
│   └── 📄 lista_componentes.csv -> Arquivo BOM (Lista de Materiais e Preços)
│
└── 📄 README.md             --> O grande resumo do seu projeto
```

---

## 🛠️ Tecnologias e Softwares Utilizados

*   **Simulação:** [Tinkercad](https://tinkercad.com) / [LTspice] / [Proteus] / [Falstad] *(delete os que não usar)*
*   **Design de Hardware (EDA):** [KiCad] / [EasyEDA]
*   **Programação:** [Arduino IDE] / [MPLAB X] / [VS Code]
*   **Linguagens:** C++ (Arduino) / C / Assembly / Python

---

## 📝 Descrição Detalhada por Fase

### ☁️ 1. Protótipo Virtual (Tinkercad)
*   **Link do Projeto:** [Clique aqui para acessar o circuito no Tinkercad](INSIRA_O_LINK_AQUI)
*   *Explicação:* Explique brevemente o que aprendeu nesta etapa virtual (Ex: Testei o comportamento do potenciômetro regulando a corrente que vai para o LED).

### 💻 2. Simulação Avançada
*   *Análise realizada:* (Ex: Usei o LTspice para verificar o tempo de carga e descarga do capacitor de 10uF e validar a frequência de oscilação).

### 📐 3. Engenharia de Hardware (PCI)
*   O arquivo esquemático completo em formato PDF pronto para visualização rápida está localizado na pasta `03-diagramas-pci/pdf-export/`.
*   *Detalhes da Placa:* (Ex: Placa de face simples desenvolvida no KiCad com trilhas de 0.8mm para facilitar a corrosão caseira).

### 🤖 4. Firmware e Lógica de Programação
*   O código principal está na pasta `04-firmware/`.
*   *Lógica utilizada:* (Ex: O código utiliza interrupções de timer para fazer a leitura do sensor a cada 500 milissegundos sem travar o processamento principal).

### 📊 5. Resultados e Testes (Mídia)
*(Adicione aqui os prints das ondas do osciloscópio ou fotos do circuito montado no IUB)*
Exemplo de imagem embutida:
![Forma de Onda do Osciloscópio](05-midia-e-dados/osciloscopio/print_onda.png)

---

## 📋 Lista de Componentes Principais (BOM)

| Quantidade | Componente | Descrição / Valor |
| :--- | :--- | :--- |
| 1 | Microcontrolador | Arduino Uno R3 ou ATmega328P |
| 1 | Circuito Integrado | NE555 |
| 2 | Resistor | 10kΩ - 1/4W |
| 1 | Capacitor Eletrolítico | 10µF - 25V |
| 1 | LED | Vermelho 5mm |

---

## 🎓 Sobre este Projeto
Este repositório serve como registro de aprendizado prático e evolução contínua em eletrônica analógica, digital e programação de sistemas embarcados. Desenvolvido por [Seu Nome].

