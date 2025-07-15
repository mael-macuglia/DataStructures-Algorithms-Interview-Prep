# Data Structures & Algorithms - Interview Preparation

A comprehensive collection of data structures and algorithms implemented in C++ for technical interview preparation. This repository demonstrates clean code practices, proper documentation, and thorough testing of fundamental computer science concepts.

## 🎯 Purpose

This project serves as both a learning resource and a practical reference for:
- Technical interview preparation
- Algorithm implementation practice
- C++ programming skill demonstration
- Software engineering best practices

## 📋 Table of Contents

- [Prerequisites](#prerequisites)
- [Quick Start](#quick-start)
- [Build Instructions](#build-instructions)
- [Project Structure](#project-structure)
- [Implemented Data Structures](#implemented-data-structures)
- [Running Tests](#running-tests)
- [Development Workflow](#development-workflow)
- [Contributing](#contributing)

## 🛠 Prerequisites

### Required Software
- **C++ Compiler**: Clang++ (macOS) or GCC (Linux/Windows)
- **CMake**: Version 3.10 or higher
- **Git**: For version control

### Development Environment Options
- **VSCode** (Recommended for cross-platform development)
  - C/C++ Extension
  - CMake Tools Extension
- **Xcode** (macOS only - excellent debugging experience)

## 🚀 Quick Start

```bash
# Clone the repository
git clone https://github.com/yourusername/DataStructures-Interview-Prep.git
cd DataStructures-Interview-Prep

# Build all data structures
mkdir build && cd build
cmake ..
make

# Run a specific data structure test
./test-LinkedList
```

## 🔧 Build Instructions

### Option 1: Command Line (Cross-platform)

```bash
# Configure and build
mkdir build
cd build
cmake ..
make

# Run specific tests
./test-LinkedList
./test-BinaryTree
```

### Option 2: VSCode Integration

1. Open project in VSCode: `code .`
2. Install recommended extensions
3. Use Command Palette (`Cmd+Shift+P`):
   - "CMake: Configure"
   - "CMake: Build"
   - "CMake: Run Without Debugging"

### Option 3: Xcode (macOS)

```bash
# Generate Xcode project
cmake -G Xcode .
open DataStructures-Interview-Prep.xcodeproj
```

## 📁 Project Structure

```
DataStructures-Interview-Prep/
├── CMakeLists.txt              # Build configuration
├── README.md                   # This file
├── .gitignore                  # Git ignore rules
├── Playground/                 # Test implementations
│   ├── test-LinkedList.cpp
│   ├── test-BinaryTree.cpp
│   └── test-*.cpp
└── src/                        # Source implementations
    ├── linear/                 # Linear data structures
    │   └── LinkedList/
    │       ├── LinkedList.hpp
    │       ├── LinkedList.cpp
    │       ├── Node.hpp
    │       └── Node.cpp
    ├── trees/                  # Tree data structures
    │   └── BinaryTree/
    ├── graphs/                 # Graph algorithms
    ├── sorting/                # Sorting algorithms
    └── hashing/                # Hash-based structures
```

## 📊 Implemented Data Structures

### Linear Data Structures
| Data Structure | Implementation Status | Time Complexity | Space Complexity |
|----------------|----------------------|-----------------|------------------|
| **Linked List** | ✅ Complete | Insert: O(1), Search: O(n) | O(n) |
| **Stack** | 🚧 In Progress | Push/Pop: O(1) | O(n) |
| **Queue** | 📋 Planned | Enqueue/Dequeue: O(1) | O(n) |
| **Dynamic Array** | 📋 Planned | Access: O(1), Insert: O(n) | O(n) |

### Tree Data Structures
| Data Structure | Implementation Status | Time Complexity | Space Complexity |
|----------------|----------------------|-----------------|------------------|
| **Binary Tree** | 🚧 In Progress | Search: O(log n) avg | O(n) |
| **Binary Search Tree** | 📋 Planned | Search/Insert: O(log n) avg | O(n) |
| **AVL Tree** | 📋 Planned | Search/Insert: O(log n) | O(n) |

### Graph Algorithms
| Algorithm | Implementation Status | Time Complexity | Space Complexity |
|-----------|----------------------|-----------------|------------------|
| **DFS** | 📋 Planned | O(V + E) | O(V) |
| **BFS** | 📋 Planned | O(V + E) | O(V) |
| **Dijkstra** | 📋 Planned | O((V + E) log V) | O(V) |

**Legend**: ✅ Complete | 🚧 In Progress | 📋 Planned

## 🧪 Running Tests

Each data structure has its own test executable:

```bash
# Run all tests
cd build
./test-LinkedList
./test-BinaryTree
# ... other test executables

# Or using make
make test-LinkedList
./test-LinkedList
```

### Example Output
```
Testing LinkedList:
Empty list: NULL
After adding 5: 5 -> NULL
After creating from array [1,2,4,5]: 1 -> 2 -> 4 -> 5 -> NULL
```

## 🔄 Development Workflow

### Adding a New Data Structure

1. **Create source files**:
   ```bash
   mkdir -p src/category
   touch src/category/DataStructure.hpp
   touch src/category/DataStructure.cpp
   touch Playground/test-DataStructure.cpp
   ```

2. **Update CMakeLists.txt**:
   ```cmake
   add_executable(test-DataStructure
       Playground/test-DataStructure.cpp
       src/category/DataStructure.cpp
   )
   ```

3. **Implement and test**:
   - Write the data structure implementation
   - Create comprehensive tests
   - Document time/space complexity

4. **Update documentation**:
   - Add to the implementation table above
   - Update project structure if needed

### Commit Guidelines

- Use descriptive commit messages
- Commit frequently with logical units of work
- Update README.md when adding new structures

Example commit messages:
```
feat: implement LinkedList with basic operations
test: add comprehensive LinkedList test cases
docs: update README with LinkedList complexity analysis
fix: handle edge case in LinkedList deletion
```

## 🤝 Contributing

Contributions are welcome! Please feel free to submit pull requests for:
- New data structure implementations
- Algorithm optimizations
- Bug fixes
- Documentation improvements
- Additional test cases

### Guidelines
- Follow existing code style and naming conventions
- Include comprehensive tests for new implementations
- Update documentation and complexity analysis
- Ensure all tests pass before submitting

## 📝 License

This project is open source and available under the [MIT License](LICENSE).

## 🎓 Learning Resources

- [Introduction to Algorithms (CLRS)](https://mitpress.mit.edu/books/introduction-algorithms-third-edition)
- [LeetCode](https://leetcode.com/) - Practice problems
- [Cracking the Coding Interview](http://www.crackingthecodinginterview.com/)

## 📞 Contact

Feel free to reach out if you have questions or suggestions!

---
⭐ If this repository helps you with your interview preparation, please consid# Data Structures & Algorithms - Interview Preparation

A comprehensive collection of data structures and algorithms implemented in C++ for technical interview preparation. This repository demonstrates clean code practices, proper documentation, and thorough testing of fundamental computer science concepts.

## 🎯 Purpose

This project serves as both a learning resource and a practical reference for:
- Technical interview preparation
- Algorithm implementation practice
- C++ programming skill demonstration
- Software engineering best practices

## 📋 Table of Contents

- [Prerequisites](#prerequisites)
- [Quick Start](#quick-start)
- [Build Instructions](#build-instructions)
- [Project Structure](#project-structure)
- [Implemented Data Structures](#implemented-data-structures)
- [Running Tests](#running-tests)
- [Development Workflow](#development-workflow)
- [Contributing](#contributing)

## 🛠 Prerequisites

### Required Software
- **C++ Compiler**: Clang++ (macOS) or GCC (Linux/Windows)
- **CMake**: Version 3.10 or higher
- **Git**: For version control

### Development Environment Options
- **VSCode** (Recommended for cross-platform development)
  - C/C++ Extension
  - CMake Tools Extension
- **Xcode** (macOS only - excellent debugging experience)

## 🚀 Quick Start

```bash
# Clone the repository
git clone https://github.com/yourusername/DataStructures-Interview-Prep.git
cd DataStructures-Interview-Prep

# Build all data structures
mkdir build && cd build
cmake ..
make

# Run a specific data structure test
./test-LinkedList
```

## 🔧 Build Instructions

### Option 1: Command Line (Cross-platform)

```bash
# Configure and build
mkdir build
cd build
cmake ..
make

# Run specific tests
./test-LinkedList
./test-BinaryTree
```

### Option 2: VSCode Integration

1. Open project in VSCode: `code .`
2. Install recommended extensions
3. Use Command Palette (`Cmd+Shift+P`):
   - "CMake: Configure"
   - "CMake: Build"
   - "CMake: Run Without Debugging"

### Option 3: Xcode (macOS)

```bash
# Generate Xcode project
cmake -G Xcode .
open DataStructures-Interview-Prep.xcodeproj
```

## 📁 Project Structure

```
DataStructures-Interview-Prep/
├── CMakeLists.txt              # Build configuration
├── README.md                   # This file
├── .gitignore                  # Git ignore rules
├── Playground/                 # Test implementations
│   ├── test-LinkedList.cpp
│   ├── test-BinaryTree.cpp
│   └── test-*.cpp
└── src/                        # Source implementations
    ├── linear/                 # Linear data structures
    │   └── LinkedList/
    │       ├── LinkedList.hpp
    │       ├── LinkedList.cpp
    │       ├── Node.hpp
    │       └── Node.cpp
    ├── trees/                  # Tree data structures
    │   └── BinaryTree/
    ├── graphs/                 # Graph algorithms
    ├── sorting/                # Sorting algorithms
    └── hashing/                # Hash-based structures
```

## 📊 Implemented Data Structures

### Linear Data Structures
| Data Structure | Implementation Status | Time Complexity | Space Complexity |
|----------------|----------------------|-----------------|------------------|
| **Linked List** | ✅ Complete | Insert: O(1), Search: O(n) | O(n) |
| **Stack** | 🚧 In Progress | Push/Pop: O(1) | O(n) |
| **Queue** | 📋 Planned | Enqueue/Dequeue: O(1) | O(n) |
| **Dynamic Array** | 📋 Planned | Access: O(1), Insert: O(n) | O(n) |

### Tree Data Structures
| Data Structure | Implementation Status | Time Complexity | Space Complexity |
|----------------|----------------------|-----------------|------------------|
| **Binary Tree** | 🚧 In Progress | Search: O(log n) avg | O(n) |
| **Binary Search Tree** | 📋 Planned | Search/Insert: O(log n) avg | O(n) |
| **AVL Tree** | 📋 Planned | Search/Insert: O(log n) | O(n) |

### Graph Algorithms
| Algorithm | Implementation Status | Time Complexity | Space Complexity |
|-----------|----------------------|-----------------|------------------|
| **DFS** | 📋 Planned | O(V + E) | O(V) |
| **BFS** | 📋 Planned | O(V + E) | O(V) |
| **Dijkstra** | 📋 Planned | O((V + E) log V) | O(V) |

**Legend**: ✅ Complete | 🚧 In Progress | 📋 Planned

## 🧪 Running Tests

Each data structure has its own test executable:

```bash
# Run all tests
cd build
./test-LinkedList
./test-BinaryTree
# ... other test executables

# Or using make
make test-LinkedList
./test-LinkedList
```

### Example Output
```
Testing LinkedList:
Empty list: NULL
After adding 5: 5 -> NULL
After creating from array [1,2,4,5]: 1 -> 2 -> 4 -> 5 -> NULL
```

## 🔄 Development Workflow

### Adding a New Data Structure

1. **Create source files**:
   ```bash
   mkdir -p src/category
   touch src/category/DataStructure.hpp
   touch src/category/DataStructure.cpp
   touch Playground/test-DataStructure.cpp
   ```

2. **Update CMakeLists.txt**:
   ```cmake
   add_executable(test-DataStructure
       Playground/test-DataStructure.cpp
       src/category/DataStructure.cpp
   )
   ```

3. **Implement and test**:
   - Write the data structure implementation
   - Create comprehensive tests
   - Document time/space complexity

4. **Update documentation**:
   - Add to the implementation table above
   - Update project structure if needed

### Commit Guidelines

- Use descriptive commit messages
- Commit frequently with logical units of work
- Update README.md when adding new structures

Example commit messages:
```
feat: implement LinkedList with basic operations
test: add comprehensive LinkedList test cases
docs: update README with LinkedList complexity analysis
fix: handle edge case in LinkedList deletion
```

## 🤝 Contributing

Contributions are welcome! Please feel free to submit pull requests for:
- New data structure implementations
- Algorithm optimizations
- Bug fixes
- Documentation improvements
- Additional test cases

### Guidelines
- Follow existing code style and naming conventions
- Include comprehensive tests for new implementations
- Update documentation and complexity analysis
- Ensure all tests pass before submitting

## 📝 License

This project is open source and available under the [MIT License](LICENSE).

## 🎓 Learning Resources

- [Introduction to Algorithms (CLRS)](https://mitpress.mit.edu/books/introduction-algorithms-third-edition)
- [LeetCode](https://leetcode.com/) - Practice problems
- [Cracking the Coding Interview](http://www.crackingthecodinginterview.com/)

## 📞 Contact

Feel free to reach out if you have questions or suggestions!

---
⭐ If this repository helps you with your interview preparation, please consider giving it a starer giving it a star!
