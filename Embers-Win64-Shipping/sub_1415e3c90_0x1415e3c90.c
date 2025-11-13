// 函数: sub_1415e3c90
// 地址: 0x1415e3c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
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
int32_t var_f8 = 0x7f7fffff
float var_98[0x4] = zmm0
int32_t var_e8
int32_t var_e4
int32_t var_e0
int32_t var_d8
int32_t var_d4
int32_t var_d0

if (rdx_1 == 0)
    void* const rax_6 = rdi
    
    if (rcx_1 != 0x41)
        rax_6 = nullptr
    
    float var_ec_4
    float zmm0_2[0x4]
    float zmm1_2[0x4]
    float zmm5_2[0x4]
    
    if (rax_6 == 0)
        if (rcx_1 != 1)
            rdi = nullptr
        
        if (rdi != 0 && sub_1417afc70(arg4, rdi, &var_b8, arg6, &var_e8, &var_d8, &var_f8) != 0)
            arg1[3].d = var_f8[0]
            zmm5_2 = *arg5
            float temp0_74[0x4] = _mm_unpacklo_ps(var_e8, var_e0[0].q)
            float temp0_75[0x4] = _mm_unpacklo_ps(var_e4, 0)
            float temp0_76[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
            float temp0_78[0x4] =
                __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_74, temp0_75[0].q), arg5[2])
            float temp0_79[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            float temp0_80[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
            float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0xc9), temp0_76)
            float temp0_85[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0xd2), temp0_79), temp0_82)
            float temp0_86[0x4] = _mm_add_ps(temp0_85, temp0_85)
            float temp0_87[0x4] = _mm_mul_ps(temp0_80, temp0_86)
            float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xc9), temp0_76)
            float temp0_90[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0xd2)
            float temp0_91[0x4] = _mm_add_ps(temp0_87, temp0_78)
            float temp0_95[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_90, temp0_79), temp0_89), temp0_91), arg5[1])
            var_ec_4 = _mm_shuffle_ps(temp0_95, temp0_95, 0xaa)[0]
            zmm0_2 = temp0_95
            zmm1_2 = _mm_shuffle_ps(temp0_95, temp0_95, 0x55)
            goto label_1415e40b5
    else
        int64_t rdx_2 = *(rax_6 + 0x10)
        
        if (rdx_2 != 0 && sub_1417afc70(arg4, rdx_2, &var_b8, arg6, &var_e8, &var_d8, &var_f8) != 0)
            arg1[3].d = var_f8[0]
            zmm5_2 = *arg5
            float temp0_50[0x4] = _mm_unpacklo_ps(var_e8, var_e0[0].q)
            float temp0_51[0x4] = _mm_unpacklo_ps(var_e4, 0)
            float temp0_52[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
            float temp0_54[0x4] =
                __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_50, temp0_51[0].q), arg5[2])
            float temp0_55[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            float temp0_56[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
            float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xc9), temp0_52)
            float temp0_61[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xd2), temp0_55), temp0_58)
            float temp0_62[0x4] = _mm_add_ps(temp0_61, temp0_61)
            float temp0_63[0x4] = _mm_mul_ps(temp0_56, temp0_62)
            float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xc9), temp0_52)
            float temp0_66[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xd2)
            float temp0_67[0x4] = _mm_add_ps(temp0_63, temp0_54)
            float temp0_71[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_66, temp0_55), temp0_65), temp0_67), arg5[1])
            var_ec_4 = _mm_shuffle_ps(temp0_71, temp0_71, 0xaa)[0]
            zmm0_2 = temp0_71
            zmm1_2 = _mm_shuffle_ps(temp0_71, temp0_71, 0x55)
        label_1415e40b5:
            float zmm6_2[0x4] = var_d8
            *(arg1 + 0xc) = (_mm_unpacklo_ps(zmm0_2, zmm1_2[0].q)).q
            float temp0_101[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_2, var_d0[0].q), 
                _mm_unpacklo_ps(var_d4, zx.o(0)[0].q)[0].q)
            *(arg1 + 0x14) = var_ec_4
            zmm5_2 = *arg5
            float temp0_102[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0xc9)
            float temp0_103[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
            float temp0_104[0x4] = _mm_mul_ps(temp0_102, temp0_103)
            float temp0_105[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            float temp0_107[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0xd2), temp0_105)
            float temp0_108[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
            float temp0_109[0x4] = _mm_sub_ps(temp0_107, temp0_104)
            float temp0_110[0x4] = _mm_add_ps(temp0_109, temp0_109)
            float temp0_111[0x4] = _mm_mul_ps(temp0_108, temp0_110)
            float temp0_113[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_110, temp0_110, 0xc9), temp0_103)
            float temp0_114[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0xd2)
            float temp0_115[0x4] = _mm_add_ps(temp0_111, temp0_101)
            float temp0_118[0x4] =
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_114, temp0_105), temp0_113), temp0_115)
            float var_ec_5 = _mm_shuffle_ps(temp0_118, temp0_118, 0xaa)[0]
            *arg1 = (_mm_unpacklo_ps(temp0_118, _mm_shuffle_ps(temp0_118, temp0_118, 0x55)[0].q)).q
            arg1[1].d = var_ec_5
