// 函数: sub_140edd060
// 地址: 0x140edd060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1

if (*(arg1 + 0x3f8) != 0)
    rax_1 = data_1439ae51c

if (*(arg1 + 0x3f8) == 0 || *(arg1 + 0x3f9) != 0)
    rax_1 = data_1439ae51d

*arg2 = rax_1
return arg2
