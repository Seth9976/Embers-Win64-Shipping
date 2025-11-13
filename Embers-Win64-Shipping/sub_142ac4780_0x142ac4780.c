// 函数: sub_142ac4780
// 地址: 0x142ac4780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    return 

uint64_t rax = zx.q(*(arg1 + 0x49))
char r8_1

if (rax.b == 0 || *(arg1 + 0x59) == 0)
    r8_1 = 0
else
    r8_1 = 1

*(arg1 + 0x68) = r8_1

if (r8_1 != 0 && *(arg1 + 0x74) == 0)
    *(arg1 + 0x74) = 0x36ee80

if (rax.b == 0)
    return 

char r9_1 = *(arg1 + 0x48)

if (r9_1 u> 0xb || *(arg1 + 0x4c) u> 0x5265c00 || *(arg1 + 0x50) u> 2)
    *arg2 = 1
    return 

char r8_2 = *(arg1 + 0x4a)

if (r8_2 != 0)
    if (r8_2 s<= 0)
        *(arg1 + 0x4a) = neg.b(r8_2)
        
        if (rax.b s<= 0)
            rax.b = neg.b(rax.b)
            *(arg1 + 0x6c) = 4
            *(arg1 + 0x49) = rax.b
        else
            *(arg1 + 0x6c) = 3
    else
        *(arg1 + 0x6c) = 2
    
    if (*(arg1 + 0x4a) s<= 7)
        goto label_142ac4822
    
    *arg2 = 1
else
    *(arg1 + 0x6c) = 1
label_142ac4822:
    
    if (*(arg1 + 0x6c) != 2)
        char r8_3 = *(arg1 + 0x49)
        
        if (r8_3 s< 1 || r8_3 s> *(sx.q(r9_1) + &data_143655c88))
            *arg2 = 1
    else
        rax.b = *(arg1 + 0x49) + 5
        
        if (rax.b u> 0xa)
            *arg2 = 1
