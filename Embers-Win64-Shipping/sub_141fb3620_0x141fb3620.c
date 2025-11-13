// 函数: sub_141fb3620
// 地址: 0x141fb3620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x6e8)

if (rcx != 0)
    jump(*(*rcx + 0x2a8))

void* result = sub_1421673c0(arg1, arg2)

if (result != 0)
    float zmm0[0x2] = *(arg1 + 0x750)
    zmm0[0] = zmm0[0] - 0.00999999978f
    *(result + 0x10) = _mm_cvtps_pd(zmm0)

return result
