.global _start
_start:
  stmfd sp!,{r1-r12,lr}
  bl main
  ldmfd sp!,{r1-r12,lr}
  bx lr
