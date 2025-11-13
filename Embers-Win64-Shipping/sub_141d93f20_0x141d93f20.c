// 函数: sub_141d93f20
// 地址: 0x141d93f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143239228
arg1[1] = *arg2
void* rax_1 = arg2[1]
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[3].d = arg3
__builtin_memset(arg1 + 0x1c, 0, 0x14)
*arg1 = &data_143239750
arg1[6] = &data_1432388d0
arg1[7].d = 6
arg1[8] = &data_143238880
__builtin_memset(&arg1[9], 0, 0x1c)
__builtin_memset(&arg1[0xd], 0, 0x24)
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14].d = 0xffffffff
__builtin_memset(&arg1[0x15], 0, 0x50)
arg1[0x20] = *arg4
arg1[0x22] = arg4[2]
arg4[2] = 0
*(arg1 + 0x120) = *(arg4 + 0x20)
*(arg1 + 0x130) = *(arg4 + 0x30)

if (arg1[0x20] != 0)
    *arg4 = 0

arg1[0x28] = *arg5
arg1[0x2a] = arg5[2]
arg5[2] = 0
*(arg1 + 0x160) = *(arg5 + 0x20)
*(arg1 + 0x170) = *(arg5 + 0x30)

if (arg1[0x28] != 0)
    *arg5 = 0

return arg1
