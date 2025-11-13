// 函数: sub_141ee5f20
// 地址: 0x141ee5f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(*(arg1 + 0x10) + 0x290)

if (rcx == 0)
    return zx.o(0)

float zmm0[0x4] = *(rcx + 0x1e0)
float result[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
result[0] = result[0] f* *(rcx + 0x420)
return result
