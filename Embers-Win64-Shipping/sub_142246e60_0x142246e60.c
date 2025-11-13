// 函数: sub_142246e60
// 地址: 0x142246e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_100
int32_t* rbx = &var_100
float zmm6[0x4]
float var_28[0x4] = zmm6
float zmm7[0x4]
float var_38[0x4] = zmm7
float zmm8[0x4]
float var_48[0x4] = zmm8
int64_t i_1 = 2
float zmm9[0x4]
float var_58[0x4] = zmm9
float zmm10[0x4] = *arg4
float zmm11[0x4] = *(arg4 + 4)
int128_t zmm12 = *(arg4 + 8)
zmm10[0] = zmm10[0] * 0.5f
zmm11[0] = zmm11[0] * 0.5f
zmm10[0] = zmm10[0] f* *(arg1 + 0x48)
zmm11[0] = zmm11[0] f* *(arg1 + 0x4c)
int128_t zmm15
zmm15.d = zmm12.d f* 0.5f
int64_t var_108 = (_mm_unpacklo_ps(zmm10, zmm11[0].q)).q
zmm15.d = zmm15.d f* *(arg1 + 0x50)
zmm10[0] = zmm10[0] * -0.5f
zmm11[0] = zmm11[0] * -0.5f
zmm10[0] = zmm10[0] f* *(arg1 + 0x48)
zmm11[0] = zmm11[0] f* *(arg1 + 0x4c)
zmm12.d = zmm12.d f* -0.5f
zmm12.d = zmm12.d f* *(arg1 + 0x50)
var_100 = zmm15.d
int64_t var_fc = (_mm_unpacklo_ps(zmm10, zmm11[0].q)).q
int32_t var_f4 = zmm12.d
int64_t result
int64_t i

