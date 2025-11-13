// 函数: sub_142c2a570
// 地址: 0x142c2a570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg2 + 0x10)

if (r8 != (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3)))
    uint32_t rax
    rax.b = 0
    return rax

int32_t rax_1 = 1

if (r8 u> 1)
    do
        void* rcx_6
        
        if (rax_1 u>= (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3)) || rax_1 == 0)
            rcx_6 = &data_14369a5d0
        else
            rcx_6 = arg1 + 2 + ((zx.q(rax_1 - 1) + 1) << 1)
        
        if (*(*(arg2 + 8) + (zx.q(rax_1) << 2)) != (zx.d(*rcx_6) << 8) + zx.d(*(rcx_6 + 1)))
            rax_1.b = 0
            return rax_1
        
        rax_1 += 1
    while (rax_1 u< r8)

rax_1.b = 1
return rax_1
