// 函数: sub_142809f50
// 地址: 0x142809f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142807680(arg1, *(arg1 + 0x18) + arg3)
int32_t rbx = *(arg1 + 0x18)
memcpy(zx.q(rbx) + *(arg1 + 0x20), arg2, arg3)
*(arg1 + 0x18) = rbx + arg3
return zx.q(arg3)
