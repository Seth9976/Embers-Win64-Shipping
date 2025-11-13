// 函数: sub_141d93ca0
// 地址: 0x141d93ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143239228
arg1[1] = *arg2
void* rax_1 = arg2[1]
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[3].d = arg3
__builtin_memset(arg1 + 0x1c, 0, 0x14)
*arg1 = &data_143239530
arg1[6] = 0
arg1[7].d = 0
__builtin_memset(&arg1[8], 0, 0x24)
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf].d = 0xffffffff
__builtin_memset(&arg1[0x10], 0, 0x40)
arg1[0x18] = *arg4
arg1[0x1a] = arg4[2]
arg4[2] = 0
*(arg1 + 0xe0) = *(arg4 + 0x20)
*(arg1 + 0xf0) = *(arg4 + 0x30)

if (arg1[0x18] != 0)
    *arg4 = 0

arg1[0x20] = *arg5
arg1[0x22] = arg5[2]
arg5[2] = 0
*(arg1 + 0x120) = *(arg5 + 0x20)
*(arg1 + 0x130) = *(arg5 + 0x30)

if (arg1[0x20] != 0)
    *arg5 = 0

return arg1
