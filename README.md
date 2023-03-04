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
+ [x] 2\. Insert right<br/>_**[2-binary_tree_insert_right.c](2-binary_tree_insert_right.c)**_ inserts a node as the right-child of another node.
  + Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
  + Where `parent` is a pointer to the node to insert the right-child in
  + And `value` is the value to store in the new node
  + Your function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
  + If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right
  alex@/tmp/binary_trees$ ./2-right 
    .--(098)--.
  (012)     (402)
  
    .-------(098)--.
  (012)--.       (128)--.
       (054)          (402)
  alex@/tmp/binary_trees$
  ```
+ [x] 3\. Delete<br/>_**[3-binary_tree_delete.c](3-binary_tree_delete.c)**_ deletes an entire binary tree.
  + Prototype: `void binary_tree_delete(binary_tree_t *tree);`
  + Where `tree` is a pointer to the root node of the tree to delete
  + If `tree` is `NULL`, do nothing
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 3-del
  alex@/tmp/binary_trees$ valgrind ./3-del
  ==13264== Memcheck, a memory error detector
  ==13264== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
  ==13264== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
  ==13264== Command: ./3-del
  ==13264== 
    .-------(098)--.
  (012)--.       (128)--.
       (054)          (402)
  ==13264== 
  ==13264== HEAP SUMMARY:
  ==13264==     in use at exit: 0 bytes in 0 blocks
  ==13264==   total heap usage: 9 allocs, 9 frees, 949 bytes allocated
  ==13264== 
  ==13264== All heap blocks were freed -- no leaks are possible
  ==13264== 
  ==13264== For counts of detected and suppressed errors, rerun with: -v
  ==13264== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
  alex@/tmp/binary_trees$
  ```
+ [x] 4\. Is leaf<br/>_**[4-binary_tree_is_leaf.c](4-binary_tree_is_leaf.c)**_ checks if a node is a leaf.
  + Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`
  + Where `node` is a pointer to the node to check
  + Your function must return `1` if `node` is a leaf, otherwise `0`
  + If `node` is `NULL`, return `0`
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 4-binary_tree_is_leaf.c 4-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf
  alex@/tmp/binary_trees$ ./4-leaf 
    .-------(098)--.
  (012)--.       (128)--.
       (054)          (402)
  Is 98 a leaf: 0
  Is 128 a leaf: 0
  Is 402 a leaf: 1
  alex@/tmp/binary_trees$
  ```
+ [x] 5\. Is root<br/>_**[5-binary_tree_is_root.c](5-binary_tree_is_root.c)**_ checks if a given node is a root.
  + Prototype: `int binary_tree_is_root(const binary_tree_t *node);`
  + Where `node` is a pointer to the node to check
  + Your function must return `1` if `node` is a root, otherwise `0`
  + If `node` is `NULL`, return `0`
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 5-binary_tree_is_root.c 5-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root
  alex@/tmp/binary_trees$ ./5-root 
    .-------(098)--.
  (012)--.       (128)--.
       (054)          (402)
  Is 98 a root: 1
  Is 128 a root: 0
  Is 402 a root: 0
  alex@/tmp/binary_trees$
  ```
+ [x] 6\. Pre-order traversal<br/>_**[6-binary_tree_preorder.c](6-binary_tree_preorder.c)**_ goes through a binary tree using pre-order traversal.
  + Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
  + Where `tree` is a pointer to the root node of the tree to traverse
  + And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
  + If `tree` or `func` is `NULL`, do nothing
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre
  alex@/tmp/binary_trees$ ./6-pre
         .-------(098)-------.
    .--(012)--.         .--(402)--.
  (006)     (056)     (256)     (512)
  98
  12
  6
  56
  402
  256
  512
  alex@/tmp/binary_trees$
  ```
+ [x] 7\. In-order traversal<br/>_**[7-binary_tree_inorder.c](7-binary_tree_inorder.c)**_ goes through a binary tree using in-order traversal.
  + Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
  + Where `tree` is a pointer to the root node of the tree to traverse
  + And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
  + If `tree` or `func` is `NULL`, do nothing
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o 7-in
  alex@/tmp/binary_trees$ ./7-in
         .-------(098)-------.
    .--(012)--.         .--(402)--.
  (006)     (056)     (256)     (512)
  6
  12
  56
  98
  256
  402
  512
  alex@/tmp/binary_trees$
  ```
+ [x] 8\. Post-order traversal<br/>_**[8-binary_tree_postorder.c](8-binary_tree_postorder.c)**_ goes through a binary tree using post-order traversal.
  + Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
  + Where `tree` is a pointer to the root node of the tree to traverse
  + And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
  + If `tree` or `func` is `NULL`, do nothing
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o 8-post
  alex@/tmp/binary_trees$ ./8-post
         .-------(098)-------.
    .--(012)--.         .--(402)--.
  (006)     (056)     (256)     (512)
  6
  56
  12
  256
  512
  402
  98
  alex@/tmp/binary_trees$
  ```
