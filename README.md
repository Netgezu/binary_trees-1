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

+ [ ] 0\. New node<br/>_**[0-binary_tree_node.c](0-binary_tree_node.c)**_ creates a binary tree node.
   + Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
   + Where `parent` is a pointer to the parent node of the node to create
   + And `value` is the value to put in the new node
   + When created, a node does not have any child
   + Your function must return a pointer to the new node, or `NULL` on failure
