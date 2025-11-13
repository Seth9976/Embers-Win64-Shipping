// 函数: sub_1422313b0
// 地址: 0x1422313b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = arg4[2]
float zmm2[0x4] = zmm1
zmm2[0] = zmm2[0] f* *arg3
float zmm3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm3[0] = zmm3[0] f* arg3[1]
float zmm0[0x4] = _mm_and_ps(zmm2, 0x7fffffff)
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
bool cond:0 = zmm0[0] > 9.99999975e-05f
zmm1[0] = zmm1[0] f* arg3[2]
char rax

if (cond:0)
    rax = 0
else if (_mm_and_ps(zmm3, 0x7fffffff)[0] > 9.99999975e-05f)
    rax = 0
else if (_mm_and_ps(zmm1, 0x7fffffff)[0] > 9.99999975e-05f)
    rax = 0
else
    rax = 1

if (rax != 0)
    zmm2 = 0x3dcccccd
    zmm3 = 0x3dcccccd
    zmm1 = 0x3dcccccd

zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
zmm3 = _mm_and_ps(zmm3, 0x7fffffff)
float temp0_7[0x4] = _mm_min_ss(zmm2[0], zmm3[0])
zmm1 = _mm_and_ps(zmm1, 0x7fffffff)
zmm2 = _mm_min_ss(temp0_7[0], zmm1[0])

if (not(zmm2[0] > 9.99999994e-09f))
    zmm2 = 0x3dcccccd

*arg2 = &data_142e3e610
arg2[1].d = *(arg1 + 8)
*(arg2 + 0xc) = *(arg1 + 0xc)
*(arg2 + 0x14) = *(arg1 + 0x14)
arg2[3].b ^= (*(arg1 + 0x18) ^ arg2[3].b) & 1
arg2[4].d = 6
arg2[5] = arg2
*arg2 = &data_143273280
arg2[6] = *(arg1 + 0x30)
arg2[7].d = *(arg1 + 0x38)
zmm2[0] = zmm2[0] f* *(arg1 + 0x3c)
*(arg2 + 0x3c) = zmm2[0]
float zmm5[0x4] = *arg4
zmm2 = *(arg1 + 0x34)
float temp0_10[0x4] = _mm_unpacklo_ps(*(arg1 + 0x30), (*(arg1 + 0x38))[0].q)
float temp0_11[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_12[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_14[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_10, temp0_11[0].q), arg4[2])
float temp0_15[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_16[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xc9), temp0_12)
float temp0_21[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xd2), temp0_15), temp0_18)
float temp0_22[0x4] = _mm_add_ps(temp0_21, temp0_21)
float temp0_23[0x4] = _mm_mul_ps(temp0_16, temp0_22)
float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0xc9), temp0_12)
float temp0_26[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xd2)
float temp0_27[0x4] = _mm_add_ps(temp0_23, temp0_14)
float temp0_31[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_26, temp0_15), temp0_25), temp0_27), arg4[1])
temp0_31[0] = temp0_31[0] f* *arg3
float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x55)
temp0_32[0] = temp0_32[0] f* arg3[1]
float temp0_33[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xaa)
temp0_33[0] = temp0_33[0] f* arg3[2]
arg2[6] = (_mm_unpacklo_ps(temp0_31, temp0_32[0].q)).q
arg2[7].d = temp0_33[0]
return arg2
