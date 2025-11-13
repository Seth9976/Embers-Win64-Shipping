// 函数: sub_1422129b0
// 地址: 0x1422129b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = 0x3f800000
void* rax = sub_142218330(arg2)

if (rax != 0)
    zmm6 = *(rax + 0x38)
    zmm6[0] = zmm6[0] * 0.00100000005f
    *(rax + 0x3c)
    zmm6 = __maxss_xmmss_memss(zmm6[0], 0x33c14606)

int512_t zmm1
zmm1.o = data_142d4cc00
float var_a8[0x4]
__builtin_memcpy(&var_a8, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"00\x80\x3f", 
    0x34)
float zmm7_1[0x4] = sub_142261d60(&var_a8, arg3, zmm6)
int32_t var_78
float zmm6_1[0x4] = var_78
float zmm1_1[0x4]
float zmm2_1[0x4]

if ((*(arg2 + 0xc) & 0x20) != 0)
    zmm2_1 = *(arg2 + 0x5c)
else
    zmm1_1 = 0x38d1b717
    
    if (not(zmm7_1[0] < 9.99999975e-05f))
        zmm1_1 = __minss_xmmss_memss(zmm7_1[0], 0x3f800000)
    
    zmm2_1 = powf(zmm6_1[0], zmm1_1[0])
    zmm2_1[0] = zmm2_1[0] f* *(arg2 + 0x88)

float temp0_3[0x4] = __maxss_xmmss_memss(zmm2_1[0], 0x3a83126f)
float zmm0_1[0x4] = var_a8
temp0_3[0] = temp0_3[0] / zmm6_1[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0)
float temp0_5[0x4] = _mm_mul_ps(zmm0_1, temp0_4)
float var_98[0x4]
float temp0_6[0x4] = _mm_mul_ps(var_98, temp0_4)
*arg1 = temp0_5
int128_t var_88
zmm0_1 = var_88.d
arg1[1] = temp0_6
zmm0_1[0] = zmm0_1[0] * temp0_4[0]
temp0_4[0] = temp0_4[0] * zmm6_1[0]
arg1[2].d = zmm0_1[0]
*(arg1 + 0x24) = var_88:4.d[0]
*(arg1 + 0x2c) = var_88:0xc.d[0]
*(arg1 + 0x28) = var_88:8.d[0]
arg1[3].d = temp0_4[0]
float zmm5[0x4] = *arg4
zmm0_1 = *(arg2 + 0x84)
zmm6_1 = *(arg2 + 0x7c)
float temp0_7[0x4] = _mm_unpacklo_ps(*(arg2 + 0x80), 0)
float temp0_8[0x4] = _mm_unpacklo_ps(zmm6_1, zmm0_1[0].q)
float temp0_9[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_11[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_8, temp0_7[0].q), arg4[2])
float temp0_12[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_13[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_9)
float temp0_18[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd2), temp0_12), temp0_15)
float temp0_19[0x4] = _mm_add_ps(temp0_18, temp0_18)
float temp0_20[0x4] = _mm_mul_ps(temp0_13, temp0_19)
float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc9), temp0_9)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xd2)
float temp0_24[0x4] = _mm_add_ps(temp0_20, temp0_11)
float temp0_27[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_23, temp0_12), temp0_22), temp0_24)
temp0_27[0] = temp0_27[0] f+ *(arg1 + 0x24)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x55)
temp0_28[0] = temp0_28[0] f+ *(arg1 + 0x28)
float temp0_29[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xaa)
temp0_29[0] = temp0_29[0] f+ *(arg1 + 0x2c)
*(arg1 + 0x24) = temp0_27[0]
*(arg1 + 0x28) = temp0_28[0]
*(arg1 + 0x2c) = temp0_29[0]
zmm1_1 = *(arg2 + 0x90)
float var_70 = (*(arg2 + 0x8c))[0]
float var_6c = zmm1_1[0]
float var_68 = (*(arg2 + 0x94))[0]
float var_64[0x4] = data_142d3f660
int32_t var_54[0xb]
int32_t* rax_1 = sub_142227f00(&var_54, arg1, &var_64, &var_70)
*arg1 = *rax_1
*(arg1 + 4) = rax_1[1]
*(arg1 + 8) = rax_1[2]
*(arg1 + 0xc) = rax_1[3]
arg1[1].d = rax_1[4]
*(arg1 + 0x14) = rax_1[5]
*(arg1 + 0x18) = rax_1[6]
*(arg1 + 0x1c) = rax_1[7]
arg1[2].d = rax_1[8]
int64_t rcx_9 = *arg3

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return arg1
