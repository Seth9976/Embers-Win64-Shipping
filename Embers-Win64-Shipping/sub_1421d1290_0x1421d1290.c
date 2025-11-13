// 函数: sub_1421d1290
// 地址: 0x1421d1290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = data_143f4dea0
void* rax = *(arg1 + 0x18)
void* r8 = *(arg1 + 0x28)
float var_c8[0x4]
float var_b8[0x4]
float var_a8[0x4]
float zmm1[0x4]
float zmm2[0x4]

if (rax == 0)
    var_c8 = data_14399f6e0
    var_b8 = data_14399f6f0
    zmm1 = data_14399f710
    var_a8 = data_14399f700
else
    zmm2 = *(rax + 0x1c0)
    float temp0_1[0x4] = _mm_add_ps(zmm2, zmm2)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 4)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
    float temp0_4[0x4] = _mm_mul_ps(zmm2, temp0_1)
    float temp0_6[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_1, temp0_1, 0x29))
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x12)
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
    float temp0_9[0x4] = _mm_mul_ps(temp0_3, temp0_7)
    float temp0_11[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_4, temp0_4, 1))
    float temp0_12[0x4] = _mm_add_ps(temp0_9, temp0_6)
    float temp0_13[0x4] = _mm_sub_ps(temp0_6, temp0_9)
    float zmm3[0x4] = __andps_xmmxud_memxud(_mm_sub_ps(zmm6, temp0_11), data_143f4deb0)
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, zmm3, 0x32)
    float temp0_18[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_12, zmm3, 0), temp0_16, 0x82)
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_12, zmm3, 0x31)
    var_c8 = temp0_18
    zmm1 = *(rax + 0x1d0)
    float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_13, zmm3, 0x10), temp0_19, 0x88)
    float temp0_22[0x4] = _mm_shuffle_ps(temp0_12, temp0_13, 0x12)
    zmm6[0].q = zmm1 u>> 0x40
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, zmm3, 0xe8)
    zmm1 = _mm_shuffle_ps(zmm1, zmm6, 0xc4)
    var_b8 = temp0_21
    var_a8 = temp0_23

void* result = *(r8 + 0x30)
float zmm4[0x4] = data_143f4ded0
float var_98[0x4] = zmm1
float temp0_28[0x4] = __mulps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(*(result + 0x4c), (*(result + 0x54))[0].q), 
        _mm_unpacklo_ps(*(result + 0x50), zx.o(0)[0].q)[0].q), 
    data_143f4df30)
float temp0_33[0x4] = _mm_sub_ps(temp0_28, 
    __mulps_xmmps_memps(
        _mm_cvtepi32_ps(_mm_cvtps_epi32(__mulps_xmmps_memps(temp0_28, data_143f4df20))), 
        data_143f4df10))