else
    int32_t var_ec_1 = 0x3f800000
    int32_t var_c0_1 = 0x3f800000
    int64_t var_c8
    int64_t* var_100_1 = &var_c8
    int32_t* var_108_1 = &var_f8
    int32_t* var_110_1 = &var_d8
    int32_t* var_118_1 = &var_e8
    var_c8 = (_mm_unpacklo_ps(0x3f800000, 0x3f800000)).q
    
    if (sub_1417afe90(arg4, rdx_1, &var_b8, arg6, var_118_1, var_110_1, var_108_1, var_100_1) != 0)
        arg1[3].d = var_f8[0]
        float zmm5_1[0x4] = *arg5
        float temp0_5[0x4] = __mulps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(var_e8, var_e0[0].q), _mm_unpacklo_ps(var_e4, 0)[0].q), 
            arg5[2])
        float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        float temp0_8[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_6)
        float temp0_13[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_7), temp0_10)
        float temp0_14[0x4] = _mm_add_ps(temp0_13, temp0_13)
        float temp0_15[0x4] = _mm_mul_ps(temp0_8, temp0_14)
        float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xc9), temp0_6)
        float temp0_18[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xd2)
        float temp0_19[0x4] = _mm_add_ps(temp0_15, temp0_5)
        float zmm6_1[0x4] = var_d8
        float temp0_23[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_18, temp0_7), temp0_17), temp0_19), arg5[1])
        float var_ec_2 = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa)[0]
        *(arg1 + 0xc) = (_mm_unpacklo_ps(temp0_23, _mm_shuffle_ps(temp0_23, temp0_23, 0x55)[0].q)).q
        float temp0_27[0x4] = _mm_unpacklo_ps(var_d4, 0)
        float temp0_29[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_1, var_d0[0].q), temp0_27[0].q)
        *(arg1 + 0x14) = var_ec_2
        zmm5_1 = *arg5
        float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xc9)
        float temp0_31[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        float temp0_32[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        float temp0_33[0x4] = _mm_mul_ps(temp0_30, temp0_32)
        float temp0_35[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0xd2), temp0_31)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_37[0x4] = _mm_sub_ps(temp0_35, temp0_33)
        float temp0_38[0x4] = _mm_add_ps(temp0_37, temp0_37)
        float temp0_39[0x4] = _mm_mul_ps(temp0_36, temp0_38)
        float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_38, temp0_38, 0xc9), temp0_32)
        float temp0_42[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xd2)
        float temp0_43[0x4] = _mm_add_ps(temp0_39, temp0_29)
        float temp0_46[0x4] =
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_42, temp0_31), temp0_41), temp0_43)
        float var_ec_3 = _mm_shuffle_ps(temp0_46, temp0_46, 0xaa)[0]
        *arg1 = (_mm_unpacklo_ps(temp0_46, _mm_shuffle_ps(temp0_46, temp0_46, 0x55)[0].q)).q
        arg1[1].d = var_ec_3
__security_check_cookie(rax_1 ^ &var_138)
return arg1
