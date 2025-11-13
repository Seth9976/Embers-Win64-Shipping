// 函数: sub_142bd94a0
// 地址: 0x142bd94a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*(arg1 + 0x10))

if (rax.d != 0)
    *(*(arg1 + 0x18) + rax * 0x18 - 8) = arg5

void arg_8
int32_t result = sub_142bd9f90(arg1 + 0x10, arg6, &arg_8)

if (result != 0)
    return result

return sub_142bda350(arg1 + 0x10, arg2, arg3, arg4, arg6)
