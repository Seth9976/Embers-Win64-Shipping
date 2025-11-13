// 函数: sub_142623280
// 地址: 0x142623280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm4[0x4] = *(arg1 + 8)
uint32_t zmm5[0x4] = *arg2
uint32_t zmm2[0x4] = zmm5
int128_t zmm8 = *arg1
zmm2[0] = zmm2[0] f- zmm8.d
uint32_t zmm9[0x4] = *arg3
uint32_t zmm10[0x4] = *(arg2 + 8)
zmm9[0] = zmm9[0] f- zmm8.d
uint32_t zmm11[0x4] = *(arg3 + 8)
zmm10[0] = zmm10[0] f- zmm4[0]
float zmm3 = zmm11[0] f- zmm4[0]
zmm9[0] = zmm9[0] f* zmm10[0]
zmm2[0] = zmm2[0] f* zmm3
zmm2[0] = zmm2[0] f- zmm9[0]
uint32_t* result

if (__andps_xmmxud_memxud(zmm2, data_142d3f770)[0] f<= 9.99999997e-07f)
    *arg4 = zmm8.d
    arg4[2] = *(arg1 + 8)
    *arg5 = 0
    result.b = 0
else
    zmm4[0] = zmm4[0] f* zmm4[0]
    zmm4[0] = zmm4[0] f- zmm10[0]
    zmm10[0] = zmm10[0] f- zmm11[0]
    zmm5[0] = zmm5[0] f* zmm5[0]
    zmm10[0] = zmm10[0] f* zmm10[0]
    zmm8.d = zmm8.d f* zmm8.d
    zmm10[0] = zmm10[0] f+ zmm5[0]
    zmm9[0] = zmm9[0] f* zmm9[0]
    zmm5 = 0x3f000000
    zmm8.d = zmm8.d f+ zmm4[0]
    zmm5[0] = 0.5f f/ zmm2[0]
    zmm3 = zmm3 f* zmm10[0]
    zmm11[0] = zmm11[0] f* zmm11[0]
    zmm10[0] = zmm10[0] f* zmm8.d
    zmm9[0] = zmm9[0] f+ zmm11[0]
    zmm10[0] = zmm10[0] f+ zmm3
    zmm4[0] = zmm4[0] f* zmm9[0]
    zmm10[0] = zmm10[0] f+ zmm4[0]
    zmm10[0] = zmm10[0] f* zmm5[0]
    *arg4 = zmm10[0]
    uint32_t zmm1[0x4] = *arg3
    zmm2 = *arg1
    zmm4 = zmm1
    zmm3 = *arg2
    zmm2[0] = zmm2[0] f- zmm1[0]
    zmm4[0] = zmm4[0] f- zmm3
    zmm3 = zmm3 f- zmm2[0]
    zmm2[0] = zmm2[0] f* zmm10[0]
    zmm4[0] = zmm4[0] f* zmm8.d
    zmm3 = zmm3 f* zmm9[0]
    zmm4[0] = zmm4[0] f+ zmm2[0]
    zmm4[0] = zmm4[0] f+ zmm3
    zmm4[0] = zmm4[0] f* zmm5[0]
    arg4[2] = zmm4[0]
    zmm1 = *arg1
    uint32_t zmm0[0x4] = *(arg1 + 8)
    zmm1[0] = zmm1[0] f- zmm10[0]
    zmm0[0] = zmm0[0] f- zmm4[0]
    zmm1[0] = zmm1[0] f* zmm1[0]
    zmm0[0] = zmm0[0] f* zmm0[0]
    zmm0[0] = zmm0[0] f+ zmm1[0]
    *arg5 = _mm_sqrt_ss(zmm0[0], zmm0[0])[0]
    result.b = 1

return result
