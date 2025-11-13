// 函数: sub_141460f30
// 地址: 0x141460f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp1 = mods.dp.d(sx.q(arg2), arg4)
uint64_t rbx_1 = zx.q(temp1) << 4
uint64_t rdi = zx.q(temp1)
sub_1413de930(arg1 + 8 + rbx_1)
*(rbx_1 + arg1 + 8) = *arg3
*(rbx_1 + arg1 + 0x10) = arg3[1]
*arg3 = 0
arg3[1] = 0
*(arg1 + (rdi << 2) + 0x38) = arg2
*(rdi + arg1 + 0x61) = arg5
*(arg1 + 0x64) = arg6
return arg6
