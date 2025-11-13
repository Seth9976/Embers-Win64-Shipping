// 函数: sub_142420190
// 地址: 0x142420190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0xc) s<= 0)
    return 

do
    int16_t* rax = *arg2
    int64_t r8_1 = sx.q(arg2[1].d)
    int64_t rsi_2 = r8_1 * 2
    int16_t j = *(arg1 + 8) + i.w
    int16_t j_1 = j
    void* rcx = &rax[rsi_2 * 4]
    
    if (rax == rcx)
    label_1424201f0:
        int32_t rax_1 = (r8_1 + 1).d
        int64_t var_24_1 = 0xf
        char var_1c_1 = 0
        arg2[1].d = rax_1
        
        if (rax_1 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        *(*arg2 + (rsi_2 << 3)) = j.o
    else
        while (*rax != j)
            rax = &rax[8]
            
            if (rax == rcx)
                goto label_1424201f0
        
        *(rax + 4) = 0xf
    
    i += 1
while (i s< *(arg1 + 0xc))
