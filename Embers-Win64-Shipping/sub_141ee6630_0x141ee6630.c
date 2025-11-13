// 函数: sub_141ee6630
// 地址: 0x141ee6630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(arg1 + 0x148)

if (rax_1 == 0)
    return zx.o(0)

void* rax = *(rax_1 + 0x290)
int32_t zmm1 = *(arg1 + 0x1dc)
float zmm0[0x4] = *(rax + 0x1e0)
float temp0_2[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm0, zmm0, 0x55)[0], zmm0[0])
int32_t temp0_3 = _mm_max_ss(zmm1, 0)
temp0_2[0] = temp0_2[0] f* *(rax + 0x424)
temp0_2[0] = temp0_2[0] f- temp0_3

if (temp0_2[0] < 0.109999999f)
    return 0x3de147ae

return _mm_min_ss(temp0_2[0], temp0_2[0])