+ [x] 9\. Height<br/>_**[9-binary_tree_height.c](9-binary_tree_height.c)**_ measures the height of a binary tree.
  + Prototype: `size_t binary_tree_height(const binary_tree_t *tree);`
  + Where `tree` is a pointer to the root node of the tree to measure the height.
  + If `tree` is `NULL`, your function must return `0`
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 9-binary_tree_height.c 9-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 9-height
  alex@/tmp/binary_trees$ ./9-height 
    .-------(098)--.
  (012)--.       (128)--.
       (054)          (402)
  Height from 98: 2
  Height from 128: 1
  Height from 54: 0
  alex@/tmp/binary_trees$
  ```
+ [x] 10\. Depth<br/>_**[10-binary_tree_depth.c](10-binary_tree_depth.c)**_ measures the depth of a node in a binary tree
  + Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);`
  + Where `tree` is a pointer to the node to measure the depth
  + If `tree` is `NULL`, your function must return `0`
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 10-binary_tree_depth.c 10-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 10-depth
  alex@/tmp/binary_trees$ ./10-depth 
    .-------(098)--.
  (012)--.       (128)--.
       (054)          (402)
  Depth of 98: 0
  Depth of 128: 1
  Depth of 54: 2
  alex@/tmp/binary_trees$
  ```
+ [x] 11\. Size<br/>_**[11-binary_tree_size.c](11-binary_tree_size.c)**_ measures the size of a binary tree.
  + Prototype: `size_t binary_tree_size(const binary_tree_t *tree);`
  + Where `tree` is a pointer to the root node of the tree to measure the size
  + If `tree` is `NULL`, the function must return `0`
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 11-binary_tree_size.c 11-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 11-size
  alex@/tmp/binary_trees$ ./11-size 
    .-------(098)--.
  (012)--.       (128)--.
       (054)          (402)
  Size of 98: 5
  Size of 128: 2
  Size of 54: 1
  alex@/tmp/binary_trees$
  ```
+ [x] 12\. Leaves<br/>_**[12-binary_tree_leaves.c](12-binary_tree_leaves.c)**_ counts the leaves in a binary tree.
  + Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);`
  + Where `tree` is a pointer to the root node of the tree to count the number of leaves
  + If `tree` is `NULL`, the function must return `0`
  + A `NULL` pointer is not a leaf
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 12-binary_tree_leaves.c 12-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 12-leaves
  alex@/tmp/binary_trees$ ./12-leaves 
    .-------(098)--.
  (012)--.       (128)--.
       (054)          (402)
  Leaves in 98: 2
  Leaves in 128: 1
  Leaves in 54: 1
  alex@/tmp/binary_trees$
  ```
+ [x] 13\. Nodes<br/>_**[13-binary_tree_nodes.c](13-binary_tree_nodes.c)**_ counts the nodes with at least 1 child in a binary tree.
  + Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree);`
  + Where `tree` is a pointer to the root node of the tree to count the number of nodes
  + If `tree` is `NULL`, the function must return `0`
  + A `NULL` pointer is not a node
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 13-binary_tree_nodes.c 13-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 13-nodes
  alex@/tmp/binary_trees$ ./13-nodes
    .-------(098)--.
  (012)--.       (128)--.
       (054)          (402)
  Nodes in 98: 3
  Nodes in 128: 1
  Nodes in 54: 0
  alex@/tmp/binary_trees$
  ```
+ [x] 14\. Balance factor<br/>_**[14-binary_tree_balance.c](14-binary_tree_balance.c)**_ measures the balance factor of a binary tree.
  + Prototype: `int binary_tree_balance(const binary_tree_t *tree);`
  + Where `tree` is a pointer to the root node of the tree to measure the balance factor
  + If `tree` is `NULL`, return `0` hasn’t finish
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 14-binary_tree_balance.c 14-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c -o 14-balance
  alex@/tmp/binary_trees$ ./14-balance
                        .-------(098)--.
              .-------(045)--.       (128)--.
         .--(012)--.       (050)          (402)
    .--(010)     (054)
  (008)
  Balance of 98: +2
  Balance of 128: -1
  Balance of 54: +0
  alex@/tmp/binary_trees$
  ```
+ [x] 15\. Is full<br/>_**[15-binary_tree_is_full.c](15-binary_tree_is_full.c)**_ checks if a binary tree is full.
  + Prototype: `int binary_tree_is_full(const binary_tree_t *tree);`
  + Where `tree` is a pointer to the root node of the tree to check
  + If `tree` is `NULL`, your function must return `0`
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 15-binary_tree_is_full.c 15-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 15-full
  alex@/tmp/binary_trees$ ./15-full
         .-------(098)--.
    .--(012)--.       (128)--.
  (010)     (054)          (402)
  Is 98 full: 0
  Is 12 full: 1
  Is 128 full: 0
  alex@/tmp/binary_trees$
  ```
