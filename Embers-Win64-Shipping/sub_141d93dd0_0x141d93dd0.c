// 函数: sub_141d93dd0
// 地址: 0x141d93dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143239228
arg1[1] = *arg2
void* rax_1 = arg2[1]
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[3].d = arg3
__builtin_memset(arg1 + 0x1c, 0, 0x14)
*arg1 = &data_143239590
arg1[6] = &data_142d5a028
arg1[7].d = 6
arg1[8] = 0
arg1[9].d = 0
__builtin_memset(&arg1[0xa], 0, 0x24)
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11].d = 0xffffffff
__builtin_memset(&arg1[0x12], 0, 0x50)
arg1[0x1c] = *arg4
arg1[0x1e] = arg4[2]
arg4[2] = 0
*(arg1 + 0x100) = *(arg4 + 0x20)
*(arg1 + 0x110) = *(arg4 + 0x30)

if (arg1[0x1c] != 0)
    *arg4 = 0

arg1[0x24] = *arg5
arg1[0x26] = arg5[2]
arg5[2] = 0
*(arg1 + 0x140) = *(arg5 + 0x20)
*(arg1 + 0x150) = *(arg5 + 0x30)

if (arg1[0x24] != 0)
    *arg5 = 0

return arg1
