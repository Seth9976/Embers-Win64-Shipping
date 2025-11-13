// 函数: sub_14222f7b0
// 地址: 0x14222f7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = arg3[2]
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float var_a8 = zmm1[0]
float var_a0 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
float var_a4 = temp0[0]
void** var_98
sub_1422313b0(arg1, &var_98, &var_a8, &data_143dbb0c0)
float zmm4[0x4] = *arg3
int32_t var_64
float temp0_2[0x4] = _mm_unpacklo_ps(var_64, 0)
int32_t var_68
int32_t var_60
float temp0_4[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_68, var_60[0].q), temp0_2[0].q)
float temp0_5[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_5)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xd2)
float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
float temp0_10[0x4] = _mm_mul_ps(temp0_8, temp0_9)
float temp0_11[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_7)
float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
float temp0_14[0x4] = _mm_mul_ps(temp0_11, temp0_13)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
float temp0_17[0x4] = _mm_mul_ps(temp0_15, temp0_5)
float temp0_18[0x4] = _mm_mul_ps(temp0_16, temp0_9)
float temp0_19[0x4] = _mm_add_ps(temp0_14, temp0_4)
float temp0_22[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_18, temp0_17), temp0_19), arg3[1])
temp0_22[0] = temp0_22[0] f- *arg2
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
temp0_23[0] = temp0_23[0] f- arg2[1]
float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
temp0_24[0] = temp0_24[0] f- arg2[2]
temp0_22[0] = temp0_22[0] * temp0_22[0]
temp0_23[0] = temp0_23[0] * temp0_23[0]
temp0_24[0] = temp0_24[0] * temp0_24[0]
temp0_23[0] = temp0_23[0] + temp0_22[0]
temp0_23[0] = temp0_23[0] + temp0_24[0]
float temp0_25[0x4] = _mm_sqrt_ss(0, temp0_23[0])
bool cond:0 = temp0_25[0] <= 9.99999994e-09f
int32_t var_5c
temp0_25[0] = temp0_25[0] f- var_5c
float temp0_26[0x4] = _mm_max_ss(temp0_25[0], 0)
float rax
int32_t* rcx
float zmm3[0x4]

if (cond:0)
    rcx = arg5
    *rcx = data_143dbb1f8.q
    rax = data_143dbb200
else
    zmm4 = 0x3f000000
    rcx = arg5
    zmm3 = zx.o(0)
    zmm3[0] = temp0_23[0]
    float zmm2[0x4] = 0x3f000000
    float temp0_27[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_27[0] = temp0_27[0] * temp0_27[0]
    zmm3[0] = zmm3[0] * temp0_27[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_27[0] = temp0_27[0] * zmm2[0]
    temp0_27[0] = temp0_27[0] + temp0_27[0]
    temp0_27[0] = temp0_27[0] * temp0_27[0]
    zmm3[0] = zmm3[0] * temp0_27[0]
    zmm4[0] = 0.5f - zmm3[0]
    temp0_27[0] = temp0_27[0] * zmm4[0]
    temp0_27[0] = temp0_27[0] + temp0_27[0]
    temp0_22[0] = temp0_22[0] * temp0_27[0]
    temp0_23[0] = temp0_23[0] * temp0_27[0]
    temp0_24[0] = temp0_24[0] * temp0_27[0]
    float temp0_28[0x4] = _mm_unpacklo_ps(temp0_22 ^ 0x80000000, (temp0_23 ^ 0x80000000)[0].q)
    rax = (temp0_24 ^ 0x80000000)[0]
    *rcx = temp0_28.q

rcx[2] = rax
zmm4 = *arg2
temp0_26[0] = temp0_26[0] f* *rcx
temp0_26[0] = temp0_26[0] f* rcx[1]
temp0_26[0] = temp0_26[0] f* rcx[2]
zmm4[0] = zmm4[0] - temp0_26[0]
zmm3 = arg2[1]
zmm3[0] = zmm3[0] - temp0_26[0]
float zmm1_1[0x4] = arg2[2]
zmm1_1[0] = zmm1_1[0] - temp0_26[0]
*arg4 = (_mm_unpacklo_ps(zmm4, zmm3[0].q)).q
float result = zmm1_1[0]
arg4[1].d = result
return result