+ [x] 16\. Is perfect<br/>_**[16-binary_tree_is_perfect.c](16-binary_tree_is_perfect.c)**_ checks if a binary tree is perfect.
  + Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree);`
  + Where `tree` is a pointer to the root node of the tree to check
  + If `tree` is `NULL`, your function must return `0`
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 16-binary_tree_is_perfect.c 16-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 16-perfect
  alex@/tmp/binary_trees$ ./16-perfect 
         .-------(098)-------.
    .--(012)--.         .--(128)--.
  (010)     (054)     (010)     (402)
  Perfect: 1
  
         .-------(098)-------.
    .--(012)--.         .--(128)-------.
  (010)     (054)     (010)       .--(402)
                                (010)
  Perfect: 0
  
         .-------(098)-------.
    .--(012)--.         .--(128)-------.
  (010)     (054)     (010)       .--(402)--.
                                (010)     (010)
  Perfect: 0
  alex@/tmp/binary_trees$
  ```
+ [x] 17\. Sibling<br/>_**[17-binary_tree_sibling.c](17-binary_tree_sibling.c)**_ finds the sibling of a node.
  + Prototype: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
  + Where `node` is a pointer to the node to find the sibling
  + Your function must return a pointer to the sibling node
  + If `node` is `NULL` or the parent is `NULL`, return `NULL`
  + If `node` has no sibling, return `NULL`
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o 17-sibling
  alex@/tmp/binary_trees$ ./17-sibling
         .-------(098)-------.
    .--(012)--.         .--(128)-------.
  (010)     (054)     (110)       .--(402)--.
                                (200)     (512)
  Sibling of 12: 128
  Sibling of 110: 402
  Sibling of 54: 10
  Sibling of 98: (nil)
  alex@/tmp/binary_trees$
  ```
+ [x] 18\. Uncle<br/>_**[18-binary_tree_uncle.c](18-binary_tree_uncle.c)**_ finds the uncle of a node.
  + Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
  + Where `node` is a pointer to the node to find the uncle
  + Your function must return a pointer to the uncle node
  + If `node` is `NULL`, return `NULL`
  + If `node` has no uncle, return `NULL`
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle
  alex@/tmp/binary_trees$ ./18-uncle
         .-------(098)-------.
    .--(012)--.         .--(128)-------.
  (010)     (054)     (110)       .--(402)--.
                                (200)     (512)
  Uncle of 110: 12
  Uncle of 54: 128
  Uncle of 12: (nil)
  alex@/tmp/binary_trees$
  ```
+ [x] 19\. Lowest common ancestor<br/>_**[100-binary_trees_ancestor.c](100-binary_trees_ancestor.c)**_ finds the lowest common ancestor of two nodes.
  + Prototype: `binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);`
  + Where `first` is a pointer to the first node
  + And `second` is a pointer to the second node
  + Your function must return a pointer to the lowest common ancestor node of the two given nodes
  + If no common ancestor was found, your function must return `NULL`
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 100-main.c 100-binary_trees_ancestor.c 0-binary_tree_node.c -o 100-ancestor
  alex@/tmp/binary_trees$ ./100-ancestor
         .-------(098)-------.
    .--(012)--.         .--(402)-------.
  (010)     (054)     (045)       .--(128)--.
                                (092)     (065)
  Ancestor of [12] & [402]: 98
  Ancestor of [45] & [65]: 402
  Ancestor of [128] & [65]: 128
  alex@/tmp/binary_trees$
  ```
+ [x] 20\. Level-order traversal<br/>_**[101-binary_tree_levelorder.c](101-binary_tree_levelorder.c)**_ goes through a binary tree using level-order traversal.
  + Prototype: `void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));`
  + Where `tree` is a pointer to the root node of the tree to traverse
  + And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
  + If `tree` or `func` is `NULL`, do nothing
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 101-main.c 101-binary_tree_levelorder.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 101-lvl
  alex@/tmp/binary_trees$ valgrind ./101-lvl
  ==23445== Memcheck, a memory error detector
  ==23445== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
  ==23445== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
  ==23445== Command: ./101-lvl
  ==23445== 
         .-------(098)-------.
    .--(012)--.         .--(402)--.
  (006)     (056)     (256)     (512)
  98
  12
  402
  6
  56
  256
  512
  ==23445== 
  ==23445== HEAP SUMMARY:
  ==23445==     in use at exit: 0 bytes in 0 blocks
  ==23445==   total heap usage: 19 allocs, 19 frees, 1,197 bytes allocated
  ==23445== 
  ==23445== All heap blocks were freed -- no leaks are possible
  ==23445== 
  ==23445== For counts of detected and suppressed errors, rerun with: -v
  ==23445== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
  alex@/tmp/binary_trees$
  ```
