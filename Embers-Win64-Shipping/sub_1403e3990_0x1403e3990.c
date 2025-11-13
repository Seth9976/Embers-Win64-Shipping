// 函数: sub_1403e3990
// 地址: 0x1403e3990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x90c) != *(arg1 + 0x10b0))
    *(arg1 + 0x1060) = *(arg1 + 0x918) << 7
    *(arg1 + 0x10a8) = 0x10000
    *(arg1 + 0x10ac) = 0x10000
    int32_t rax_3 = *(arg1 + 0x90c)
    *(arg1 + 0x10b8) = 0x14
    *(arg1 + 0x10b4) = 2
    *(arg1 + 0x10b0) = rax_3

if (arg4 == 0)
    return sub_1403e4720(arg1, arg2) __tailcall

int64_t result = sub_1403e3a50(arg1, arg2, arg3)
*(arg1 + 0x1058) += 1
return result
