
# 📘 **GCC for RISC-V Architecture**

*A layman-friendly introduction to computer architecture and instruction set design*

---

### 🧠 What Is Architecture in Computing?

In computer science, **architecture** is like the **master blueprint** of how a computer works.

It answers questions like:

* What parts does the computer have?
* How do those parts talk to each other?
* How does it follow instructions?

> **Definition:**
> **Computer Architecture** is the design and structure of a computer system — how hardware and software interact, how data flows, and how instructions are processed.

---

### 🏗️ Types of Architecture (With Simple Analogies)

| 🧱 Type                                | 📝 What It Describes                              | 💬 Analogy                                                  |
| -------------------------------------- | ------------------------------------------------- | ----------------------------------------------------------- |
| **Instruction Set Architecture (ISA)** | The language the CPU understands                  | Like English, Hindi, or French — each CPU speaks its own    |
| **Microarchitecture**                  | How the CPU physically follows instructions       | How two houses with the same layout use different materials |
| **System Architecture**                | How all computer parts (CPU, memory, I/O) connect | The neighborhood plan: roads, utilities, and services       |

---

### 🧩 Components of Computer Architecture

| 🔧 Component       | 📋 Description                                                  |
| ------------------ | --------------------------------------------------------------- |
| **CPU (ALU + CU)** | Executes commands like add, subtract, compare                   |
| **Memory**         | Stores programs and data temporarily or permanently             |
| **I/O Devices**    | Keyboard, mouse, screen — how users communicate with the system |
| **Buses**          | The internal highways that move data between parts              |

---

### 🧠 What is an ISA (Instruction Set Architecture)?

Imagine a chef (CPU) following recipes (instructions). But to follow a recipe, the chef needs to **understand the language** it’s written in.

> ISA is the **language** your computer's brain (CPU) understands — a list of all the basic actions it knows how to perform.

For example:

* “Add two numbers”
* “Move this image to memory”
* “Display video frame”

Different CPUs understand different ISAs — just like people may speak English, Hindi, or French.

---

### 🍳 What Is an Instruction Set?

Let’s go deeper into the core of ISA — the **Instruction Set** itself.

---

### 👨‍🍳 Chef Analogy Continued

* **Chef** = The CPU
* **Recipe Book** = The program you want the chef to follow
* **Each Step in the Recipe** = An **instruction**

But here's the catch:
The chef can only follow instructions **they’ve been trained to understand** — such as:

* "Boil water"
* "Chop onions"
* "Add salt"
* "Serve on plate"

> 💡 These steps are what we call the **Instruction Set**.

If you write: "Cook like grandma" — the chef gets confused. That command isn't in the set of steps they know!

---

### 📋 So, Technically…

> An **Instruction Set** is the complete list of **basic commands** that a CPU can execute — like load, add, store, jump, etc.

Every CPU comes with a **fixed set** of instructions it understands, and every program written for that CPU must use only those.

---

### 🔄 Instruction Set vs ISA

| 🧩 Term                                | 📘 Meaning                                                                       |
| -------------------------------------- | -------------------------------------------------------------------------------- |
| **Instruction Set**                    | The actual commands the CPU can execute (like "add", "move", "jump")             |
| **Instruction Set Architecture (ISA)** | The full set of rules: instruction set + how they’re encoded, accessed, and used |

> Think of **Instruction Set** as the **vocabulary**, and **ISA** as the **grammar + usage rules** for building correct sentences.

---

### 🧠 Simple Example (in CPU terms):

* `LOAD A, 5` → Load number 5 into register A
* `ADD A, B` → Add the contents of A and B
* `STORE A, 1000` → Save result into memory at address 1000
* `JUMP 200` → Move to instruction at line 200

These are part of an instruction set that a RISC-V or x86 processor would understand.

---

### 🔤 Examples of ISA and What Uses Them

| 🖥️ CPU Type          | 🧠 ISA It Understands | 📱 Found In                       |
| --------------------- | --------------------- | --------------------------------- |
| Intel / AMD           | x86 / x86-64          | Laptops, desktops                 |
| Apple M1/M2, Qualcomm | ARM                   | iPhones, Android, MacBooks        |
| Custom, Educational   | RISC-V                | Smartwatches, IoT, academic chips |

---

## 🧠 Understanding RISC-V

### 📦 What Is RISC-V?

> RISC-V is a **free, open-source ISA** — a language your CPU can understand — but no one owns it.

Think of it this way:

* **x86** = English — powerful, but copyrighted
* **ARM** = French — smooth, but needs permission
* **RISC-V** = Hindi — free, open to everyone

