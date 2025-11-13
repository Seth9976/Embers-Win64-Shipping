// 函数: sub_140342ad0
// 地址: 0x140342ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

void* rcx = arg1 + 0x20
int64_t i = 0

do
    uint64_t rax = zx.q(*(arg3 + (i << 1))) << 6
    float zmm0[0x4] = *(arg2 + rax)
    int32_t zmm1[0x4] = *(arg2 + rax + 0x10)
    float zmm2[0x4] = *(arg2 + rax + 0x20)
    int32_t zmm3[0x4] = *(arg2 + rax + 0x30)
    float temp0_1[0x4] = _mm_unpacklo_ps(zmm0, zmm1[0].q)
    float temp0_2[0x4] = _mm_unpackhi_ps(zmm0, zmm1)
    zmm1 = _mm_unpacklo_ps(zmm2, zmm3[0].q)
    float temp0_4[0x4] = _mm_unpackhi_ps(zmm2, zmm3)
    zmm0 = temp0_2[0].q | temp0_4[0].q << 0x40
    *(rcx - 0x20) = temp0_1[0].q | zmm1[0].q << 0x40
    zmm1[0].q = temp0_1 u>> 0x40
    *(rcx - 0x10) = zmm1
    *rcx = zmm0
    i += 1
    rcx += 0x30
while (zx.q(arg4) != i)
