// 函数: sub_14103f070
// 地址: 0x14103f070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
*arg1 = &data_142f01e18
arg1[2].d = arg2[1].d
*(arg1 + 0x14) = *(arg2 + 0xc)
arg1[3].d = arg2[2].d
*(arg1 + 0x1c) = *(arg2 + 0x14)
void* rax_4 = *arg2
arg1[4] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

__builtin_memset(&arg1[6], 0, 0x20)
*(arg1 + 0x44) = *(arg2 + 0x2c)
arg1[8].d = arg2[5].d
*(arg1 + 0x3c) = *(arg2 + 0x24)
arg1[7].d = (&data_1439c85fc)[sx.q(*(arg1[4] + 0x3c)) * 0xa]
arg1[9].d = arg2[6].d
void* rax_12 = arg2[9]
arg1[5] = rax_12
arg1[6] = *(rax_12 + 0x50)
return arg1
