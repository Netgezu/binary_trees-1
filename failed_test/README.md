# Failed tests
> contains failed main function that are used to test each task functions

## Tests

+ [ ] AVL - Remove<br/>_**[123-avl_remove.c](../123-avl_remove.c)**_.
  + __File__: [123-main.c](https://github.com/bekalue/binary_trees/blob/main/failed_test/123-main.c) used to test [123-avl_remove.c](../123-avl_remove.c)
  
  __Reason__: Remove several nodes in a row
  ```c
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
+ [ ] AVL - Array to AVL<br/>_**[122-array_to_avl.c](../122-array_to_avl.c)**_
  + __File__: [122-fail_main.c](122-fail_main.c)
  
  __Reason__: Array with 9 values
  ```
  [Expected]
  98, 110, 43, 56, 2, 78, 123, 76, 234
         .--(056)------------.
    .--(043)            .--(098)-------.
  (002)            .--(078)       .--(123)--.
                 (076)          (110)     (234)
  
  (195 chars long)
  [stderr]: [Anything]
  (0 chars long)
  ```
  + __File__: [122-fail_main2.c](122-fail_main2.c)
  
  __Reason__: Array with 50 values
  ```
  [Expected]
  704, 309, 995, 739, 526, 294, 783, 645, 11, 775, 689, 452, 390, 770, 189, 369, 300, 721, 891, 6, 225, 298, 846, 549, 118, 278, 124, 867, 217, 468, 804, 543, 876, 65, 179, 2, 382, 568, 321, 768, 56, 422, 586, 574, 533, 148, 707, 701, 715, 735
                                                 .--------------------------------(309)---------------------------------------------------------------------------------------.  
                             .-----------------(189)-----------------.                                            .---------------------------------------------------------  (704)----------------------------------------------------.
              .------------(118)-------.                   .-------(294)-------.                   .------------(452)----------------------.                                                                       .-----------------(846)------------.
         .--(011)-------.         .--(148)--.         .--(225)--.         .--(300)            .--(382)--.                   .------------(549)-----------------.                               .-----------------(770)-------.              .-------(891)--.
    .--(006)       .--(065)     (124)     (179)     (217)     (278)     (298)            .--(369)     (390)--.         .--(526)-------.              .-------(645)--.                     .--(721)-------.              .--(783)--.       (867)--.       (995)
  (002)          (056)                                                                 (321)               (422)     (468)       .--(543)       .--(574)--.       (689)--.           .--(715)       .--(739)--.       (775)     (804)          (876)
                                                                                                                               (533)          (568)     (586)          (701)       (707)          (735)     (768)
  
  (1836 chars long)
  [stderr]: [Anything]
  (0 chars long)
  ```
  + __File__: [122-fail_main3.c](122-fail_main3.c)
  
  __Reason__: Array with 3 values: Right left case
  ```
  [Expected]
  98, 110, 100
    .--(100)--.
  (098)     (110)
  
  (43 chars long)
  [stderr]: [Anything]
  (0 chars long)
  ```
  + __File__: [122-fail_main4.c](122-fail_main4.c)
  
  __Reason__: Array with 3 values: left Right case
  ```
  [Expected]
  98, 90, 95
    .--(095)--.
  (090)     (098)
  
  (41 chars long)
  [stderr]: [Anything]
  (0 chars long)
  ```