do
    int32_t* rsi_1 = &var_100
    int64_t j_1 = 2
    int64_t j
    
    do
        zmm6 = rsi_1[-1]
        void var_f0
        void arg_28
        sub_140acc920(&var_f0, &arg_28)
        zmm9 = *arg3
        int64_t rax_2 = *arg2
        float temp0_2[0x4] = _mm_unpacklo_ps(rbx[-2], zmm12.q)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xd2)
        float temp0_6[0x4] = __mulps_xmmps_memps(
            _mm_unpacklo_ps(temp0_2, _mm_unpacklo_ps(zmm6, zx.o(0)[0].q)[0].q), arg3[2])
        float temp0_7[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
        float temp0_8[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc9)
        float temp0_10[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xd2)
        float temp0_11[0x4] = _mm_mul_ps(temp0_9, temp0_3)
        float temp0_13[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_10, temp0_7), temp0_11)
        float temp0_14[0x4] = _mm_add_ps(temp0_13, temp0_13)
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xd2)
        float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xc9), temp0_3)
        float temp0_18[0x4] = _mm_mul_ps(temp0_15, temp0_7)
        float temp0_19[0x4] = _mm_mul_ps(temp0_14, temp0_8)
        float temp0_20[0x4] = _mm_sub_ps(temp0_18, temp0_17)
        float temp0_21[0x4] = _mm_add_ps(temp0_19, temp0_6)
        float temp0_22[0x4] = _mm_unpacklo_ps(rbx[-2], zmm15.q)
        float temp0_24[0x4] = __addps_xmmps_memps(_mm_add_ps(temp0_20, temp0_21), arg3[1])
        float var_148 = temp0_24[0]
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x55)
        float var_140_1 = _mm_shuffle_ps(temp0_24, temp0_24, 0xaa)[0]
        float temp0_29[0x4] =
            __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_22, _mm_unpacklo_ps(zmm6, 0)[0].q), arg3[2])
        float var_144_1 = temp0_25[0]
        float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0xc9), temp0_3)
        float temp0_34[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0xd2), temp0_7), temp0_31)
        float temp0_35[0x4] = _mm_add_ps(temp0_34, temp0_34)
        float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xd2)
        float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0xc9), temp0_3)
        float temp0_39[0x4] = _mm_mul_ps(temp0_36, temp0_7)
        float temp0_40[0x4] = _mm_mul_ps(temp0_35, temp0_8)
        float temp0_44[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_39, temp0_38), _mm_add_ps(temp0_40, temp0_29)), arg3[1])
        float var_13c = temp0_44[0]
        float temp0_45[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0x55)
        float var_134_1 = _mm_shuffle_ps(temp0_44, temp0_44, 0xaa)[0]
        float var_138_1 = temp0_45[0]
        (*(rax_2 + 0x30))(arg2, &var_13c, &var_148, &var_f0, 0, 0, 0, 0)
        zmm6 = *rsi_1
        void var_e0
        sub_140acc920(&var_e0, &arg_28)
        zmm9 = *arg3
        float temp0_47[0x4] = _mm_unpacklo_ps(rbx[-1], 0)
        int64_t rax_3 = *arg2
        float temp0_50[0x4] = __mulps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm10, zmm6[0].q), temp0_47[0].q), arg3[2])
        float temp0_51[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xd2)
        float temp0_52[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
        float temp0_53[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
        float temp0_54[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xc9)
        float temp0_55[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xd2)
        float temp0_56[0x4] = _mm_mul_ps(temp0_54, temp0_51)
        float temp0_58[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_55, temp0_52), temp0_56)
        float temp0_59[0x4] = _mm_add_ps(temp0_58, temp0_58)
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xd2)
        float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xc9), temp0_51)
        float temp0_63[0x4] = _mm_mul_ps(temp0_60, temp0_52)
        float temp0_64[0x4] = _mm_mul_ps(temp0_59, temp0_53)
        float temp0_65[0x4] = _mm_sub_ps(temp0_63, temp0_62)
        float temp0_66[0x4] = _mm_add_ps(temp0_64, temp0_50)
        float temp0_67[0x4] = _mm_unpacklo_ps(zmm10, zmm6[0].q)
        float temp0_68[0x4] = _mm_add_ps(temp0_65, temp0_66)
        float zmm2[0x4] = rbx[-1]
        float temp0_69[0x4] = __addps_xmmps_memps(temp0_68, arg3[1])
        float var_130 = temp0_69[0]
        float temp0_70[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0x55)
        float var_128_1 = _mm_shuffle_ps(temp0_69, temp0_69, 0xaa)[0]
        float temp0_74[0x4] =
            __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_67, _mm_unpacklo_ps(zmm2, 0)[0].q), arg3[2])
        float var_12c_1 = temp0_70[0]
        float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xc9), temp0_51)
        float temp0_79[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xd2), temp0_52), temp0_76)
        float temp0_80[0x4] = _mm_add_ps(temp0_79, temp0_79)
        float temp0_81[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0xd2)
        float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_80, temp0_80, 0xc9), temp0_51)
        float temp0_84[0x4] = _mm_mul_ps(temp0_81, temp0_52)
        float temp0_85[0x4] = _mm_mul_ps(temp0_80, temp0_53)
        float temp0_89[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_84, temp0_83), _mm_add_ps(temp0_85, temp0_74)), arg3[1])
        float var_124 = temp0_89[0]
        float temp0_90[0x4] = _mm_shuffle_ps(temp0_89, temp0_89, 0x55)
        float var_11c_1 = _mm_shuffle_ps(temp0_89, temp0_89, 0xaa)[0]
        float var_120_1 = temp0_90[0]
        (*(rax_3 + 0x30))(arg2, &var_124, &var_130, &var_e0, 0, 0, 0, 0)
        zmm6 = rsi_1[-2]
        void var_d0
        sub_140acc920(&var_d0, &arg_28)
        zmm9 = *arg3
        float zmm0_3[0x4] = *rbx
        float temp0_92[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
        float temp0_93[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xd2)
        float temp0_94[0x4] = _mm_unpacklo_ps(zmm11, 0)
        float temp0_97[0x4] = __mulps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0_3[0].q), temp0_94[0].q), arg3[2])
        float temp0_98[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
        float temp0_99[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0xc9)
        float temp0_100[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0xd2)
        float temp0_101[0x4] = _mm_mul_ps(temp0_99, temp0_93)
        float temp0_103[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_100, temp0_92), temp0_101)
        float temp0_104[0x4] = _mm_add_ps(temp0_103, temp0_103)
        float temp0_105[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0xc9)
        float temp0_106[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0xd2)
        float temp0_107[0x4] = _mm_mul_ps(temp0_105, temp0_93)
        float temp0_108[0x4] = _mm_mul_ps(temp0_106, temp0_92)
        float temp0_109[0x4] = _mm_mul_ps(temp0_104, temp0_98)
        float temp0_113[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_108, temp0_107), _mm_add_ps(temp0_109, temp0_97)), arg3[1])
        float var_118 = temp0_113[0]
        float var_114_1 = _mm_shuffle_ps(temp0_113, temp0_113, 0x55)[0]
        float temp0_115[0x4] = _mm_unpacklo_ps(zmm6, (*rbx)[0].q)
        float var_110_1 = _mm_shuffle_ps(temp0_113, temp0_113, 0xaa)[0]
        float temp0_119[0x4] =
            __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_115, _mm_unpacklo_ps(zmm11, 0)[0].q), arg3[2])
        float temp0_121[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_119, temp0_119, 0xc9), temp0_93)
        float temp0_124[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_119, temp0_119, 0xd2), temp0_92), temp0_121)
        float temp0_125[0x4] = _mm_add_ps(temp0_124, temp0_124)
        float temp0_126[0x4] = _mm_shuffle_ps(temp0_125, temp0_125, 0xd2)
        float temp0_128[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_125, temp0_125, 0xc9), temp0_93)
        float temp0_129[0x4] = _mm_mul_ps(temp0_126, temp0_92)
        float temp0_130[0x4] = _mm_mul_ps(temp0_125, temp0_98)
        float temp0_134[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_129, temp0_128), _mm_add_ps(temp0_130, temp0_119)), arg3[1])
        float var_158 = temp0_134[0]
        float temp0_135[0x4] = _mm_shuffle_ps(temp0_134, temp0_134, 0x55)
        int64_t rax_4 = *arg2
        float var_154_1 = temp0_135[0]
        float var_150_2 = _mm_shuffle_ps(temp0_134, temp0_134, 0xaa)[0]
        result = (*(rax_4 + 0x30))(arg2, &var_158, &var_118, &var_d0, 0, 0, 0, 0, var_158, 
            var_150_2, var_148, var_140_1, var_138_1, var_130, var_128_1, var_120_1, var_118, 
            var_110_1, var_108)
        rsi_1 = &rsi_1[3]
        j = j_1
        j_1 -= 1
    while (j != 1)
    rbx = &rbx[3]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