+ [x] 21\. Is complete<br/>_**[102-binary_tree_is_complete.c](102-binary_tree_is_complete.c)**_ checks if a binary tree is complete.
  + Prototype: `int binary_tree_is_complete(const binary_tree_t *tree);`
  + Where `tree` is a pointer to the root node of the tree to check
  + If `tree` is `NULL`, your function must return `0`
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 102-main.c 102-binary_tree_is_complete.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 102-complete
  alex@/tmp/binary_trees$ ./102-complete
         .-------(098)--.
    .--(012)--.       (128)--.
  (010)     (054)          (402)
  Is 98 complete: 0
  Is 12 complete: 1
         .-------(098)-------.
    .--(012)--.         .--(128)--.
  (010)     (054)     (112)     (402)
  Is 98 complete: 1
              .-------(098)-------.
         .--(012)--.         .--(128)--.
    .--(010)     (054)     (112)     (402)
  (008)
  Is 98 complete: 1
              .------------(098)-------.
         .--(012)-------.         .--(128)--.
    .--(010)       .--(054)     (112)     (402)
  (008)          (023)
  Is 98 complete: 0
  alex@/tmp/binary_trees$
  ```
+ [x] 22\. Rotate left<br/>_**[103-binary_tree_rotate_left.c](103-binary_tree_rotate_left.c)**_ performs a left-rotation on a binary tree.
  + Prototype: `binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);`
  + Where `tree` is a pointer to the root node of the tree to rotate
  + Your function must return a pointer to the new root node of the tree once rotated
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 103-binary_tree_rotate_left.c 103-main.c 0-binary_tree_node.c -o 103-rotl
  alex@/tmp/binary_trees$ ./103-rotl
  (098)--.
       (128)--.
            (402)
  Rotate-left 98
    .--(128)--.
  (098)     (402)
  
    .--(128)-------.
  (098)       .--(402)--.
            (420)     (450)
  Rotate-left 128
         .-------(402)--.
    .--(128)--.       (450)
  (098)     (420)
  alex@/tmp/binary_trees$
  ```
+ [x] 23\. Rotate right<br/>_**[104-binary_tree_rotate_right.c](104-binary_tree_rotate_right.c)**_ performs a right-rotation on a binary tree.
  + Prototype: `binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);`
  + Where `tree` is a pointer to the root node of the tree to rotate
  + Your function must return a pointer to the new root node of the tree once rotated
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 104-binary_tree_rotate_right.c 104-main.c 0-binary_tree_node.c -o 104-rotr
  alex@/tmp/binary_trees$ ./104-rotr
         .--(098)
    .--(064)
  (032)
  Rotate-right 98
    .--(064)--.
  (032)     (098)
  
         .-------(064)--.
    .--(032)--.       (098)
  (020)     (056)
  Rotate-right 64
    .--(032)-------.
  (020)       .--(064)--.
            (056)     (098)
  alex@/tmp/binary_trees$
  ```
+ [x] 24\. Is BST<br/>_**[110-binary_tree_is_bst.c](110-binary_tree_is_bst.c)**_ checks if a binary tree is a valid [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree).
  + Prototype: `int binary_tree_is_bst(const binary_tree_t *tree);`
  + Where `tree` is a pointer to the root node of the tree to check
  + Your function must return `1` if `tree` is a valid BST, and `0` otherwise
  + If `tree` is `NULL`, return `0`
  
  Properties of a Binary Search Tree:
  + The left subtree of a node contains only nodes with values less than the node’s value
  + The right subtree of a node contains only nodes with values greater than the node’s value
  + The left and right subtree each must also be a binary search tree
  + There must be no duplicate values
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 110-main.c 110-binary_tree_is_bst.c 0-binary_tree_node.c -o 110-is_bst
  alex@/tmp/binary_trees$ ./110-is_bst
         .-------(098)--.
    .--(012)--.       (128)--.
  (010)     (054)          (402)
  Is 98 bst: 1
  Is 12 bst: 1
         .-------(098)-------.
    .--(012)--.         .--(128)--.
  (010)     (054)     (097)     (402)
  Is 98 bst: 0
  alex@/tmp/binary_trees$
  ```