#### ✅ Why RISC-V Matters

* Anyone (student, startup, or country) can **build their own CPU** using RISC-V
* It’s **simple and modern**, unlike older, bulky ISAs
* It enables **freedom** from licensing restrictions (no need to pay Intel or ARM)

#### 📍 Real-Life Examples

* A **laptop** might use x86 (Intel i7)
* A **smartphone** uses ARM (Snapdragon, Apple M2)
* A **smartwatch, drone, or research chip** might use RISC-V

---

### 🧠 **Processor vs RISC-V: What's the Difference?**

#### 🔧 1. **Processor** (or CPU)

> The **processor** is the actual **physical chip** inside your laptop, phone, or smartwatch — it’s the hardware that **runs your apps, games, and operating system**.

Think of the processor as:

* 🧑‍🍳 A chef in a kitchen
* 🧠 It performs operations like adding numbers, loading memory, and running programs

Examples of processors:

* Intel Core i7 (x86-based)
* Apple M2 (ARM-based)
* SiFive U740 (RISC-V-based)

---

#### 🧩 2. **RISC-V**

> RISC-V is **not** a processor. It’s an **Instruction Set Architecture (ISA)** — a **set of rules** that tells processors how to understand and execute instructions.

Think of RISC-V as:

* 📘 A cookbook the chef follows
* 🗣️ The **language** or **grammar** a processor must speak

Examples of ISAs:

* x86 (used in Intel/AMD chips)
* ARM (used in phones)
* RISC-V (used in modern, open chips)

---

#### 🔁 Putting It Together

| 🧱 Aspect         | 🧠 Processor                        | 🔤 RISC-V                              |
| ----------------- | ----------------------------------- | -------------------------------------- |
| What it is        | A **physical chip** (hardware)      | A **design standard** (set of rules)   |
| Example           | Intel Core i7, Apple M1, SiFive U74 | RISC-V, x86, ARM                       |
| Can you touch it? | ✅ Yes — it’s a real component       | ❌ No — it’s a **concept** or blueprint |
| Who uses it?      | Devices, laptops, phones            | Chip makers/designers                  |

---

#### 🧪 Real-World Example

Let’s say you have a processor made by **SiFive**:

* It’s a **RISC-V-based processor**
* The chip itself is real (hardware)
* It **follows the rules** of the RISC-V instruction set

So RISC-V is the **design**, and the processor is the **product built from it**.

---

#### 🧠 Analogy (Chef Style)

* **Processor** = The actual chef cooking in your kitchen
* **RISC-V** = The list of cooking techniques the chef is trained to follow

The same way chefs can be trained in different styles (Indian, Chinese, Italian), processors can be built on different ISAs (RISC-V, ARM, x86).

---

### 🔧 GCC and Architecture: How Compilation Differs by CPU Type

The **GCC (GNU Compiler Collection)** is a powerful tool that converts human-written code (like C, C++, or Rust) into machine-level instructions that a computer's processor can understand. But here's the catch: **every type of processor "speaks" a different language**, depending on its architecture.

This means that when GCC compiles code, it must **know which architecture it is targeting** — whether it's x86 (Intel/AMD), ARM (used in phones), or RISC-V (used in open, custom systems). It then generates the correct set of instructions for that CPU.

---

#### 🛠️ How GCC Adapts to Different Architectures

When you run GCC, it uses what's called a **target triple** (like `riscv64-unknown-linux-gnu` or `x86_64-linux-gnu`) to decide:

* **What instruction set** to use (x86, ARM, RISC-V, etc.)
* **What system rules** apply (file formats, memory layout, calling conventions)
* **What optimizations** are relevant (like which CPU features are available)

---

#### 🧠 Example:

If you compile the same C program with GCC for different architectures:

```c
int main() {
    return 42;
}
```

* On **x86**, GCC will turn it into **x86 machine instructions**.
* On **ARM**, it produces ARM-specific code.
* On **RISC-V**, it outputs RISC-V machine code.

The source code doesn’t change — but the **compiled output is different** for each CPU type.

---

## 🧰 Understanding GCC and Building It for RISC-V

### 🧠 What is GCC?

**GCC**, short for **GNU Compiler Collection**, is a tool that turns human-readable programming languages like **C, C++, and Fortran** into machine-level instructions that a processor can understand.

Think of GCC like a **translator**:

* You write a recipe in English (C code)
* The CPU only understands Japanese (machine code)
* GCC translates that English recipe into Japanese so the CPU can cook it!

GCC is widely used because it:

* Supports many programming languages
* Works with many hardware types (x86, ARM, RISC-V)
* Is open source and actively maintained

---

