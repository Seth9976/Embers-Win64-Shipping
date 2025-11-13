// 函数: sub_142c8f9d0
// 地址: 0x142c8f9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0

if (arg3 == 0)
    return 3

if (*(arg1 + 0x18) != 0)
    *(arg1 + 0x18) = 0
    *(arg1 + 0x10) = 0

if (strncmp(arg2, U"*", arg3) != 0)
    int64_t arg_18
    int32_t rax_2 = sub_142c8f8d0(arg2, arg3, &arg_18)
    
    if (rax_2 == 0 || arg_18 != arg3)
        rbx = 3
    else
        *(arg1 + 0x10) |= rax_2
else
    *(arg1 + 0x10) = 0xffffffdf

return zx.q(rbx)
