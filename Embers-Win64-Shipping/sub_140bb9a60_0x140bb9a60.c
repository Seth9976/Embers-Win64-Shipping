// 函数: sub_140bb9a60
// 地址: 0x140bb9a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((data_143de5452 != 0 || *(arg1 + 0x114) != 0) && *(arg1 + 0x110) s< 4
        && arg2 s>= *(arg1 + 0x100))
    sub_140ba8c30(arg1)

if (arg2 s< *(arg1 + 0xe0) || arg2 s>= *(arg1 + 0xe8))
    int64_t rax_4 = *(arg1 + 8)
    __builtin_memset(rax_4, 0, 0x18)
    *(arg1 + 0xd8) = arg2
    return rax_4

*(*(arg1 + 8) + 0x10) = *(arg1 + 0xc8)
**(arg1 + 8) = *(arg1 + 0xc8) - *(arg1 + 0xe0) + arg2
*(*(arg1 + 8) + 8) = *(arg1 + 0xe8) - *(arg1 + 0xe0) + *(arg1 + 0xc8)
int64_t rax_3 = *(arg1 + 0xe0)
*(arg1 + 0xd8) = rax_3
return rax_3
