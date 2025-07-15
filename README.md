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
make

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