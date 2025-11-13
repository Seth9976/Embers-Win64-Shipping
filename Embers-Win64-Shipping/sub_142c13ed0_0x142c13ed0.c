// 函数: sub_142c13ed0
// 地址: 0x142c13ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg2

if (arg3 != 0)
    uint64_t i_2 = zx.q(arg3)
    uint64_t i
    
    do
        uint32_t r10_1 = zx.d(*(rcx + 1))
        rcx += zx.q(arg4)
        *arg1 |= 1 << ((r10_1 & 0x1f) u% 0x20)
        i = i_2
        i_2 -= 1
    while (i != 1)
    
    if (arg3 != 0)
        uint64_t i_3 = zx.q(arg3)
        uint64_t i_1
        
        do
            uint32_t rax_1 = zx.d(*(arg2 + 1))
            uint32_t rcx_1 = zx.d(*arg2)
            arg2 += zx.q(arg4)
            arg1[1] |= 1 << ((((rcx_1 << 8) + rax_1) u>> 9 & 0x1f) u% 0x20)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

int32_t result
result.b = 1
return result
