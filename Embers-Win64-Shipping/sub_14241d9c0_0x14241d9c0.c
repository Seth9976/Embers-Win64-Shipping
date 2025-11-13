// 函数: sub_14241d9c0
// 地址: 0x14241d9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0xc) s<= 0)
    return 

do
    int16_t* rax = *arg2
    int64_t r8 = sx.q(arg2[1].d)
    int64_t rsi_2 = r8 * 2
    int16_t j = *(arg1 + 8) + i.w
    int16_t j_1 = j
    void* rdx = &rax[rsi_2 * 4]
    
    if (rax == rdx)
    label_14241da20:
        rax = nullptr
    else
        while (*rax != j)
            rax = &rax[8]
            
            if (rax == rdx)
                goto label_14241da20
    
    int32_t var_24_1 = *arg3
    int32_t var_20_1 = arg3[1]
    char var_1c_1 = arg3[2].b
    
    if (rax == 0)
        int32_t rax_1 = (r8 + 1).d
        arg2[1].d = rax_1
        
        if (rax_1 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        *(*arg2 + (rsi_2 << 3)) = j.o
    else if (*(rax + 4) == 0xf)
        *rax = j.o
    
    i += 1
while (i s< *(arg1 + 0xc))
