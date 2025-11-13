// 函数: sub_142047e40
// 地址: 0x142047e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2[1].d
*(arg1 + 8) = *arg5
*(arg1 + 0x18) = arg5[1].q
arg1[8] = *(arg5 + 0x18)
arg1[0xc] = arg6
arg1[0xe] = arg8
arg1[0x10].b = arg9
arg1[0xf] = arg7.d
__builtin_memset(&arg1[0x12], 0, 0x28)
*(arg1 + 0x68) = *arg2
*arg2 = 0
arg1[0x1c] = arg2[1].d
arg1[0x1d] = *(arg2 + 0xc)
arg2[1] = 0
*(arg1 + 0x78) = 0
*(arg1 + 0x78) = *arg3
*arg3 = 0
arg1[0x20] = arg3[1].d
arg1[0x21] = *(arg3 + 0xc)
arg3[1] = 0
arg1[0x22] = arg4
__builtin_memset(&arg1[0x24], 0, 0x30)
int64_t rcx = *arg2

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *arg3

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return arg1
