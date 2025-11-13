// 函数: sub_142364870
// 地址: 0x142364870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = *(arg1 + 0x1f8) f* *(arg2 + 8)
return _mm_max_ss((*(arg1 + 0x1fc) f* *(arg2 + 0xc) - zmm1) * arg3 + zmm1, 0)
