// 函数: sub_142ac46a0
// 地址: 0x142ac46a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    return 

char rax_1

if (*(arg1 + 0x49) == 0 || *(arg1 + 0x59) == 0)
    rax_1 = 0
else
    rax_1 = 1

*(arg1 + 0x68) = rax_1

if (rax_1 != 0 && *(arg1 + 0x74) == 0)
    *(arg1 + 0x74) = 0x36ee80

uint64_t rax = zx.q(*(arg1 + 0x59))

if (rax.b == 0)
    return 

char r9_1 = *(arg1 + 0x58)

if (r9_1 u> 0xb || *(arg1 + 0x5c) u> 0x5265c00 || *(arg1 + 0x54) u> 2)
    *arg2 = 1
    return 

char r8_1 = *(arg1 + 0x5a)

if (r8_1 != 0)
    if (r8_1 s<= 0)
        *(arg1 + 0x5a) = neg.b(r8_1)
        
        if (rax.b s<= 0)
            rax.b = neg.b(rax.b)
            *(arg1 + 0x70) = 4
            *(arg1 + 0x59) = rax.b
        else
            *(arg1 + 0x70) = 3
    else
        *(arg1 + 0x70) = 2
    
    if (*(arg1 + 0x5a) s<= 7)
        goto label_142ac4740
    
    *arg2 = 1
else
    *(arg1 + 0x70) = 1
label_142ac4740:
    
    if (*(arg1 + 0x70) != 2)
        char r8_2 = *(arg1 + 0x59)
        
        if (r8_2 s< 1 || r8_2 s> *(sx.q(r9_1) + &data_143655c88))
            *arg2 = 1
    else
        rax.b = *(arg1 + 0x59) + 5
        
        if (rax.b u> 0xa)
            *arg2 = 1
