# Eugene Onegin Text Processing System

A high-performance C-based utility designed for the lexicographical and rhythmic analysis of Alexander Pushkin's "Eugene Onegin". The program demonstrates advanced system-level programming techniques, focusing on low-level memory management and efficient algorithm implementation.

## Detailed Program Workflow

The application follows a strict four-stage execution pipeline to ensure maximum performance and minimal memory overhead:

### 1. Unified Buffer I/O
Instead of standard line-by-line reading, which incurs significant system call overhead, the program utilizes a "slurp" approach:
* It determines the exact file size using the `stat` system call.
* It allocates a single contiguous memory block on the heap and reads the entire text into this buffer in one operation.

### 2. String Array Tokenization (Indexing)
The program does not store strings as separate objects. Instead:
* It scans the buffer and replaces line delimiters (`\n`, `\r`) with null-terminators (`\0`).
* It constructs an array of `String_t` structures. Each structure holds a pointer to the start of a line in the shared buffer and its length. This "array of strings" is essentially a lightweight index over the raw data.

### 3. Multi-Pass Sorting via `qsort`
The core logic utilizes the standard C library `qsort` function. By passing different comparison functions (comparators) to `qsort`, the program generates multiple versions of the text:
* **Forward Sorting:** Lines are sorted lexicographically from start to finish.
* **Reverse (Rhyme) Sorting:** A specialized comparator starts comparing characters from the end of each string, skipping punctuation and non-alphabetic characters. This effectively groups rhyming lines together, creating a "rhyme dictionary."

### 4. Output Generation
Sorted results are written back to a destination file, while the original buffer can be printed separately to verify that the underlying data remained intact.

## Technical Highlights
* **Zero Copying:** Strings are never copied or moved in memory; only pointers are swapped during the sort.
* **Algorithm:** Standard `qsort` (Quick Sort) implementation from `<stdlib.h>`.
* **Robustness:** Custom comparators ignore case and punctuation to ensure high-quality sorting of poetic text.

## Build and Execution
```bash
make
./program.exe