+ [x] 25\. BST - Insert<br/>_**[111-bst_insert.c](111-bst_insert.c)**_ inserts a value in a Binary Search Tree.
  + Prototype: `bst_t *bst_insert(bst_t **tree, int value);`
  + Where `tree` is a double pointer to the root node of the BST to insert the value
  + And `value` is the value to store in the node to be inserted
  + Your function must return a pointer to the created node, or `NULL` on failure
  + If the address stored in `tree` is `NULL`, the created node must become the root node.
  + If the value is already present in the tree, it must be ignored
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 111-bst_insert.c 111-main.c 0-binary_tree_node.c -o 111-bst_insert
  alex@/tmp/binary_trees$ ./111-bst_insert
  Inserted: 98
  Inserted: 402
  Inserted: 12
  Inserted: 46
  Inserted: 128
  Inserted: 256
  Inserted: 512
  Inserted: 1
  Node should be nil -> (nil)
         .-------(098)------------.
    .--(012)--.         .-------(402)--.
  (001)     (046)     (128)--.       (512)
                           (256)
  alex@/tmp/binary_trees$
  ```
+ [x] 26\. BST - Array to BST<br/>_**[112-array_to_bst.c](112-array_to_bst.c)**_ builds a Binary Search Tree from an array.
  + Prototype: `bst_t *array_to_bst(int *array, size_t size);`
  + Where `array` is a pointer to the first element of the array to be converted
  + And `size` is the number of element in the array
  + Your function must return a pointer to the root node of the created BST, or `NULL` on failure
  + If a value of the array is already present in the tree, this value must be ignored
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 112-array_to_bst.c 112-main.c 111-bst_insert.c 0-binary_tree_node.c -o 112-bst_array
  alex@/tmp/binary_trees$ ./112-bst_array
                                       .------------(079)-------.
                   .-----------------(047)-------.         .--(087)--.
         .-------(021)-------.              .--(068)     (084)     (091)-------.
    .--(002)--.         .--(032)--.       (062)                           .--(098)
  (001)     (020)     (022)     (034)                                   (095)
  alex@/tmp/binary_trees$
  ```
+ [x] 27\. BST - Search<br/>_**[113-bst_search.c](113-bst_search.c)**_ searches for a value in a Binary Search Tree.
  + Prototype: `bst_t *bst_search(const bst_t *tree, int value);`
  + Where `tree` is a pointer to the root node of the BST to search
  + And `value` is the value to search in the tree
  + Your function must return a pointer to the node containing a value equals to `value`
  + If `tree` is `NULL` or if nothing is found, your function must return `NULL`
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 113-bst_search.c 113-main.c 112-array_to_bst.c 111-bst_insert.c 0-binary_tree_node.c -o 113-bst_search
  alex@/tmp/binary_trees$ ./113-bst_search 
                                       .------------(079)-------.
                   .-----------------(047)-------.         .--(087)--.
         .-------(021)-------.              .--(068)     (084)     (091)-------.
    .--(002)--.         .--(032)--.       (062)                           .--(098)
  (001)     (020)     (022)     (034)                                   (095)
  Found: 32
    .--(032)--.
  (022)     (034)
  Node should be nil -> (nil)
  alex@/tmp/binary_trees$
  ```
+ [ ] 28\. BST - Remove<br/>_**[114-bst_remove.c](114-bst_remove.c)**_ removes a node from a Binary Search Tree.
  + Prototype: `bst_t *bst_remove(bst_t *root, int value);`
  + Where `root` is a pointer to the root node of the tree where you will remove a node
  + And `value` is the value to remove in the tree
  + Once located, the node containing a value equals to `value` must be removed and freed
  + If the node to be deleted has two children, it must be replaced with its first `in-order successor` (not predecessor)
  + Your function must return a pointer to the new root node of the tree after removing the desired value
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 114-bst_remove.c 114-main.c 112-array_to_bst.c 111-bst_insert.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 114-bst_rm
  alex@/tmp/binary_trees$ valgrind ./114-bst_rm
  ==14720== Memcheck, a memory error detector
  ==14720== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
  ==14720== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
  ==14720== Command: ./114-bst_rm
  ==14720== 
                                       .------------(079)-------.
                   .-----------------(047)-------.         .--(087)--.
         .-------(021)-------.              .--(068)     (084)     (091)-------.
    .--(002)--.         .--(032)--.       (062)                           .--(098)
  (001)     (020)     (022)     (034)                                   (095)
  Removed 79...
                                       .------------(084)--.
                   .-----------------(047)-------.       (087)--.
         .-------(021)-------.              .--(068)          (091)-------.
    .--(002)--.         .--(032)--.       (062)                      .--(098)
  (001)     (020)     (022)     (034)                              (095)
  Removed 21...
                                  .------------(084)--.
                   .------------(047)-------.       (087)--.
         .-------(022)--.              .--(068)          (091)-------.
    .--(002)--.       (032)--.       (062)                      .--(098)
  (001)     (020)          (034)                              (095)
  Removed 68...
                                  .-------(084)--.
                   .------------(047)--.       (087)--.
         .-------(022)--.            (062)          (091)-------.
    .--(002)--.       (032)--.                             .--(098)
  (001)     (020)          (034)                         (095)
  ==14720== 
  ==14720== HEAP SUMMARY:
  ==14720==     in use at exit: 0 bytes in 0 blocks
  ==14720==   total heap usage: 40 allocs, 40 frees, 5,772 bytes allocated
  ==14720== 
  ==14720== All heap blocks were freed -- no leaks are possible
  ==14720== 
  ==14720== For counts of detected and suppressed errors, rerun with: -v
  ==14720== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
  alex@/tmp/binary_trees$
  ```
