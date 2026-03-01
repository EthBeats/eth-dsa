# Eth-DSA

[![CI](https://github.com/EthBeats/eth-dsa/actions/workflows/ci.yml/badge.svg)](https://github.com/EthBeats/eth-dsa/actions)

## Data Structures and Algorithms Library

> An educational and optimized **Data Structures & Algorithms** library written fully in modern C++ – designed to be *well-documented* and *implementation-focused* to help students understand how core data structures and algorithms work under the hood.

### 🧑🏻‍💻 Goals
- Provide clean C++ implementations of classic data structures and algorithms
- Focus on clarity and correctness over micro-optimization
- Include documentation and complexity analysis on a dedicated GitHub Pages site
- Serve as a learning resource! *not a STL replacement*

### ℹ️ Overview
This project is intentionally designed from **scratch** as:

- A free learning resource
- A free teaching resource
- A long-term portfolio project

This is *not* a replacement of the C++ Standard Library. Instead, it aims to explain how data structures and algorithms like `std::vector` and `std::sort` work internally.

### 📆 Timeline
| Status | Task | Est. Completion Time | Goal Deadline |
| :----: | :--- | :------------------: | :-----------: |
| ❌ | Setup repo structure | 3 weeks | 2026-03-22 |


### 📂 Project Structure
```
eth-dsa/
│
├── CMakeLists.txt
├── README.md
├── LICENSE
├── .clang-format
├── .gitattributes
├── .gitignore
│
├── include/
│   └── eth/
│       └── dsa/
│           ├── containers/
│           │   ├── array_list.hpp
│           │   ├── matrix.hpp
│           │   ├── linked_list.hpp
│           │   ├── stack.hpp
│           │   ├── queue.hpp
│           │   ├── deque.hpp
│           │   └── pq.hpp
│           │
│           ├── trees/
│           │   ├── bst.hpp
│           │   ├── avl_tree.hpp
│           │   ├── redblack_tree.hpp
│           │   └── heap.hpp
│           │
│           ├── graphs/
│           │   ├── graph.hpp
│           │
│           ├── hashing/
│           │   └── hash_table.hpp
│           │
│           ├── algorithms/
│           │   ├── sorting.hpp
│           │   ├── searching.hpp
│           │   └── dp.hpp
│           │
│           └── core/
│               ├── concepts.hpp
│               ├── allocator.hpp
│               └── utilities.hpp
│
│
├── tests/
│   ├── containers/
│   ├── trees/
│   ├── graphs/
│   ├── graphs/
│   └── algorithms/
│
├── examples/
│   ├── array_list_example.cpp
│   ├── avl_example.cpp
│   └── graph_example.cpp
│
├── benchmarks/
│   ├── container_bench.cpp
│   └── sorting_bench.cpp
│
├── docs/
│   ├── mkdocs.yml
│   ├── index.md
│   ├── containers.md
│   ├── trees.md
│   ├── graphs.md
│   └── algorithms.md
│
└── .github/
    └── workflows/
        └── ci.yml
```

### ⚖️ License
This project is licensed under the MIT License.

You are free to use, modify, and distribute this software!

See [LICENSE](./LICENSE) for details.

### 🧑🏻‍🏫 Author
Ethan T Miller (EthBeats)

*add info later...*

#### A Note From the Author
2026-03-01

To my fellow Computer Science students:
> **Eth-DSA** is a personal project that I want to complete from scratch as a product of everything I have learned and enjoyed in Computer Science at the *University of Tennessee*. My motivation for this project comes from wanting to help future students understand how core data structures and algorithms work under the hood so that no matter where programming ends up in the future, students know what is going on behinds the scenes. I know that Claude Code can write all of the code in this repository effortlessly, but my goal is to provide a free resource for those who want to learn from a fully crafted course with clean documentation (*potentially videos too*) going through the material from start to finish. If this library ends up being useless, at least I will have hopefully impacted someone's education and at least gotten something out of my degree! As I transition into graduate school and into a career in audio programming (*hopefully*), I hope I can contribute to this repository when I can and start to use it in my own C++ audio workflow.

Ethan T Miller
