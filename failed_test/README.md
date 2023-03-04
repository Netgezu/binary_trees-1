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
 + [ ] AVL - Insert<br/>_**[121-avl_insert.c](../121-avl_insert.c)**_
  + __File__: [121-fail_main.c](121-fail_main.c)
  
  __Reason__: Insert 9 values
  ```
  [Expected]
  Value inserted: 98
  Value inserted: 110
  Value inserted: 43
  Value inserted: 56
  Value inserted: 2
  Value inserted: 78
  Value inserted: 123
  Value inserted: 76
  Value inserted: 234
         .--(056)------------.
    .--(043)            .--(098)-------.
  (002)            .--(078)       .--(123)--.
                 (076)          (110)     (234)
  
  (331 chars long)
  [stderr]: [Anything]
  (0 chars long)
  ```
  + __File__: [121-fail_main2.c](121-fail_main2.c)
  
  __Reason__: Insert 50 values
  ```
  [Expected]
  Value inserted: 704
  Value inserted: 309
  Value inserted: 995
  Value inserted: 739
  Value inserted: 526
  Value inserted: 294
  Value inserted: 783
  Value inserted: 645
  Value inserted: 11
  Value inserted: 775
  Value inserted: 689
  Value inserted: 452
  Value inserted: 390
  Value inserted: 770
  Value inserted: 189
  Value inserted: 369
  Value inserted: 300
  Value inserted: 721
  Value inserted: 891
  Value inserted: 6
  Value inserted: 225
  Value inserted: 298
  Value inserted: 846
  Value inserted: 549
  Value inserted: 118
  Value inserted: 278
  Value inserted: 124
  Value inserted: 867
  Value inserted: 217
  Value inserted: 468
  Value inserted: 804
  Value inserted: 543
  Value inserted: 876
  Value inserted: 65
  Value inserted: 179
  Value inserted: 2
  Value inserted: 382
  Value inserted: 568
  Value inserted: 321
  Value inserted: 768
  Value inserted: 56
  Value inserted: 422
  Value inserted: 586
  Value inserted: 574
  Value inserted: 533
  Value inserted: 148
  Value inserted: 707
  Value inserted: 701
  Value inserted: 715
  Value inserted: 735
                                                 .--------------------------------(309)---------------------------------------------------------------------------------------.  
                             .-----------------(189)-----------------.                                            .---------------------------------------------------------  (704)----------------------------------------------------.
              .------------(118)-------.                   .-------(294)-------.                   .------------(452)----------------------.                                                                       .-----------------(846)------------.
         .--(011)-------.         .--(148)--.         .--(225)--.         .--(300)            .--(382)--.                   .------------(549)-----------------.                               .-----------------(770)-------.              .-------(891)--.
    .--(006)       .--(065)     (124)     (179)     (217)     (278)     (298)            .--(369)     (390)--.         .--(526)-------.              .-------(645)--.                     .--(721)-------.              .--(783)--.       (867)--.       (995)
  (002)          (056)                                                                 (321)               (422)     (468)       .--(543)       .--(574)--.       (689)--.           .--(715)       .--(739)--.       (775)     (804)          (876)
                                                                                                                               (533)          (568)     (586)          (701)       (707)          (735)     (768)
  
  (2587 chars long)
  [stderr]: [Anything]
  (0 chars long)
  ```
  + __File__: [121-fail_main3.c](121-fail_main3.c)
  
  __Reason__: Right left case
  ```
  [Expected]
  Value inserted: 98
  Value inserted: 110
  Value inserted: 100
    .--(100)--.
  (098)     (110)
  
  (89 chars long)
  [stderr]: [Anything]
  (0 chars long)
  ```
  + __File__: [121-fail_main4.c](121-fail_main4.c)
  
  __Reason__:  Left right case
  ```
  [Expected]
  Value inserted: 98
  Value inserted: 90
  Value inserted: 95
    .--(095)--.
  (090)     (098)
  
  (87 chars long)
  [stderr]: [Anything]
  (0 chars long)
  ```
