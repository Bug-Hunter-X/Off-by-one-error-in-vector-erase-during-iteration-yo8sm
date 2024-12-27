This repository demonstrates a common off-by-one error when removing elements from a `std::vector` in C++ during iteration. The `bug.cpp` file contains the erroneous code that causes the issue.  The `bugSolution.cpp` provides a corrected version.  The error arises from modifying the vector's size while iterating using an index-based approach.  Always be cautious when modifying a container while iterating through it.  Consider using iterators or algorithms like `std::remove` for safer manipulation.