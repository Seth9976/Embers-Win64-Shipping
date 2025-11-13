// 函数: sub_141739110
// 地址: 0x141739110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float temp0_3[0x4] = __subps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(*arg3, (*(arg3 + 8))[0].q), 
        _mm_unpacklo_ps(*(arg3 + 4), 0)[0].q), 
    *(arg1 + 0x30))
float zmm2[0x4] = *(arg1 + 0x40)
float zmm3[0x4] = __andps_xmmxud_memxud(temp0_3, data_143ef7300)
float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
float temp0_7[0x4] = _mm_rcp_ps(zmm2)
float temp0_8[0x4] = __mulps_xmmps_memps(*(arg1 + 0x20), data_143ef7590)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xd2)
float temp0_10[0x4] = _mm_mul_ps(temp0_5, temp0_9)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc9)
float temp0_12[0x4] = _mm_mul_ps(temp0_6, temp0_11)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xff)
float temp0_14[0x4] = _mm_sub_ps(temp0_12, temp0_10)
float temp0_15[0x4] = _mm_mul_ps(temp0_7, temp0_7)
float temp0_16[0x4] = _mm_add_ps(temp0_7, temp0_7)
float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_14)
float temp0_19[0x4] = _mm_sub_ps(temp0_16, _mm_mul_ps(temp0_15, zmm2))
float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xd2), temp0_11)
float temp0_22[0x4] = _mm_mul_ps(temp0_19, temp0_19)
float temp0_23[0x4] = _mm_add_ps(temp0_19, temp0_19)
float temp0_24[0x4] = _mm_mul_ps(temp0_22, zmm2)
float temp0_26[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm2, data_143ef7580), data_143ef7570, 2)
float temp0_27[0x4] = _mm_sub_ps(temp0_23, temp0_24)
float zmm7[0x4] = temp0_27 ^ zx.o(0)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc9)
zmm2 = _mm_and_ps(temp0_26, zmm7)
float temp0_31[0x4] = _mm_sub_ps(temp0_21, _mm_mul_ps(temp0_28, temp0_9))
float temp0_32[0x4] = _mm_mul_ps(temp0_13, temp0_17)
float zmm1[0x4] = (*arg4)[2]
float temp0_33[0x4] = _mm_add_ps(temp0_32, zmm3)
float temp0_34[0x4] = _mm_unpacklo_ps(*arg4, zmm1[0].q)
float temp0_36[0x4] = _mm_mul_ps(_mm_add_ps(temp0_31, temp0_33), zmm2 ^ temp0_27)
float var_80 = _mm_shuffle_ps(temp0_36, temp0_36, 0xaa)[0]
float temp0_40[0x4] = __subps_xmmps_memps(
    _mm_unpacklo_ps(temp0_34, _mm_unpacklo_ps((*arg4)[1], 0)[0].q), *(arg1 + 0x30))
float temp0_41[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x55)
zmm3 = __andps_xmmxud_memxud(temp0_40, data_143ef7300)
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), temp0_9)
float temp0_47[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), temp0_11), temp0_44)
float temp0_48[0x4] = _mm_add_ps(temp0_47, temp0_47)
float temp0_49[0x4] = _mm_mul_ps(temp0_13, temp0_48)
float temp0_51[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xc9), temp0_9)
float temp0_52[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0xd2)
float temp0_53[0x4] = _mm_add_ps(temp0_49, zmm3)
float temp0_55[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_52, temp0_11), temp0_51)
float temp0_57[0x4] = __cmpps_xmmps_memps_immb(
    __andps_xmmxud_memxud(*(arg1 + 0x40), data_143ef7580), data_143ef7570, 2)
int64_t* rcx = *(arg1 + 0x10)
float zmm0[0x4] = _mm_and_ps(temp0_57, zmm7) ^ temp0_27
float temp0_60[0x4] = _mm_mul_ps(_mm_add_ps(temp0_55, temp0_53), zmm0)
float var_90 = _mm_shuffle_ps(temp0_60, temp0_60, 0xaa)[0]
int64_t var_a8 = (_mm_unpacklo_ps(temp0_60, _mm_shuffle_ps(temp0_60, temp0_60, 0x55)[0].q)).q
int64_t var_98 = (_mm_unpacklo_ps(temp0_36, temp0_41[0].q)).q
zmm0 = arg5
float var_a0 = var_90
float var_90_1 = var_80
sub_141737e80(rcx, arg2, &var_98, &var_a8, zmm0, zmm0[0])

if (*(arg2 + 0xc) != 0)
    float zmm5_1[0x4] = *(arg1 + 0x20)
    float zmm2_1[0x4] = *(arg2 + 4)
    float temp0_65[0x4] = _mm_unpacklo_ps(*arg2, arg2[1].d[0].q)
    float temp0_66[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
    float temp0_67[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_69[0x4] =
        __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_65, temp0_66[0].q), *(arg1 + 0x40))
    float temp0_70[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_71[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xc9), temp0_67)
    float temp0_76[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xd2), temp0_70), temp0_73)
    float temp0_77[0x4] = _mm_add_ps(temp0_76, temp0_76)
    float temp0_78[0x4] = _mm_mul_ps(temp0_71, temp0_77)
    float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_77, temp0_77, 0xc9), temp0_67)
    float temp0_81[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xd2)
    float temp0_82[0x4] = _mm_add_ps(temp0_78, temp0_69)
    float temp0_86[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_81, temp0_70), temp0_80), temp0_82), *(arg1 + 0x30))
    float var_80_1 = _mm_shuffle_ps(temp0_86, temp0_86, 0xaa)[0]
    *arg2 = (_mm_unpacklo_ps(temp0_86, _mm_shuffle_ps(temp0_86, temp0_86, 0x55)[0].q)).q
    arg2[1].d = var_80_1

return arg2
