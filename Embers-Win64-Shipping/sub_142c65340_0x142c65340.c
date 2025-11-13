// 函数: sub_142c65340
// 地址: 0x142c65340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg2

if (arg2 == 1 || (arg2 == 2 && (*(*(arg1 + 0x438) + 0x80) & 0x200) == 0))
    arg2.b = 1
else
    arg2.b = 0

if ((r8 != 2 || (*(*(arg1 + 0x438) + 0x80) & 0x200) == 0) && arg2.b != *(arg1 + 0x3f1))
    *(arg1 + 0x3f1) = arg2.b
