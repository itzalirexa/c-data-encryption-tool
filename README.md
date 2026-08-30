# Layered Data Encryption & Framing System in C

A lightweight, modular C application that implements multi-layer data processing by combining payload encryption with message framing (wrapping/unwrapping). Designed for secure pipeline architectures and embedded data transmission.

---

## 🛠️ Tech Stack & Concepts

* **Language:** C (C99 standard)
* **Core Concepts:**
  * Modular Architecture & Separation of Concerns (Crypto vs Framing)
  * Dynamic String & Buffer Processing
  * Command-driven Pipeline Logic
  * Memory Management

---

## 🏗️ Architecture & Data Flow

The system processes input streams dynamically based on command flags[cite: 1]:

```text
Command 1 (Encrypt & Wrap):
Input Text ──► [encrypt()] ──► Encrypted Payload ──► [wrap()] ──► Framed Output[cite: 1]

Command 2 (Unwrap & Decrypt):
Framed Input ──► [unwrap()] ──► Raw Payload ──► [decrypt()] ──► Decrypted Text[cite: 1]
📁 Repository Structure
Plaintext
c-data-encryption-tool/
├── src/
│   ├── crypto/
│   │   ├── encrypt.c
│   │   ├── encrypt.h
│   │   ├── decrypt.c
│   │   └── decrypt.h
│   ├── framing/
│   │   ├── wrapper.c
│   │   └── wrapper.h
│   └── main.c[cite: 1]
├── Makefile
└── README.md
💻 Compilation & Execution
1. Using GCC (Windows Powershell / Command Line)
Compile all modules using GCC with path references:

PowerShell
gcc -o crypto_tool src\main.c src\crypto\encrypt.c src\crypto\decrypt.c src\framing\wrapper.c
Run the compiled executable:

PowerShell
.\crypto_tool
2. Execution Example
Input Format:

Line 1: Total number of operations (q).[cite: 1]

Line 2+: Command ID (1 for Encrypt+Wrap, 2 for Unwrap+Decrypt) followed by the input string[cite: 1].

Sample Run:

Plaintext
2
1 hello
dwinjgnnqdwin
2 dwinjgnnqdwin
hello
👤 Author: Alireza

🔗 GitHub: github.com/itzalirexa
