## :open_file_folder: Binary_Trees

This project covers Binary trees data structures. And also how to implement binary search.

## The Data Structure
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
To compile use:
```
gcc -Wall -Werror -Wextra -pendatic main.c filename.c -o output
```
