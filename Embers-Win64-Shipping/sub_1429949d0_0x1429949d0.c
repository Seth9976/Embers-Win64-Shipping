// 函数: sub_1429949d0
// 地址: 0x1429949d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg1[1]
float temp0_1[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6, zmm6, 0), data_1435b59a0)
float zmm8[0x4] = *arg1
float temp0_3[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), data_1435b5a50)
float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0), data_1435b5990)
float zmm10[0x4]
float var_58[0x4] = zmm10
float zmm11[0x4]
float var_68[0x4] = zmm11
float zmm12[0x4]
float var_78[0x4] = zmm12
float zmm13[0x4]
float var_88[0x4] = zmm13
float zmm14[0x4]
float var_98[0x4] = zmm14
float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0xaa), data_1435b5a70)
float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6, zmm6, 0x55), data_1435b59c0)
float temp0_10[0x4] = _mm_add_ps(temp0_5, temp0_7)
float temp0_12[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0x55), data_1435b5940)
float temp0_14[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0xff), data_1435b5a60)
float temp0_15[0x4] = _mm_add_ps(temp0_10, temp0_1)
float temp0_17[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6, zmm6, 0xff), data_1435b5a90)
float temp0_18[0x4] = _mm_add_ps(temp0_12, temp0_14)
zmm8 = arg1[2]
float temp0_19[0x4] = _mm_add_ps(temp0_15, temp0_3)
float temp0_21[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0x55), data_1435b5940)
float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_9)
float temp0_24[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0xaa), data_1435b5a70)
float temp0_25[0x4] = _mm_add_ps(temp0_22, temp0_17)
zmm6 = arg1[3]
float temp0_27[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6, zmm6, 0x55), data_1435b59c0)
float temp0_28[0x4] = _mm_add_ps(temp0_25, temp0_19)
float temp0_29[0x4] = _mm_sub_ps(temp0_19, temp0_25)
float temp0_31[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0), data_1435b5990)
*arg1 = temp0_28
float temp0_33[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), data_1435b5a50)
float temp0_34[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x1b)
float temp0_35[0x4] = _mm_add_ps(temp0_31, temp0_24)
arg1[1] = temp0_34
float temp0_37[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6, zmm6, 0), data_1435b59a0)
float temp0_39[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm8, zmm8, 0xff), data_1435b5a60)
float temp0_40[0x4] = _mm_add_ps(temp0_35, temp0_37)
float temp0_42[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6, zmm6, 0xff), data_1435b5a90)
float temp0_43[0x4] = _mm_add_ps(temp0_21, temp0_39)
float temp0_44[0x4] = _mm_add_ps(temp0_40, temp0_33)
float temp0_46[0x4] = _mm_add_ps(_mm_add_ps(temp0_43, temp0_27), temp0_42)
float temp0_47[0x4] = _mm_add_ps(temp0_46, temp0_44)
float temp0_48[0x4] = _mm_sub_ps(temp0_44, temp0_46)
arg1[2] = temp0_47
float zmm15[0x4] = data_1435b5a10
int64_t result = 2
arg1[3] = _mm_shuffle_ps(temp0_48, temp0_48, 0x1b)
void* rcx = &arg1[4]
int64_t i

