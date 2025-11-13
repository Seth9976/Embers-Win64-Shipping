// 函数: sub_142aea9e0
// 地址: 0x142aea9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s<= 0 && (*(arg2 + 8) & 1) != 0)
    int32_t* rax = sub_142aead70(arg1, 0, arg3)
    
    if (*arg3 s<= 0)
        rax[2] = 4
        *(rax + 0x70) = 0
        *(rax + 0x38) = &data_14365b6a0
        *(rax + 0x48) = &data_14365b710
        *(rax + 0x30) = &data_14365b710
        __builtin_memset(&rax[7], 0, 0x14)
        *(rax + 0x10) = 0
    
    *arg3 = 1
    return arg1

int32_t* rax_2 = sub_142aead70(arg1, 0, arg3)

if (*arg3 s<= 0)
    *(rax_2 + 0x48) = arg2
    *(rax_2 + 0x38) = &data_14365b630
    rax_2[2] = 4
    char rax_3 = (*(arg2 + 8)).b
    void* rax_4
    
    if ((rax_3 & 0x11) == 0)
        rax_4 = arg2 + 0xa
        
        if ((rax_3 & 2) == 0)
            rax_4 = *(arg2 + 0x18)
    else
        rax_4 = nullptr
    
    *(rax_2 + 0x30) = rax_4
    int16_t rax_5 = *(arg2 + 8)
    int32_t rdx_2
    
    if (rax_5 s< 0)
        rdx_2 = *(arg2 + 0xc)
    else
        rdx_2 = sx.d(rax_5) s>> 5
    
    *(rax_2 + 0x10) = sx.q(rdx_2)
    rax_2[0xb] = rdx_2
    *(rax_2 + 0x20) = 0
    rax_2[7] = rdx_2

return rax_2