zmm1 = data_142dc1870
float zmm0[0x4] = __andps_xmmxud_memxud(temp0_33, data_143f4dee0)
zmm2 = __orps_xmmxud_memxud(__andps_xmmxud_memxud(temp0_33, data_143f4df00), data_143f4def0)
float temp0_37[0x4] = _mm_cmpeq_ps(zmm4, zmm0, 1)
zmm0 = data_142dc1850
float temp0_38[0x4] = _mm_sub_ps(zmm2, temp0_33)
float temp0_39[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
float temp0_40[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
zmm2 = _mm_and_ps(temp0_38 ^ temp0_33, temp0_37) ^ temp0_33
float temp0_42[0x4] = _mm_mul_ps(zmm2, zmm2)
float temp0_44[0x4] = _mm_add_ps(_mm_mul_ps(temp0_39, temp0_42), temp0_40)
float temp0_45[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
float temp0_47[0x4] = _mm_add_ps(_mm_mul_ps(temp0_44, temp0_42), temp0_45)
float temp0_48[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float temp0_50[0x4] = _mm_add_ps(_mm_mul_ps(temp0_47, temp0_42), temp0_48)
float temp0_51[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float temp0_52[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_54[0x4] = _mm_add_ps(_mm_mul_ps(temp0_50, temp0_42), temp0_51)
zmm0 = data_142dc1860
float temp0_56[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x55), temp0_42)
float temp0_57[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_58[0x4] = _mm_mul_ps(temp0_54, temp0_42)
float temp0_59[0x4] = _mm_add_ps(temp0_56, temp0_57)
float temp0_60[0x4] = _mm_add_ps(temp0_58, temp0_52)
zmm1 = data_142dc1880
float temp0_61[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
float temp0_62[0x4] = _mm_mul_ps(temp0_59, temp0_42)
float temp0_63[0x4] = _mm_mul_ps(temp0_60, zmm2)
float temp0_64[0x4] = _mm_add_ps(temp0_62, temp0_61)
float temp0_65[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float temp0_67[0x4] = _mm_add_ps(_mm_mul_ps(temp0_64, temp0_42), temp0_65)
float temp0_68[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float temp0_69[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_71[0x4] = _mm_add_ps(_mm_mul_ps(temp0_67, temp0_42), temp0_68)
zmm0 = data_143f4dec0 ^ zmm6
float temp0_73[0x4] = _mm_add_ps(_mm_mul_ps(temp0_71, temp0_42), temp0_69)
bool cond:0 = (*(result + 0x59) & 1) == 0
zmm0 = _mm_and_ps(zmm0, temp0_37) ^ zmm6
float var_100 = temp0_63[0]
float temp0_75[0x4] = _mm_mul_ps(temp0_73, zmm0)
int32_t var_fc = 0
float temp0_76[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xaa)
float temp0_77[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
temp0_76[0] = temp0_76[0] * temp0_63[0]
int32_t var_ec = 0
int32_t var_dc = 0
temp0_75[0] = temp0_75[0] * temp0_77[0]
float temp0_78[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0x55)
float temp0_79[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0xaa)
float var_104 = temp0_75[0]
temp0_78[0] = temp0_78[0] * temp0_75[0]
temp0_76[0] = temp0_76[0] * temp0_78[0]
float var_108 = temp0_78[0]
temp0_79[0] = temp0_79[0] * temp0_77[0]
temp0_79[0] = temp0_79[0] * temp0_63[0]
temp0_76[0] = temp0_76[0] - temp0_79[0]
temp0_76[0] = temp0_76[0] * temp0_77[0]
temp0_75[0] = temp0_75[0] * temp0_76[0]
float var_f8 = temp0_76[0]
temp0_79[0] = temp0_79[0] * temp0_78[0]
float var_f0 = (temp0_75 ^ data_142d3f780)[0]
temp0_79[0] = temp0_79[0] + temp0_76[0]
temp0_76[0] = temp0_76[0] * temp0_77[0]
temp0_79[0] = temp0_79[0] * temp0_75[0]
float var_f4 = temp0_79[0]
temp0_79[0] = temp0_79[0] * temp0_78[0]
temp0_78[0] = temp0_78[0] * temp0_76[0]
temp0_79[0] = temp0_79[0] + temp0_76[0]
temp0_79[0] = temp0_79[0] * temp0_77[0]
float var_d8 = (*(result + 0x40))[0]
zmm0 = *(result + 0x48)
temp0_78[0] = temp0_78[0] - temp0_79[0]
float var_e8 = (temp0_79 ^ data_142d3f780)[0]
float var_d4 = (*(result + 0x44))[0]
int32_t var_cc = 0x3f800000
float var_e4 = temp0_78[0]
float var_e0 = temp0_79[0]
float var_d0 = zmm0[0]

if (cond:0)
    zmm2 = var_108.o
    float temp0_80[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_81[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float temp0_82[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_83[0x4] = _mm_mul_ps(temp0_80, var_c8)
    float temp0_84[0x4] = _mm_mul_ps(temp0_81, var_a8)
    float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_98)
    float temp0_90[0x4] = _mm_add_ps(
        _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_82, var_b8), temp0_83), temp0_84), temp0_86)
    zmm2 = var_f8.o
    float temp0_91[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_92[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float temp0_93[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_94[0x4] = _mm_mul_ps(temp0_91, var_c8)
    float temp0_95[0x4] = _mm_mul_ps(temp0_92, var_a8)
    float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_98)
    *(arg1 + 0x60) = temp0_90
    float temp0_101[0x4] = _mm_add_ps(
        _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_93, var_b8), temp0_94), temp0_95), temp0_97)
    zmm2 = var_e8.o
    float temp0_102[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_103[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    float temp0_104[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_105[0x4] = _mm_mul_ps(temp0_102, var_c8)
    float temp0_106[0x4] = _mm_mul_ps(temp0_103, var_a8)
    *(arg1 + 0x70) = temp0_101
    float temp0_108[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_98)
    float temp0_112[0x4] = _mm_add_ps(
        _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_104, var_b8), temp0_105), temp0_106), temp0_108)
    zmm2 = var_d8.o
    float temp0_113[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
    float temp0_114[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_115[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    *(arg1 + 0x80) = temp0_112
    float temp0_116[0x4] = _mm_mul_ps(temp0_113, var_c8)
    float temp0_117[0x4] = _mm_mul_ps(temp0_114, var_b8)
    float temp0_118[0x4] = _mm_mul_ps(temp0_115, var_a8)
    float temp0_119[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
    float temp0_120[0x4] = _mm_add_ps(temp0_116, temp0_117)
    float temp0_121[0x4] = _mm_mul_ps(temp0_119, var_98)
    *(arg1 + 0x90) = _mm_add_ps(_mm_add_ps(temp0_120, temp0_118), temp0_121)
    *(arg1 + 0xa0) = data_14399f6e0
    *(arg1 + 0xb0) = data_14399f6f0
    *(arg1 + 0xc0) = data_14399f700
    *(arg1 + 0xd0) = data_14399f710
else
    *(arg1 + 0x60) = var_108.o
    *(arg1 + 0x70) = var_f8.o
    *(arg1 + 0xa0) = var_c8
    *(arg1 + 0xb0) = var_b8
    *(arg1 + 0x80) = var_e8.o
    *(arg1 + 0xc0) = var_a8
    *(arg1 + 0x90) = var_d8.o
    *(arg1 + 0xd0) = var_98

return result
