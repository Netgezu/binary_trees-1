# 0x1D. C - Binary trees
>Project Done in 5 Days

![Betty style](https://img.shields.io/badge/betty-style%20guide-purple?style=round-square)
![Data structure](https://img.shields.io/badge/-Data%20structure-orange)
![Algorithm](https://img.shields.io/badge/-Algorithm-lightgrey)
![Group project](https://img.shields.io/badge/-Group%20project-blue)

## Learning Objectives
>needed to be [explained](https://fs.blog/feynman-learning-technique/) after the project.
* What is a binary tree
* What is the difference between a binary tree and a Binary Serch Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## Resources
* [Binary tree (note the first line: `Not to be confused with B-tree.`)](https://en.wikipedia.org/wiki/Binary_tree)
* [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
* [Tree Traversal](https://www.programiz.com/dsa/tree-traversal)
* [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
* [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)

## Tasks To complete ⚓

+ [x] 0\. New node<br/>_**[0-binary_tree_node.c](0-binary_tree_node.c)**_ creates a binary tree node.
   + Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
   + Where `parent` is a pointer to the parent node of the node to create
   + And `value` is the value to put in the new node
   + When created, a node does not have any child
   + function returns a pointer to the new node, or `NULL` on failure
   
   __Example__:
   ```c
   alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
   alex@/tmp/binary_trees$ ./0-node
          .-------(098)-------.
     .--(012)--.         .--(402)--.
   (006)     (016)     (256)     (512)
   alex@/tmp/binary_trees$
   ```
+ [x] 1\. Insert left<br/>_**[1-binary_tree_insert_left.c](1-binary_tree_insert_left.c)**_ inserts a node as the left-child of another node.
  + Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
  + Where `parent` is a pointer to the node to insert the left-child in
  + And `value` is the value to store in the new node
  + function returns a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
  + If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left
  alex@/tmp/binary_trees$ ./1-left
    .--(098)--.
  (012)     (402)
  
         .--(098)-------.
    .--(054)       .--(402)
  (012)          (128)                                            
  alex@/tmp/binary_trees$
  ```
+ [x] 2\. Factorize all the things!<br/>_**[factors](factors)**_ factorizes as many numbers as possible into a product of two smaller numbers.
  + Usage: `factors <file>`
  + Output format: `n=p*q`
  + You can work on the numbers of the file in the order of your choice
  + Your program should run without any dependency: You will not be able to install anything on the machine we will run your program on
  + Time limit: Your program will be killed after 5 seconds if it hasn’t finish
  + Push all your scripts, source code, etc… to your repository
