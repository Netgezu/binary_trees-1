# Failed tests
> contains failed main function that are used to test each task functions

## Tests

File: [123-main.c](https://github.com/bekalue/binary_trees/blob/main/failed_test/123-main.c) used to test [123-avl_remove.c](../123-avl_remove.c).
  __Reason__:
  ```c
  - [Got]
         .--(056)------------.
    .--(043)            .--(098)-------.
  (002)            .--(078)       .--(123)--.
                 (076)          (110)     (234)
         .--(056)------------.
    .--(043)            .--(110)--.
  (002)            .--(078)     (123)--.
                 (076)               (234)
         .--(056)------------.
    .--(043)            .--(123)--.
  (002)            .--(078)     (234)
                 (076)
         .--(056)------------.
    .--(043)            .--(234)
  (002)            .--(078)
                 (076)
  
  (528 chars long)
  [stderr]: 
  (0 chars long)
  [Expected]
         .--(056)------------.
    .--(043)            .--(098)-------.
  (002)            .--(078)       .--(123)--.
                 (076)          (110)     (234)
         .--(056)------------.
    .--(043)            .--(110)--.
  (002)            .--(078)     (123)--.
                 (076)               (234)
         .--(056)------------.
    .--(043)            .--(123)--.
  (002)            .--(078)     (234)
                 (076)
         .--(056)-------.
    .--(043)       .--(078)--.
  (002)          (076)     (234)
  
  (505 chars long)
  [stderr]: [Anything]
  (0 chars long) [Diff had to be removed because it was too long] [Diff had to be removed because it was too long] [Diff had to be removed because it was too long] [Diff had to be removed because it was too long] [Diff had to be removed because it was too long] [Diff had to be removed because it was too long] [Diff had to be removed because it was too long] [Diff had to be removed because it was too long] [Diff had to be removed because it was too long] [Diff had to be removed because it was too long] [Diff had to be removed because it was too long]
  ```
