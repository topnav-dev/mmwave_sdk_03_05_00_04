
# sysdefs.h (Migrating from CSL 2.x to CSL 3.x & code)
---
## static inline uint32_t CSL_FMKR(uint8_t msb, uint8_t lsb, uint32_t val);
```
set value to uint32([msb,lsb])
ex1:
To set prescalar register (PRSC) field in bit positions 0-3 equal to 0x0004 :
h->regs->PRSC = CSL_FMKR(3, 0, 0x0004);
ex2
To set prescalar register (PRSC) field in bit positions 0-7 equal to 0x00040004 :
h->regs->PRSC = CSL_FMKR(3, 0, 0x0004) | CSL_FMKR(4, 7, 0x0004);
```

## static inline uint32_t CSL_FEXTR(uint32_t reg, uint8_t msb, uint8_t lsb);
```
get uint32_t value from uint32([msb,lsb])
ex:
To return the value in prescalar register (PRSC) field between bit positions 0-3 :
return = CSL_FEXTR(h->regs->PRSC, 3, 0);
```

## static inline uint32_t CSL_FINSR(uint32_t reg, uint8_t msb, uint8_t lsb, uint32_t val);
```
ex1:
To set 0x0001 value in PRSC register field between bit positions 0-3 :
CSL_FINSR(h->regs->PRSC, 3, 0, 0x0001);

ex2: (same as CSL_FMKR ex1)
To set 0x0001 value in PRSC register field between bit positions 0-31(uint32_t) :
h->regs->PRSC = CSL_FINSR(h->regs->PRSC, 3, 0, 0x0001);
```

# sys_common.h & sys_common_xwrXXXX.h

# sys_common.xwrXXXX_mss.h

# sys_common.xwrXXXX_dss.h