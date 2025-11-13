// 函数: sub_141764a70
// 地址: 0x141764a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg4)
float zmm2 = *(*(arg2 + 0x78) + (r8 << 2))
int64_t r9 = r8 * 3
int64_t result = *(arg2 + 0x60)
float zmm1 = *(arg1 + 0xc) * zmm2 f+ *(result + (r9 << 2) + 4)
float zmm3 = *(arg1 + 0x10) * zmm2 f+ *(result + (r9 << 2) + 8)
*(result + (r9 << 2)) = zmm2 f* *(arg1 + 8) f+ *(result + (r9 << 2))
*(result + (r9 << 2) + 4) = zmm1
*(result + (r9 << 2) + 8) = zmm3
return result
