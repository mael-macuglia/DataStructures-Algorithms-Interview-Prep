# Data Structures & Algorithms - Interview Prep

A collection of data structures and algorithms implemented in C++ for technical interview preparation.

## 🎯 Goal

Building fundamental data structures from scratch to strengthen problem-solving skills and prepare for technical interviews.

## 🛠 Setup

### Prerequisites
- C++ compiler (clang++ or g++)
- CMake 3.10+

### Build and Run
```bash
git clone https://github.com/mael-macuglia/DataStructures-Interview-Prep.git
cd DataStructures-Interview-Prep

# Build
mkdir build && cd build
cmake ..
make# Data Structures & Algorithms - Interview Prep

A collection of data structures and essential numerical computing tools implemented in C++ for technical interview preparation.

## 🎯 Goal

Building fundamental data structures and essential numerical computing skills in C++ for technical interview preparation. Covers both algorithmic thinking and practical numerical methods used in computational roles.

## 🛠 Setup

### Prerequisites
- C++ compiler (clang++ or g++)
- CMake 3.10+
- Eigen library (for numerical examples)

### Build and Run
```bash
git clone https://github.com/mael-macuglia/DataStructures-Interview-Prep.git
cd DataStructures-Interview-Prep

# Build
mkdir build && cd build
cmake ..
make

# Run data structures
./test-LinkedList

# Run numerical essentials
./cpp-template-vector-basic    # C++ templates and STL
./cpp-functions               # Function objects and algorithms
./some-eigen                 # Eigen matrix operations
./square-lin-sys            # Square linear system solving
./general-lin-sys           # General linear system solving
```

## 📁 Structure

```
├── src/                          # Data structures implementations
│   └── linear/LinkedList/        # LinkedList implementation
├── Playground/                   # Data structure tests
│   └── test-LinkedList.cpp
├── numerical-essentials/         # Essential C++ for numerical computing
│   ├── cpp-template-vector-basic.cpp  # Templates & STL containers
│   ├── cpp-functions.cpp              # Function objects & algorithms
│   ├── some-eigen.cpp                 # Eigen matrix operations
│   ├── square-lin-sys.cpp             # Square linear system solving
│   └── general-lin-sys.cpp            # General linear system solving
├── setup-xcode.sh                # Xcode project generator script
└── CMakeLists.txt                # Build configuration
```

## ✅ Implemented

### Data Structures
- **LinkedList**: Basic singly linked list with insert, display, and array creation

### Numerical Computing Essentials
- **C++ Templates & STL**: Vector operations, function objects, algorithms
- **Eigen Matrix Operations**: Basic linear algebra operations  
- **Linear System Solvers**: Square and general system solving methods

## 🚧 Coming Next

### Data Structures
- Stack
- Queue  
- Binary Tree
- Hash Table

### Numerical Methods
- Advanced Eigen operations
- Optimization algorithms
- Numerical integration methods

## 🔧 Development

### VSCode (Recommended)
1. Install C/C++ and CMake Tools extensions
2. Open project: `code .`
3. Build: `Cmd+Shift+P` → "CMake: Build"
4. Run: `Cmd+Shift+P` → "CMake: Run Without Debugging"

### Xcode (macOS)

cmake -G Xcode -B xcode-build .
open xcode-build/DataStructures-Interview-Prep.xcodeproj
```

---
📚 Learning in progress - each implementation includes complexity analysis and comprehensive testing.

# Run tests
./test-LinkedList
```

## 📁 Structure

```
├── src/                    # Implementation files
│   └── linear/LinkedList/  # LinkedList implementation
├── Playground/             # Test files
│   └── test-LinkedList.cpp
└── CMakeLists.txt          # Build configuration
```

## ✅ Implemented

- **LinkedList**: Basic singly linked list with insert, display, and array creation

## 🚧 Coming Next

- Stack
- Queue  
- Binary Tree
- Hash Table

## 🔧 Development

### VSCode (Recommended)
1. Install C/C++ and CMake Tools extensions
2. Open project: `code .`
3. Build: `Cmd+Shift+P` → "CMake: Build"
4. Run: `Cmd+Shift+P` → "CMake: Run Without Debugging"

### Xcode (macOS)
```bash
cmake -G Xcode .
open DataStructures-Interview-Prep.xcodeproj
```

---
📚 Learning in progress - each implementation includes complexity analysis and comprehensive testing.