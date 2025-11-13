// 函数: sub_142994d60
// 地址: 0x142994d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_18[0x4] = zmm6
float zmm7[0x4] = arg1[1]
float zmm8[0x4]
float var_38[0x4] = zmm8
float zmm9[0x4] = *arg1
float zmm10[0x4]
float var_58[0x4] = zmm10
float temp0_1[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm9, zmm9, 0), data_1435b5990)
float temp0_3[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm9, zmm9, 0x55), data_1435b5940)
float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), data_1435b5a50)
float zmm11[0x4]
float var_68[0x4] = zmm11
int64_t result = 2
float zmm13[0x4]
float var_88[0x4] = zmm13
float zmm14[0x4]
float var_98[0x4] = zmm14
float zmm15[0x4] = data_1435b5a10
float zmm12[0x4] = data_1435b59f0
float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm9, zmm9, 0xaa), data_1435b5a70)
float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0x55), data_1435b59c0)
float temp0_10[0x4] = _mm_add_ps(temp0_1, temp0_7)
float temp0_12[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0), data_1435b59a0)
float temp0_14[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm9, zmm9, 0xff), data_1435b5a60)
float temp0_15[0x4] = _mm_add_ps(temp0_10, temp0_12)
float temp0_17[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0xff), data_1435b5a90)
float temp0_18[0x4] = _mm_add_ps(temp0_3, temp0_14)
float temp0_19[0x4] = _mm_add_ps(temp0_15, temp0_5)
float temp0_21[0x4] = _mm_add_ps(_mm_add_ps(temp0_18, temp0_9), temp0_17)
float temp0_22[0x4] = _mm_add_ps(temp0_21, temp0_19)
float temp0_23[0x4] = _mm_sub_ps(temp0_19, temp0_21)
*arg1 = temp0_22
arg1[1] = _mm_shuffle_ps(temp0_23, temp0_23, 0x1b)
void* rcx = &arg1[4]
int64_t i

do
    float zmm4[0x4] = *(rcx - 0x20)
    float zmm3[0x4] = *(rcx + 0x20)
    zmm13 = *(rcx + 0x60)
    float zmm2[0x4] = *(rcx + 0xa0)
    zmm11 = *rcx
    float temp0_25[0x4] = __mulps_xmmps_memps(zmm2, data_1435b5930)
    zmm10 = *(rcx + 0x80)
    zmm14 = *(rcx - 0x40)
    float temp0_26[0x4] = __mulps_xmmps_memps(zmm4, data_1435b59d0)
    float temp0_27[0x4] = __mulps_xmmps_memps(zmm2, data_1435b59d0)
    float temp0_28[0x4] = __mulps_xmmps_memps(zmm10, data_1435b5960)
    float temp0_29[0x4] = __mulps_xmmps_memps(zmm11, data_1435b5960)
    float temp0_30[0x4] = _mm_mul_ps(zmm4, zmm15)
    float temp0_31[0x4] = _mm_mul_ps(zmm11, zmm12)
    float temp0_32[0x4] = _mm_mul_ps(zmm10, zmm12)
    float temp0_33[0x4] = __mulps_xmmps_memps(zmm3, data_1435b59d0)
    float temp0_34[0x4] = _mm_add_ps(temp0_28, temp0_31)
    float temp0_35[0x4] = _mm_sub_ps(temp0_29, temp0_32)
    float temp0_36[0x4] = _mm_add_ps(temp0_33, temp0_30)
    float temp0_38[0x4] = _mm_add_ps(temp0_25, __mulps_xmmps_memps(zmm13, data_1435b5980))
    float temp0_39[0x4] = __mulps_xmmps_memps(zmm3, data_1435b5930)
    float temp0_40[0x4] = _mm_add_ps(temp0_36, temp0_38)
    float temp0_41[0x4] = _mm_sub_ps(temp0_26, temp0_39)
    float temp0_42[0x4] = _mm_mul_ps(zmm13, zmm15)
    float temp0_43[0x4] = _mm_mul_ps(zmm2, zmm15)
    float temp0_45[0x4] = _mm_add_ps(temp0_42, __mulps_xmmps_memps(zmm2, data_1435b5980))
    float temp0_46[0x4] = __mulps_xmmps_memps(zmm13, data_1435b5930)
    float temp0_47[0x4] = __mulps_xmmps_memps(zmm13, data_1435b59d0)
    float temp0_48[0x4] = _mm_sub_ps(temp0_41, temp0_45)
    float temp0_49[0x4] = __mulps_xmmps_memps(zmm3, data_1435b5980)
    float temp0_50[0x4] = _mm_add_ps(temp0_27, temp0_46)
    float temp0_51[0x4] = _mm_mul_ps(zmm3, zmm15)
    float temp0_52[0x4] = __mulps_xmmps_memps(zmm4, data_1435b5930)
    float temp0_53[0x4] = _mm_sub_ps(temp0_47, temp0_43)
    float temp0_54[0x4] = __mulps_xmmps_memps(zmm4, data_1435b5980)
    float temp0_55[0x4] = _mm_sub_ps(temp0_52, temp0_49)
    float temp0_56[0x4] = _mm_sub_ps(temp0_54, temp0_51)
    float temp0_57[0x4] = _mm_add_ps(temp0_53, temp0_55)
    float temp0_58[0x4] = __addps_xmmps_memps(zmm14, *(rcx + 0x40))
    float temp0_59[0x4] = __subps_xmmps_memps(zmm14, *(rcx + 0x40))
    float temp0_60[0x4] = _mm_add_ps(temp0_50, temp0_56)
    float temp0_61[0x4] = __mulps_xmmps_memps(temp0_58, data_1435b5990)
    float temp0_62[0x4] = __mulps_xmmps_memps(temp0_59, data_1435b5990)
    float temp0_63[0x4] = _mm_add_ps(temp0_34, temp0_61)
    float temp0_64[0x4] = _mm_sub_ps(temp0_61, temp0_34)
    float temp0_65[0x4] = _mm_add_ps(temp0_35, temp0_62)
    float temp0_66[0x4] = _mm_sub_ps(temp0_62, temp0_35)
    float temp0_67[0x4] = _mm_add_ps(temp0_63, temp0_40)
    float temp0_68[0x4] = _mm_add_ps(temp0_65, temp0_48)
    *(rcx - 0x40) = temp0_67
    float temp0_69[0x4] = _mm_add_ps(temp0_66, temp0_60)
    *(rcx - 0x20) = temp0_68
    float temp0_70[0x4] = _mm_sub_ps(temp0_66, temp0_60)
    float temp0_71[0x4] = _mm_sub_ps(temp0_64, temp0_57)
    float temp0_72[0x4] = _mm_add_ps(temp0_64, temp0_57)
    *rcx = temp0_69
    *(rcx + 0x40) = temp0_71
    *(rcx + 0x20) = temp0_72
    float temp0_73[0x4] = _mm_sub_ps(temp0_63, temp0_40)
    *(rcx + 0x60) = temp0_70
    zmm12 = data_1435b59f0
    float temp0_74[0x4] = _mm_sub_ps(temp0_65, temp0_48)
    *(rcx + 0xa0) = temp0_73
    *(rcx + 0x80) = temp0_74
    rcx += 0x10
    i = result
    result -= 1
while (i != 1)
return result
