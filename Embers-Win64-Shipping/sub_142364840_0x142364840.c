// 函数: sub_142364840
// 地址: 0x142364840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = *(arg1 + 0x208) f* *(arg2 + 0x10)
return _mm_max_ss((*(arg1 + 0x20c) f* *(arg2 + 0x14) - zmm1) * arg3 + zmm1, 0)
