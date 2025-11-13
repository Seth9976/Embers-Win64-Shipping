// 函数: sub_14241daa0
// 地址: 0x14241daa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void var_28
int64_t* rax = sub_1423fb920(&var_28, arg1)
int32_t i = 0
int64_t* rbp_1 = rax

if (*(rax + 0xc) s<= 0)
    return 

do
    rax = *arg2
    int64_t r8 = sx.q(arg2[1].d)
    int64_t rsi_2 = r8 * 2
    int16_t j = rbp_1[1].w + i.w
    int16_t j_1 = j
    void* rdx_1 = &rax[rsi_2]
    
    if (rax == rdx_1)
    label_14241db10:
        rax = nullptr
    else
        while (*rax != j)
            rax = &rax[2]
            
            if (rax == rdx_1)
                goto label_14241db10
    
    int32_t var_34_1 = *arg3
    int32_t var_30_1 = arg3[1]
    char var_2c_1 = arg3[2].b
    
    if (rax == 0)
        int32_t rax_1 = (r8 + 1).d
        arg2[1].d = rax_1
        
        if (rax_1 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        *(*arg2 + (rsi_2 << 3)) = j.o
    else if (*(rax + 4) == 0xf)
        *rax = j.o
    
    i += 1
while (i s< *(rbp_1 + 0xc))
