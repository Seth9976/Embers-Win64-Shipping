// 函数: sub_1415e30d0
// 地址: 0x1415e30d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
*arg1 = 0x3f800000
void* rdi = arg2
arg1[1].d = 0
arg1[3].d = 0x7f7fffff
float var_88[0x3][0x4]
float (* rax_3)[0x4] = sub_140ad7d70(arg3, &var_88, arg5)
char rcx_1 = *(rdi + 8)
void* rdx_1 = rdi

if (rcx_1 != 0x81)
    rdx_1 = nullptr

float var_b8[0x4] = *rax_3
int128_t var_a8 = rax_3[1]
float zmm0[0x4] = rax_3[2]
int32_t var_e8 = 0x7f7fffff
float var_98[0x4] = zmm0
int32_t var_e0
int32_t var_dc
int32_t var_d8
int32_t var_d0
int32_t var_cc
int32_t var_c8

if (rdx_1 == 0)
    void* const rax_6 = rdi
    
    if (rcx_1 != 0x41)
        rax_6 = nullptr
    
    float var_c8_2
    
    if (rax_6 == 0)
        if (rcx_1 != 1)
            rdi = nullptr
        
        if (rdi != 0 && sub_1415d1a90(arg4, rdi, &var_b8, arg6, &var_e0, &var_d0, &var_e8) != 0)
            arg1[3].d = var_e8[0]
            float zmm5_3[0x4] = *arg5
            float temp0_96[0x4] = _mm_unpacklo_ps(var_e0, var_d8[0].q)
            float temp0_97[0x4] = _mm_unpacklo_ps(var_dc, 0)
            float temp0_98[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            float temp0_100[0x4] =
                __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_96, temp0_97[0].q), arg5[2])
            float temp0_101[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xd2)
            float temp0_102[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xff)
            float temp0_104[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_100, temp0_100, 0xc9), temp0_101)
            float temp0_107[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_100, temp0_100, 0xd2), temp0_98), temp0_104)
            float temp0_108[0x4] = _mm_add_ps(temp0_107, temp0_107)
            float temp0_109[0x4] = _mm_mul_ps(temp0_102, temp0_108)
            float temp0_110[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0xd2)
            float temp0_112[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_108, temp0_108, 0xc9), temp0_101)
            float temp0_113[0x4] = _mm_add_ps(temp0_109, temp0_100)
            float zmm6_3[0x4] = var_d0
            float temp0_117[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_110, temp0_98), temp0_112), temp0_113), 
                arg5[1])
            float var_d8_3 = _mm_shuffle_ps(temp0_117, temp0_117, 0xaa)[0]
            *(arg1 + 0xc) =
                (_mm_unpacklo_ps(temp0_117, _mm_shuffle_ps(temp0_117, temp0_117, 0x55)[0].q)).q
            float temp0_123[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_3, var_c8[0].q), 
                _mm_unpacklo_ps(var_cc, 0)[0].q)
            *(arg1 + 0x14) = var_d8_3
            zmm5_3 = *arg5
            float temp0_124[0x4] = _mm_shuffle_ps(temp0_123, temp0_123, 0xc9)
            float temp0_125[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xd2)
            float temp0_126[0x4] = _mm_mul_ps(temp0_124, temp0_125)
            float temp0_127[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
            float temp0_129[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_123, temp0_123, 0xd2), temp0_127)
            float temp0_130[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xff)
            float temp0_131[0x4] = _mm_sub_ps(temp0_129, temp0_126)
            float temp0_132[0x4] = _mm_add_ps(temp0_131, temp0_131)
            float temp0_133[0x4] = _mm_mul_ps(temp0_130, temp0_132)
            float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_132, temp0_132, 0xc9), temp0_125)
            float temp0_136[0x4] = _mm_shuffle_ps(temp0_132, temp0_132, 0xd2)
            float temp0_137[0x4] = _mm_add_ps(temp0_133, temp0_123)
            float temp0_140[0x4] =
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_136, temp0_127), temp0_135), temp0_137)
            var_c8_2 = _mm_shuffle_ps(temp0_140, temp0_140, 0xaa)[0]
            *arg1 = (_mm_unpacklo_ps(temp0_140, _mm_shuffle_ps(temp0_140, temp0_140, 0x55)[0].q)).q
            arg1[1].d = var_c8_2
    else
        void* rdx_2 = *(rax_6 + 0x10)
        
        if (rdx_2 != 0 && sub_1415d1a90(arg4, rdx_2, &var_b8, arg6, &var_e0, &var_d0, &var_e8) != 0)
            arg1[3].d = var_e8[0]
            float zmm5_2[0x4] = *arg5
            float temp0_49[0x4] = _mm_unpacklo_ps(var_e0, var_d8[0].q)
            float temp0_50[0x4] = _mm_unpacklo_ps(var_dc, 0)
            float temp0_51[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            float temp0_53[0x4] =
                __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_49, temp0_50[0].q), arg5[2])
            float temp0_54[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
            float temp0_55[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
            float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xc9), temp0_54)
            float temp0_60[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xd2), temp0_51), temp0_57)
            float temp0_61[0x4] = _mm_add_ps(temp0_60, temp0_60)
            float temp0_62[0x4] = _mm_mul_ps(temp0_55, temp0_61)
            float temp0_63[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xd2)
            float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xc9), temp0_54)
            float temp0_66[0x4] = _mm_add_ps(temp0_62, temp0_53)
            float zmm6_2[0x4] = var_d0
            float temp0_70[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_63, temp0_51), temp0_65), temp0_66), arg5[1])
            float var_d8_2 = _mm_shuffle_ps(temp0_70, temp0_70, 0xaa)[0]
            *(arg1 + 0xc) =
                (_mm_unpacklo_ps(temp0_70, _mm_shuffle_ps(temp0_70, temp0_70, 0x55)[0].q)).q
            float temp0_76[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_2, var_c8[0].q), 
                _mm_unpacklo_ps(var_cc, 0)[0].q)
            *(arg1 + 0x14) = var_d8_2
            zmm5_2 = *arg5
            float temp0_77[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xc9)
            float temp0_78[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            float temp0_79[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
            float temp0_80[0x4] = _mm_mul_ps(temp0_77, temp0_79)
            float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0xd2), temp0_78)
            float temp0_83[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
            float temp0_84[0x4] = _mm_sub_ps(temp0_82, temp0_80)
            float temp0_85[0x4] = _mm_add_ps(temp0_84, temp0_84)
            float temp0_86[0x4] = _mm_mul_ps(temp0_83, temp0_85)
            float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_85, temp0_85, 0xd2), temp0_78)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xc9)
            float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_76)
            float temp0_93[0x4] =
                _mm_add_ps(_mm_sub_ps(temp0_88, _mm_mul_ps(temp0_89, temp0_79)), temp0_90)
            var_c8_2 = _mm_shuffle_ps(temp0_93, temp0_93, 0xaa)[0]
            *arg1 = (_mm_unpacklo_ps(temp0_93, _mm_shuffle_ps(temp0_93, temp0_93, 0x55)[0].q)).q
            arg1[1].d = var_c8_2
