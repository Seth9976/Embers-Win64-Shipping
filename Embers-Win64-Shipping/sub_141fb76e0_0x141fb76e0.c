// 函数: sub_141fb76e0
// 地址: 0x141fb76e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_10 = 0
sub_14214c360(arg1, arg2, arg3, arg4, arg5)
int32_t rax_1 = arg6

if (rax_1 == 0 || rax_1 s> 0x800)
    rax_1 = 0x800

*(arg1 + 0xa4) |= 3
arg1[0x14].d = rax_1
jump(*(*arg1 + 0x298))
