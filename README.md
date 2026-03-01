# Eth-DSA
## C++ Data Structures and Algorithms Library
#### Ethan T Miller
#### 2026-03-01

### Repo Structure
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
