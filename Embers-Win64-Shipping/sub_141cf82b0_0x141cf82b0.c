// 函数: sub_141cf82b0
// 地址: 0x141cf82b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e5d058
uint64_t rbx = arg2
arg2.b = 0
arg1[4] = 0
arg1[6] = 0
arg1[0xc].d = 0
*(arg1 + 0x64) = 0
*(arg1 + 0x65) = arg8 != 0

if (arg4 != 0)
    sub_140a3c510(&arg1[4], arg4)
    arg2 = zx.q(*(arg1 + 0x64))

int64_t rax_1 = -1

if (arg2.b == 0)
    rax_1 = arg8

arg1[2] = rax_1
arg1[0xf] = 0
arg1[0x10].d = 0
arg1[0xe] = -1
*arg1 = &data_14321d168
arg1[0xd] = &data_14321d180
arg1[0x11] = arg5
arg1[0x12] = arg6
arg1[0x14] = arg10
arg1[0x16].d = arg7
*(arg1 + 0xb6) = arg9
arg1[0x13] = 0
arg1[0x15] = rbx
*(arg1 + 0xb4) = 0x101
return arg1
