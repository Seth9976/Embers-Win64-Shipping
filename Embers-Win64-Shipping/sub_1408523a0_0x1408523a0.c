// 函数: sub_1408523a0
// 地址: 0x1408523a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return ((zx.q(arg4) ^ 1) << 4) + *(arg1 + 0x28)

if (arg2 == 1)
    return ((zx.q(arg4) ^ 1) << 5) + *(arg1 + 0x30)

if (arg2 == 2)
    int64_t rax_9 = 0x1f0
    
    if (arg4 != 0)
        rax_9 = 0
    
    return rax_9 + *(arg1 + 0x38)

if (arg2 == 3)
    return ((zx.q(arg4) ^ 1) << 5) + *(arg3 + 0xb0)

if (arg2 != 4)
    return 0

if (arg4 == 0)
    return zx.q(*(*(arg3 + 0xc0) + 0x20)) + *(arg3 + 0xb8)

return *(arg3 + 0xb8)
