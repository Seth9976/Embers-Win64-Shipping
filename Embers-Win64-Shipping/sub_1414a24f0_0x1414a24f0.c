// 函数: sub_1414a24f0
// 地址: 0x1414a24f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1413aa7b0(&data_143ec4c60, zx.q(*(arg3 + 0x1548)), 0, 0, arg4)
float zmm2[0x4] = data_142d4cc00
float zmm3[0x4] = data_142d4cc20
float zmm5[0x4] = data_142d4cc30
float zmm10[0x4] = *(arg1 + 0xb0)
float zmm9[0x4] = *(arg1 + 0xa0)
float zmm12[0x4] = *(arg1 + 0xc0)
float zmm13[0x4] = *(arg1 + 0xd0)
int128_t zmm6
zmm6.d = (*(arg1 + 0x54)).d f- *(arg3 + 0x600)
int128_t zmm11
zmm11.d = (*(arg1 + 0x5c)).d f- *(arg3 + 0x608)
int128_t zmm7
zmm7.d = (*(arg1 + 0x58)).d f- *(arg3 + 0x604)
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
float temp0_3[0x4] = _mm_mul_ps(temp0, zmm10)
int32_t var_ac = 0x3f800000
float temp0_4[0x4] = _mm_mul_ps(temp0_1, zmm12)
float temp0_5[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_7[0x4] = _mm_mul_ps(temp0_5, zmm9)
float temp0_8[0x4] = _mm_mul_ps(temp0_2, zmm9)
float temp0_9[0x4] = _mm_mul_ps(temp0_6, zmm9)
float temp0_10[0x4] = _mm_add_ps(temp0_7, temp0_3)
float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm13)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x55), zmm10)
float temp0_15[0x4] = _mm_add_ps(temp0_10, temp0_4)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm12)
float temp0_18[0x4] = _mm_add_ps(temp0_8, temp0_14)
float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm13)
float temp0_21[0x4] = _mm_add_ps(temp0_15, temp0_12)
float temp0_22[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
float temp0_23[0x4] = _mm_add_ps(temp0_18, temp0_17)
float temp0_24[0x4] = _mm_mul_ps(temp0_22, zmm10)
float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm12)
float temp0_27[0x4] = _mm_add_ps(temp0_23, temp0_20)
float temp0_28[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_29[0x4] = _mm_add_ps(temp0_9, temp0_24)
float temp0_30[0x4] = _mm_mul_ps(temp0_28, zmm13)
float var_b8[0x4]
var_b8[0] = zmm6.d
float temp0_31[0x4] = _mm_shuffle_ps(var_b8, var_b8, 0xe1)
float temp0_33[0x4] = _mm_add_ps(_mm_add_ps(temp0_29, temp0_26), temp0_30)
temp0_31[0] = zmm7.d
float temp0_34[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc6)
*(arg4 + 0x60) = temp0_21
temp0_34[0] = zmm11.d
float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc9)
float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0)
float temp0_37[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x55)
float temp0_38[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xaa)
*(arg4 + 0x70) = temp0_27
*(arg4 + 0x80) = temp0_33
float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0xff), zmm13)
float temp0_41[0x4] = _mm_mul_ps(temp0_36, zmm9)
float temp0_42[0x4] = _mm_mul_ps(temp0_37, zmm10)
float temp0_43[0x4] = _mm_mul_ps(temp0_38, zmm12)
*(arg4 + 0x90) = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_41, temp0_42), temp0_43), temp0_40)
*(arg4 + 0xa0) = *(arg1 + 0x60)
*(arg4 + 0xb0) = *(arg1 + 0x70)
*(arg4 + 0xc0) = *(arg1 + 0x80)
*(arg4 + 0xd0) = *(arg1 + 0x90)
zmm3 = *(arg1 + 0x8f4)
float zmm0[0x4] = *(arg1 + 0x8f8)
float zmm1[0x4] = *(arg1 + 0x8fc)
zmm2 = *(arg1 + 0x160)
float temp0_47[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_47[0] = zmm0[0]
float temp0_48[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xc6)
temp0_48[0] = zmm1[0]
float temp0_49[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0x27)
temp0_49[0] = zmm2[0]
*(arg4 + 0xe0) = _mm_shuffle_ps(temp0_49, temp0_49, 0x39)
int32_t result = *(arg1 + 0x570)

if ((result.b & 0x40) == 0 || *(arg1 + 0x534) s< 0 || (result.b & 0x10) == 0)
    result &= 0x810
    
    if (result != 0x810)
        arg4[0x1e].d = 0
    else
        arg4[0x1e].d = 0x3f800000
else
    arg4[0x1e].d = 0x3f800000

return result
