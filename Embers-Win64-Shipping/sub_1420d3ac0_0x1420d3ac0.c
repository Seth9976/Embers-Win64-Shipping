// 函数: sub_1420d3ac0
// 地址: 0x1420d3ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t rdx = sx.q(arg3) * 0x38
    *(*(arg1 + 0x48) + rdx + 0x14) = arg4
    *(*(arg1 + 0x48) + rdx + 0x24) = arg5
    return 

if (arg2 == 1)
    int64_t rcx = sx.q(arg3) * 0x38
    *(*(arg1 + 0x48) + rcx + 0x18) = arg4
    *(*(arg1 + 0x48) + rcx + 0x28) = arg5
    return 

if (arg2 == 2)
    int64_t rcx_1 = sx.q(arg3) * 0x38
    *(*(arg1 + 0x48) + rcx_1 + 0x1c) = arg4
    *(*(arg1 + 0x48) + rcx_1 + 0x2c) = arg5
    return 

if (arg2 != 3)
    return 

int64_t rcx_2 = sx.q(arg3) * 0x38
*(*(arg1 + 0x48) + rcx_2 + 0x20) = arg4
*(*(arg1 + 0x48) + rcx_2 + 0x30) = arg5