do
    float zmm4[0x4] = *(rcx - 0x20)
    float zmm3[0x4] = *(rcx + 0x20)
    zmm13 = *(rcx + 0x60)
    float zmm2[0x4] = *(rcx + 0xa0)
    zmm11 = *rcx
    float temp0_50[0x4] = __mulps_xmmps_memps(zmm2, data_1435b5930)
    zmm10 = *(rcx + 0x80)
    zmm14 = *(rcx - 0x40)
    float temp0_51[0x4] = __mulps_xmmps_memps(zmm3, data_1435b59d0)
    float temp0_52[0x4] = __mulps_xmmps_memps(zmm4, data_1435b59d0)
    float temp0_53[0x4] = __mulps_xmmps_memps(zmm2, data_1435b59d0)
    float temp0_54[0x4] = __mulps_xmmps_memps(zmm11, data_1435b59f0)
    float temp0_55[0x4] = __mulps_xmmps_memps(zmm10, data_1435b5960)
    float temp0_56[0x4] = __mulps_xmmps_memps(zmm11, data_1435b5960)
    float temp0_57[0x4] = __mulps_xmmps_memps(zmm10, data_1435b59f0)
    float temp0_58[0x4] = _mm_mul_ps(zmm4, zmm15)
    float temp0_59[0x4] = _mm_add_ps(temp0_55, temp0_54)
    float temp0_60[0x4] = _mm_sub_ps(temp0_56, temp0_57)
    float temp0_61[0x4] = _mm_add_ps(temp0_51, temp0_58)
    float temp0_63[0x4] = _mm_add_ps(temp0_50, __mulps_xmmps_memps(zmm13, data_1435b5980))
    float temp0_64[0x4] = __mulps_xmmps_memps(zmm3, data_1435b5930)
    float temp0_65[0x4] = _mm_add_ps(temp0_61, temp0_63)
    float temp0_66[0x4] = _mm_sub_ps(temp0_52, temp0_64)
    float temp0_67[0x4] = _mm_mul_ps(zmm13, zmm15)
    float temp0_68[0x4] = _mm_mul_ps(zmm2, zmm15)
    float temp0_70[0x4] = _mm_add_ps(temp0_67, __mulps_xmmps_memps(zmm2, data_1435b5980))
    float temp0_71[0x4] = __mulps_xmmps_memps(zmm13, data_1435b5930)
    float temp0_72[0x4] = __mulps_xmmps_memps(zmm13, data_1435b59d0)
    float temp0_73[0x4] = _mm_sub_ps(temp0_66, temp0_70)
    float temp0_74[0x4] = __mulps_xmmps_memps(zmm3, data_1435b5980)
    float temp0_75[0x4] = _mm_add_ps(temp0_53, temp0_71)
    float temp0_76[0x4] = _mm_mul_ps(zmm3, zmm15)
    float temp0_77[0x4] = __mulps_xmmps_memps(zmm4, data_1435b5930)
    float temp0_78[0x4] = _mm_sub_ps(temp0_72, temp0_68)
    float temp0_79[0x4] = __mulps_xmmps_memps(zmm4, data_1435b5980)
    float temp0_80[0x4] = _mm_sub_ps(temp0_77, temp0_74)
    float temp0_81[0x4] = _mm_sub_ps(temp0_79, temp0_76)
    float temp0_82[0x4] = _mm_add_ps(temp0_78, temp0_80)
    float temp0_83[0x4] = __addps_xmmps_memps(zmm14, *(rcx + 0x40))
    float temp0_84[0x4] = __subps_xmmps_memps(zmm14, *(rcx + 0x40))
    float temp0_85[0x4] = _mm_add_ps(temp0_75, temp0_81)
    float temp0_86[0x4] = __mulps_xmmps_memps(temp0_83, data_1435b5990)
    float temp0_87[0x4] = __mulps_xmmps_memps(temp0_84, data_1435b5990)
    float temp0_88[0x4] = _mm_add_ps(temp0_59, temp0_86)
    float temp0_89[0x4] = _mm_sub_ps(temp0_86, temp0_59)
    float temp0_90[0x4] = _mm_add_ps(temp0_60, temp0_87)
    float temp0_91[0x4] = _mm_sub_ps(temp0_87, temp0_60)
    float temp0_92[0x4] = _mm_add_ps(temp0_88, temp0_65)
    float temp0_93[0x4] = _mm_add_ps(temp0_90, temp0_73)
    *(rcx - 0x40) = temp0_92
    float temp0_94[0x4] = _mm_add_ps(temp0_91, temp0_85)
    *(rcx - 0x20) = temp0_93
    float temp0_95[0x4] = _mm_sub_ps(temp0_91, temp0_85)
    float temp0_96[0x4] = _mm_sub_ps(temp0_89, temp0_82)
    float temp0_97[0x4] = _mm_add_ps(temp0_89, temp0_82)
    *rcx = temp0_94
    *(rcx + 0x40) = temp0_96
    *(rcx + 0x20) = temp0_97
    float temp0_98[0x4] = _mm_sub_ps(temp0_90, temp0_73)
    *(rcx + 0x60) = temp0_95
    float temp0_99[0x4] = _mm_sub_ps(temp0_88, temp0_65)
    *(rcx + 0x80) = temp0_98
    *(rcx + 0xa0) = temp0_99
    rcx += 0x10
    i = result
    result -= 1
while (i != 1)
return result