else if (sub_1415d2810(arg4, rdx_1, &var_b8, arg6, &var_e0, &var_d0, &var_e8) != 0)
    arg1[3].d = var_e8[0]
    float zmm5_1[0x4] = *arg5
    float temp0_1[0x4] = _mm_unpacklo_ps(var_e0, var_d8[0].q)
    float temp0_2[0x4] = _mm_unpacklo_ps(var_dc, 0)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_5[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_1, temp0_2[0].q), arg5[2])
    float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_6)
    float temp0_12[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_3), temp0_9)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
    float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_6)
    float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_5)
    float zmm6_1[0x4] = var_d0
    float temp0_22[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_15, temp0_3), temp0_17), temp0_18), arg5[1])
    float var_d8_1 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
    *(arg1 + 0xc) = (_mm_unpacklo_ps(temp0_22, _mm_shuffle_ps(temp0_22, temp0_22, 0x55)[0].q)).q
    float temp0_28[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_1, var_c8[0].q), _mm_unpacklo_ps(var_cc, 0)[0].q)
    *(arg1 + 0x14) = var_d8_1
    zmm5_1 = *arg5
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc9)
    float temp0_30[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_31[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_32[0x4] = _mm_mul_ps(temp0_29, temp0_31)
    float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), temp0_30)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_36[0x4] = _mm_sub_ps(temp0_34, temp0_32)
    float temp0_37[0x4] = _mm_add_ps(temp0_36, temp0_36)
    float temp0_38[0x4] = _mm_mul_ps(temp0_35, temp0_37)
    float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0xd2), temp0_30)
    float temp0_41[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xc9)
    float temp0_42[0x4] = _mm_add_ps(temp0_38, temp0_28)
    float temp0_45[0x4] = _mm_add_ps(_mm_sub_ps(temp0_40, _mm_mul_ps(temp0_41, temp0_31)), temp0_42)
    float var_c8_1 = _mm_shuffle_ps(temp0_45, temp0_45, 0xaa)[0]
    *arg1 = (_mm_unpacklo_ps(temp0_45, _mm_shuffle_ps(temp0_45, temp0_45, 0x55)[0].q)).q
    arg1[1].d = var_c8_1
__security_check_cookie(rax_1 ^ &var_128)
return arg1
