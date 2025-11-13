// 函数: sub_140ad6430
// 地址: 0x140ad6430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4] = *arg1
uint32_t temp0[0x4] = _mm_and_ps(*(arg1 + 8), 0x7fffffff)
uint32_t temp0_1[0x4] = _mm_and_ps(zmm0, 0x7fffffff)
uint32_t temp0_2[0x4]

if (not(temp0[0] f<= temp0_1[0]))
    temp0_2 = _mm_and_ps(*(arg1 + 4), 0x7fffffff)

int32_t var_50
uint32_t zmm6[0x4]

if (temp0[0] f<= temp0_1[0] || temp0[0] f<= temp0_2[0])
    zmm6 = 0x3f800000
    zmm0 = zx.o(0)
    var_50 = 0x3f800000
else
    zmm6 = 0x3f800000
    zmm0 = 0x3f800000
    var_50 = 0

*arg2 = (_mm_unpacklo_ps(zmm0, 0)).q
arg2[2] = var_50
uint32_t zmm2[0x4] = *arg1
uint32_t zmm8[0x4] = arg2[1]
uint32_t zmm7[0x4] = *arg2
uint32_t zmm9[0x4] = arg2[2]
uint32_t zmm4[0x4] = *(arg1 + 4)
uint32_t zmm5[0x4] = *(arg1 + 8)
zmm4[0] = zmm4[0] f* zmm8[0]
zmm5[0] = zmm5[0] f* zmm9[0]
zmm2[0] = zmm2[0] f* zmm7[0]
zmm2[0] = zmm2[0] f+ zmm4[0]
zmm2[0] = zmm2[0] f+ zmm5[0]
zmm2[0] = zmm2[0] f* zmm2[0]
zmm4[0] = zmm4[0] f* zmm2[0]
zmm7[0] = zmm7[0] f- zmm2[0]
zmm5[0] = zmm5[0] f* zmm2[0]
zmm8[0] = zmm8[0] f- zmm4[0]
zmm9[0] = zmm9[0] f- zmm5[0]
zmm7[0] = zmm7[0] f* zmm7[0]
zmm8[0] = zmm8[0] f* zmm8[0]
zmm9[0] = zmm9[0] f* zmm9[0]
zmm8[0] = zmm8[0] f+ zmm7[0]
zmm8[0] = zmm8[0] f+ zmm9[0]

if (zmm8[0] f== zmm6[0])
    goto label_140ad65c5

uint32_t var_58
uint32_t var_50_1

if (zmm8[0] f>= 9.99999994e-09f)
    zmm4 = 0x3f000000
    zmm5 = _mm_rsqrt_ss(zmm8[0], zmm8[0])
    zmm2 = 0x3f000000
    zmm8[0] = zmm8[0] f* 0.5f
    zmm5[0] = zmm5[0] f* zmm5[0]
    zmm8[0] = zmm8[0] f* zmm5[0]
    zmm2[0] = 0.5f f- zmm8[0]
    zmm5[0] = zmm5[0] f* zmm2[0]
    zmm5[0] = zmm5[0] f+ zmm5[0]
    zmm5[0] = zmm5[0] f* zmm5[0]
    zmm8[0] = zmm8[0] f* zmm5[0]
    zmm4[0] = 0.5f f- zmm8[0]
    zmm5[0] = zmm5[0] f* zmm4[0]
    zmm5[0] = zmm5[0] f+ zmm5[0]
    zmm7[0] = zmm7[0] f* zmm5[0]
    zmm8[0] = zmm8[0] f* zmm5[0]
    zmm9[0] = zmm9[0] f* zmm5[0]
label_140ad65c5:
    var_50_1 = zmm9[0]
    uint32_t var_54_1 = zmm8[0]
    var_58 = zmm7[0]
else
    var_58 = data_143dbb1f8[0]
    var_50_1 = data_143dbb200[0]
    uint32_t var_54 = data_143dbb1fc[0]

*arg2 = var_58.q
arg2[2] = var_50_1
zmm6 = *(arg1 + 4)
zmm4 = *(arg1 + 8)
zmm6[0] = zmm6[0] f* arg2[2]
zmm4[0] = zmm4[0] f* arg2[1]
zmm2 = *arg1
zmm6[0] = zmm6[0] f* *arg2
zmm2[0] = zmm2[0] f* arg2[2]
zmm4[0] = zmm4[0] f- zmm6[0]
zmm4[0] = zmm4[0] f* *arg2
zmm2[0] = zmm2[0] f* arg2[1]
zmm2[0] = zmm2[0] f- zmm4[0]
zmm6[0] = zmm6[0] f- zmm2[0]
zmm0 = _mm_unpacklo_ps(zmm4, zmm2[0].q)
uint32_t result = zmm6[0]
*arg3 = zmm0.q
arg3[1].d = result
return result
