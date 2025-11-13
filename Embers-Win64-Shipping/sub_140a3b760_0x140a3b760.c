// 函数: sub_140a3b760
// 地址: 0x140a3b760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e5d058
char rdx = arg5
arg1[4] = 0
arg1[6] = 0
arg1[0xc].d = 0
*(arg1 + 0x64) = rdx
*(arg1 + 0x65) = arg6 != 0

if (arg4 != 0)
    sub_140a3c510(&arg1[4], arg4)
    rdx = *(arg1 + 0x64)

int64_t rax_1 = -1

if (rdx == 0)
    rax_1 = arg6

arg1[2] = rax_1
*arg1 = &data_142e5d118
arg1[0xe] = arg2
arg1[0xd] = 0
arg1[0xf] = arg3
return arg1
