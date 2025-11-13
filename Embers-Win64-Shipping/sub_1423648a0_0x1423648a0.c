// 函数: sub_1423648a0
// 地址: 0x1423648a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = *(arg1 + 0x200) f* *(arg2 + 0x18)
return _mm_max_ss((*(arg1 + 0x204) f* *(arg2 + 0x1c) - zmm1) * arg3 + zmm1, 0)