+ [x] 29\. Big O #BST<br/>_**[115-O](115-O)**_ contains the average time complexities of those operations on a Binary Search Tree (one answer per line):
  + Inserting the value `n`
  + Removing the node with the value `n`
  + Searching for a node in a BST of size n
+ [x] 30\. Is AVL<br/>_**[120-binary_tree_is_avl.c](120-binary_tree_is_avl.c)**_ checks if a binary tree is a valid [AVL Tree](https://en.wikipedia.org/wiki/AVL_tree).
  + Prototype: `int binary_tree_is_avl(const binary_tree_t *tree);`
  + Where `tree` is a pointer to the root node of the tree to check
  + Your function must return `1` if `tree` is a valid AVL Tree, and `0` otherwise
  + If `tree` is `NULL`, return `0`
  
  Properties of an AVL Tree:
  + An AVL Tree is a BST
  + The difference between heights of left and right subtrees cannot be more than one
  + The left and right subtrees must also be AVL trees
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 120-main.c 120-binary_tree_is_avl.c 0-binary_tree_node.c -o 120-is_avl
  alex@/tmp/binary_trees$ ./120-is_avl
         .-------(098)--.
    .--(012)--.       (128)--.
  (010)     (054)          (402)
  Is 98 avl: 1
  Is 12 avl: 1
         .-------(098)-------.
    .--(012)--.         .--(128)--.
  (010)     (054)     (097)     (402)
  Is 98 avl: 0
         .-------(098)--.
    .--(012)--.       (128)--.
  (010)     (054)          (402)--.
                                (430)
  Is 98 avl: 0
         .-------(098)--.
    .--(012)--.       (128)--.
  (010)     (054)          (402)-------.
                                  .--(430)
                                (420)
  Is 98 avl: 0
  alex@/tmp/binary_trees$
  ```
+ [ ] 31\. AVL - Insert<br/>_**[121-avl_insert.c](121-avl_insert.c)**_ inserts a value in an AVL Tree.
  + Prototype: `avl_t *avl_insert(avl_t **tree, int value);`
  + Where `tree` is a double pointer to the root node of the AVL tree for inserting the value
  + And `value` is the value to store in the node to be inserted
  + Your function must return a pointer to the created node, or `NULL` on failure
  + If the address stored in `tree` is `NULL`, the created node must become the root node.
  + The resulting tree after insertion, must be a balanced AVL Tree
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 121-avl_insert.c 121-main.c 14-binary_tree_balance.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c 0-binary_tree_node.c -o 121-avl_insert
  alex@/tmp/binary_trees$ ./121-avl_insert
  Inserted: 98
  (098)

  Inserted: 402
  (098)--.
     (402)

  Inserted: 12
    .--(098)--.
  (012)     (402)

  Inserted: 46
    .-------(098)--.
  (012)--.       (402)
       (046)

  Inserted: 128
    .-------(098)-------.
  (012)--.         .--(402)
       (046)     (128)

  Inserted: 256
    .-------(098)-------.
  (012)--.         .--(256)--.
       (046)     (128)     (402)

  Inserted: 512
    .-------(098)-------.
  (012)--.         .--(256)--.
       (046)     (128)     (402)--.
                                (512)

  Inserted: 50
         .-------(098)-------.
    .--(046)--.         .--(256)--.
  (012)     (050)     (128)     (402)--.
                                     (512)
  alex@/tmp/binary_trees$
  ```
+ [ ] 32\. AVL - Array to AVL<br/>_**[122-array_to_avl.c](122-array_to_avl.c)**_ builds an AVL tree from an array.
  + Prototype: `avl_t *array_to_avl(int *array, size_t size);`
  + Where `array` is a pointer to the first element of the array to be converted
  + And `size` is the number of element in the array
  + Your function must return a pointer to the root node of the created AVL tree, or `NULL` on failure
  + If a value of the array is already present in the tree, this value must be ignored
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 122-array_to_avl.c 122-main.c 121-avl_insert.c 0-binary_tree_node.c 14-binary_tree_balance.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c -o 122-avl_array
  alex@/tmp/binary_trees$ ./122-avl_array 
                   .-----------------(047)-----------------.
         .-------(021)-------.                   .-------(084)-------.
    .--(002)--.         .--(032)--.         .--(068)--.         .--(091)-------.
  (001)     (020)     (022)     (034)     (062)     (079)     (087)       .--(098)
                                                                      (095)
  alex@/tmp/binary_trees$
  ```
+ [ ] 33\. AVL - Remove<br/>_**[123-avl_remove.c](123-avl_remove.c)**_ removes a node from an AVL tree.
  + Prototype: `avl_t *avl_remove(avl_t *root, int value);`
  + Where `root` is a pointer to the root node of the tree for removing a node
  + And `value` is the value to remove in the tree
  + Once located, the node containing a value equals to `value` must be removed and freed
  + If the node to be deleted has two children, it must be replaced with its first `in-order successor` (not predecessor)
  + After deletion of the desired node, the tree must be rebalanced if necessary
  + Your function must return a pointer to the new root node of the tree after removing the desired value, and after rebalancing
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 123-avl_remove.c 123-main.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c 122-array_to_avl.c 121-avl_insert.c 14-binary_tree_balance.c 3-binary_tree_delete.c 0-binary_tree_node.c -o 123-avl_rm
  alex@/tmp/binary_trees$ valgrind ./123-avl_rm
  ==15646== Memcheck, a memory error detector
  ==15646== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
  ==15646== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
  ==15646== Command: ./123-avl_rm
  ==15646== 
                   .-----------------(047)-----------------.
         .-------(021)-------.                   .-------(084)-------.
    .--(002)--.         .--(032)--.         .--(068)--.         .--(091)-------.
  (001)     (020)     (022)     (034)     (062)     (079)     (087)       .--(098)
                                                                        (095)
  Removed 47...
                   .-----------------(062)------------.
         .-------(021)-------.              .-------(084)-------.
    .--(002)--.         .--(032)--.       (068)--.         .--(091)-------.
  (001)     (020)     (022)     (034)          (079)     (087)       .--(098)
                                                                   (095)
  Removed 79...
                   .-----------------(062)-----------------.
         .-------(021)-------.                   .-------(091)-------.
    .--(002)--.         .--(032)--.         .--(084)--.         .--(098)
  (001)     (020)     (022)     (034)     (068)     (087)     (095)
  Removed 32...
                   .------------(062)-----------------.
         .-------(021)-------.              .-------(091)-------.
    .--(002)--.         .--(034)       .--(084)--.         .--(098)
  (001)     (020)     (022)          (068)     (087)     (095)
  Removed 34...
                   .-------(062)-----------------.
         .-------(021)--.              .-------(091)-------.
    .--(002)--.       (022)       .--(084)--.         .--(098)
  (001)     (020)               (068)     (087)     (095)
  Removed 22...
         .------------(062)-----------------.
    .--(002)-------.              .-------(091)-------.
  (001)       .--(021)       .--(084)--.         .--(098)
            (020)          (068)     (087)     (095)
  ==15646== 
  ==15646== HEAP SUMMARY:
  ==15646==     in use at exit: 0 bytes in 0 blocks
  ==15646==   total heap usage: 48 allocs, 48 frees, 7,350 bytes allocated
  ==15646== 
  ==15646== All heap blocks were freed -- no leaks are possible
  ==15646== 
  ==15646== For counts of detected and suppressed errors, rerun with: -v
  ==15646== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
  alex@/tmp/binary_trees$
  ```
+ [x] 34\. AVL - From sorted array<br/>_**[124-sorted_array_to_avl.c](124-sorted_array_to_avl.c)**_ builds an AVL tree from an array.
  + Prototype: avl_t *sorted_array_to_avl(int *array, size_t size);
  + Where array is a pointer to the first element of the array to be converted
  + And size is the number of element in the array
  + Your function must return a pointer to the root node of the created AVL tree, or NULL on failure
  + You can assume there will be no duplicate value in the array
  + You are not allowed to rotate
  + You can only have 2 functions in your file
  
  __Example__:
  ```c
  alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 124-main.c 124-sorted_array_to_avl.c 0-binary_tree_node.c -o 124-avl_sorted
  alex@/tmp/binary_trees$ ./124-avl_sorted
  (001)(002)(020)(021)(022)(032)(034)(047)(062)(068)(079)(084)(087)(091)(095)(098)
                   .-----------------(047)-----------------.
         .-------(021)-------.                   .-------(084)-------.
    .--(002)--.         .--(032)--.         .--(068)--.         .--(091)--.
  (001)     (020)     (022)     (034)     (062)     (079)     (087)     (095)--.
                                                                             (098)
  alex@/tmp/binary_trees$
  ```
+ [x] 35\. Big O #AVL Tree<br/>_**[factors](factors)**_ contains the average time complexities of those operations on an AVL Tree (one answer per line):
  + Inserting the value `n`
  + Removing the node with the value `n`
  + Searching for a node in an AVL tree of size n
+ [x] 36\. Factorize all the things!<br/>_**[factors](factors)**_ factorizes as many numbers as possible into a product of two smaller numbers.
  + Usage: `factors <file>`
  + Output format: `n=p*q`
  + You can work on the numbers of the file in the order of your choice
  + Your program should run without any dependency: You will not be able to install anything on the machine we will run your program on
  + Time limit: Your program will be killed after 5 seconds if it hasn’t finish
  + Push all your scripts, source code, etc… to your repository
+ [x] 37\. Factorize all the things!<br/>_**[factors](factors)**_ factorizes as many numbers as possible into a product of two smaller numbers.
  + Usage: `factors <file>`
  + Output format: `n=p*q`
  + You can work on the numbers of the file in the order of your choice
  + Your program should run without any dependency: You will not be able to install anything on the machine we will run your program on
  + Time limit: Your program will be killed after 5 seconds if it hasn’t finish
  + Push all your scripts, source code, etc… to your repository
+ [x] 38\. Factorize all the things!<br/>_**[factors](factors)**_ factorizes as many numbers as possible into a product of two smaller numbers.
  + Usage: `factors <file>`
  + Output format: `n=p*q`
  + You can work on the numbers of the file in the order of your choice
  + Your program should run without any dependency: You will not be able to install anything on the machine we will run your program on
  + Time limit: Your program will be killed after 5 seconds if it hasn’t finish
  + Push all your scripts, source code, etc… to your repository
+ [x] 39\. Factorize all the things!<br/>_**[factors](factors)**_ factorizes as many numbers as possible into a product of two smaller numbers.
  + Usage: `factors <file>`
  + Output format: `n=p*q`
  + You can work on the numbers of the file in the order of your choice
  + Your program should run without any dependency: You will not be able to install anything on the machine we will run your program on
  + Time limit: Your program will be killed after 5 seconds if it hasn’t finish
  + Push all your scripts, source code, etc… to your repository
+ [x] 40\. Factorize all the things!<br/>_**[factors](factors)**_ factorizes as many numbers as possible into a product of two smaller numbers.
  + Usage: `factors <file>`
  + Output format: `n=p*q`
  + You can work on the numbers of the file in the order of your choice
  + Your program should run without any dependency: You will not be able to install anything on the machine we will run your program on
  + Time limit: Your program will be killed after 5 seconds if it hasn’t finish
  + Push all your scripts, source code, etc… to your repositor
+ [x] 41\. Factorize all the things!<br/>_**[factors](factors)**_ factorizes as many numbers as possible into a product of two smaller numbers.
  + Usage: `factors <file>`
  + Output format: `n=p*q`
  + You can work on the numbers of the file in the order of your choice
  + Your program should run without any dependency: You will not be able to install anything on the machine we will run your program on
  + Time limit: Your program will be killed after 5 seconds if it hasn’t finish
  + Push all your scripts, source code, etc… to your repository