### 🌍 What is a Cross-Compiler?

When you compile a C program on your computer, it normally produces a file that works **only on your computer’s architecture** (for example, x86 if you have an Intel or AMD CPU).

But what if you want to write and compile a C program **on your laptop**, but **run it on a completely different kind of CPU**, like a RISC-V chip?

That’s where a **cross-compiler** comes in.

> A **cross-compiler** is a special version of GCC that runs on one type of system (like your laptop) but produces programs for a different system (like a RISC-V board).

| 👨‍💻 Host Machine | 🎯 Target Architecture | 🧰 Tool Type         |
| ------------------ | ---------------------- | -------------------- |
| x86 Linux          | RISC-V                 | Cross-Compiler (GCC) |

So, if you build a **RISC-V cross-compiler**, you can write code on your laptop and **generate programs that run on RISC-V systems** — without needing RISC-V hardware upfront.

---

## ⚙️ How to Build GCC as a RISC-V Cross-Compiler

Here’s how to build your own cross-compiler step-by-step:

### ✅ Step 1: Install Required Tools

Open a terminal and run:

```bash
sudo apt update
sudo apt install -y autoconf automake autotools-dev curl libmpc-dev \
libmpfr-dev libgmp-dev gawk build-essential bison flex texinfo \
gperf libtool patchutils bc zlib1g-dev libexpat-dev
```

These tools help GCC and related programs build correctly.

---

### 📁 Step 2: Set Up a Working Directory

```bash
mkdir -p $HOME/riscv-compiler
cd $HOME/riscv-compiler
```

This is where all the source code and compiled tools will live.

---

### 📥 Step 3: Download the RISC-V Toolchain Source

```bash
git clone https://github.com/riscv/riscv-gnu-toolchain
cd riscv-gnu-toolchain
```

This repository contains the source code for:

* GCC
* Binutils (assemblers and linkers)
* Newlib (C library for bare-metal systems)

---

### 🧰 Step 4: Configure the Toolchain

#### For Bare-Metal (no OS):

```bash
./configure --prefix=$HOME/riscv --with-arch=rv64gc --with-abi=lp64
make newlib
```

#### For Linux RISC-V Systems:

```bash
./configure --prefix=$HOME/riscv
make linux
```

> 💡 This will take 30–90 minutes depending on your system’s speed.

---

### 🛣️ Step 5: Add the Compiler to Your PATH

```bash
export PATH=$HOME/riscv/bin:$PATH
```

Add it permanently by putting the above line in your `.bashrc` or `.zshrc`.

---

### 🧪 Step 6: Test It!

Write a simple program:

```c
// hello.c
#include <stdio.h>
int main() {
    printf("Hello RISC-V!\n");
    return 0;
}
```

Compile using your cross-compiler:

```bash
riscv64-unknown-elf-gcc hello.c -o hello
```

This creates a binary in **RISC-V machine language** — ready to run on a RISC-V board or emulator.

---

## 🧭 Setting Up Environment: Making the Compiler Globally Available

> After compiling the RISC-V GCC toolchain, the system does not automatically recognize it as a command unless it's added to the shell’s environment `PATH`. This step ensures you can run `riscv64-unknown-elf-gcc` from anywhere on your system.

### 🔧 Temporary PATH Setup (for current session)

```bash
export PATH=$HOME/riscv/bin:$PATH
```

Use this if you only want to run the compiler in your current terminal window.

---

### 🔁 Permanent PATH Setup (for all sessions)

To make the compiler available globally (recommended):

#### For Bash users:

```bash
echo 'export PATH=$HOME/riscv/bin:$PATH' >> ~/.bashrc
source ~/.bashrc
```

#### For Zsh users:

```bash
echo 'export PATH=$HOME/riscv/bin:$PATH' >> ~/.zshrc
source ~/.zshrc
```

---

## 🧪 Verifying the Compiler

Once the path is set correctly, verify your compiler by checking its version:

```bash
riscv64-unknown-elf-gcc --version
```

You should see output like:

```
riscv64-unknown-elf-gcc (GCC) 13.2.0 ...
```

This confirms everything is set up properly.

---

## ✅ Final Test Program: Hello from RISC-V

Here’s a basic test to ensure that the compiler is producing working binaries:

```c
// hello.c
#include <stdio.h>

int main() {
    printf("Hello from RISC-V!\n");
    return 0;
}
```

Compile it:

```bash
riscv64-unknown-elf-gcc hello.c -o hello
```

Inspect the binary:

```bash
file hello
```

Expected output:

```
hello: ELF 64-bit LSB executable, UCB RISC-V ...
```

---