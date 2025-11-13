// 函数: sub_1417eac40
// 地址: 0x1417eac40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*(arg1 + 0x10) = data_143dbb0c0
*(arg1 + 0x20) = data_143dbb0d0
*(arg1 + 0x30) = data_143dbb0e0
arg1[0x10] = 0x3f800000
*(arg1 + 0x44) = 0x3f800000
arg1[0x13] = 0
arg1[0x14] = 0x3f800000
arg1[0x15] = 0x3f800000
arg1[0x16].b = 1
*(arg1 + 0x5c) = 0
arg1[0x19] = 0
arg1[0x1a] = 2
__builtin_memset(&arg1[0x1c], 0, 0x14)
void*** rax = j_sub_140a82f30(8)

if (rax == 0)
    *(arg1 + 0x88) = 0
    return arg1

*rax = &data_142fdd540
*(arg1 + 0x88) = rax
return arg1
