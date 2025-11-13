// 函数: sub_141fed5d0
// 地址: 0x141fed5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    if (arg2 == 1)
        int64_t rcx = sx.q(arg3) * 0x2c
        *(*(arg1 + 0x10) + rcx + 0x14) = arg4
        *(*(arg1 + 0x10) + rcx + 0x20) = arg5
        *(arg1 + 8) |= 2
        return 
    
    if (arg2 == 2)
        int64_t rcx_1 = sx.q(arg3) * 0x2c
        *(*(arg1 + 0x10) + rcx_1 + 0x18) = arg4
        *(*(arg1 + 0x10) + rcx_1 + 0x24) = arg5
        *(arg1 + 8) |= arg2.b
        return 
else
    int64_t rdx = sx.q(arg3) * 0x2c
    *(*(arg1 + 0x10) + rdx + 0x10) = arg4
    *(*(arg1 + 0x10) + rdx + 0x1c) = arg5

*(arg1 + 8) |= 2
