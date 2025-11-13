// 函数: sub_1416f4ac0
// 地址: 0x1416f4ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0x3f800000
int32_t rdi = 0
arg1[1].d = 0
arg1[3].d = 0x7f7fffff
float var_118[0x4]
uint32_t var_e8[0x4][0x4]
float var_a8[0x4][0x4]
sub_1407c8dd0(&var_118, sub_1417a34c0(&var_a8, arg3, sub_141743c50(arg5, &var_e8)))
float zmm4[0x4] = var_118
float zmm0[0x4] = *(arg2 + 0x18)
float zmm5[0x4] = *(arg2 + 0x10)
float zmm7[0x4] = *arg4
float temp0[0x4] = _mm_unpacklo_ps(*(arg2 + 0x14), 0)
float var_f8[0x4]
float temp0_3[0x4] =
    __mulps_xmmps_memps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, zmm0[0].q), temp0[0].q), var_f8)
float temp0_4[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
float temp0_6[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xd2)
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xc9), temp0_5)
float temp0_11[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_7, temp0_4), temp0_9)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_mul_ps(temp0_6, temp0_12)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), temp0_4)
float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_3)
float temp0_18[0x4] = _mm_mul_ps(temp0_14, temp0_5)
zmm5 = *(arg4 + 4)
float zmm1[0x4] = *(arg4 + 8)
float var_108[0x4]
float temp0_21[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_16, temp0_18), temp0_17), var_108)
bool cond:0 = temp0_21[0] f> *(arg4 + 0xc)
zmm7[0] = zmm7[0] - temp0_21[0]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)
zmm5[0] = zmm5[0] - temp0_22[0]
float zmm3[0x4] = temp0_22
zmm1[0] = zmm1[0] - temp0_23[0]
zmm3[0] = zmm3[0] f- arg4[1].d
float zmm2[0x4] = temp0_23
float var_128 = zmm7[0]
zmm2[0] = zmm2[0] f- *(arg4 + 0x14)
zmm4 = temp0_21
float var_124 = zmm5[0]
zmm4[0] = zmm4[0] f- *(arg4 + 0xc)
float var_134 = zmm3[0]
float var_120 = zmm1[0]
float var_130 = zmm2[0]
float var_138 = zmm4[0]
float zmm6[0x4]
float zmm8[0x4]
float zmm9[0x4]

if (cond:0 || temp0_22[0] f> arg4[1].d || temp0_23[0] f> *(arg4 + 0x14) || temp0_21[0] f< *arg4
        || temp0_22[0] f< *(arg4 + 4) || temp0_23[0] f< *(arg4 + 8))
    if (not(zmm4[0] > 0f))
        if (zmm7[0] <= 0f)
            zmm4 = zx.o(0)
        else
            zmm4 = zmm7 ^ 0x80000000
    
    if (not(zmm3[0] > 0f))
        if (zmm5[0] <= 0f)
            zmm3 = zx.o(0)
        else
            zmm3 = zmm5 ^ 0x80000000
    
    if (not(zmm2[0] > 0f))
        if (zmm1[0] <= 0f)
            zmm2 = zx.o(0)
        else
            zmm2 = zmm1 ^ 0x80000000
    
    zmm4[0] = zmm4[0] * zmm4[0]
    zmm2[0] = zmm2[0] * zmm2[0]
    zmm7 = zx.o(0)
    zmm3[0] = zmm3[0] * zmm3[0]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm4[0] = zmm4[0] + zmm2[0]
    
    if (zmm4[0] >= 9.99999975e-05f)
        zmm7 = _mm_sqrt_ss(0, zmm4[0])
        zmm6 = 0x3f800000
        bool cond:2_1 = zmm7[0] >= 9.99999975e-05f
        zmm6[0] = 1f / zmm7[0]
        zmm9 = zmm6
        zmm6[0] = zmm6[0] * zmm3[0]
        zmm9[0] = zmm9[0] * zmm4[0]
        zmm8 = zmm6
        zmm6[0] = zmm6[0] * zmm2[0]
        
        if (not(cond:2_1))
            goto label_1416f4df0
    else
        zmm9 = 0x3f800000
        zmm8 = zx.o(0)
        zmm6 = zx.o(0)
    label_1416f4df0:
        zmm9[0] - 0f
        
        if (not(zmm9[0] <= 0f))
            zmm9 = 0x3f800000
        else if (not(zmm9[0] >= 0f))
            zmm9 = 0xbf800000
        
        zmm8[0] - 0f
        
        if (not(zmm8[0] <= 0f))
            zmm8 = 0x3f800000
        else if (not(zmm8[0] >= 0f))
            zmm8 = 0xbf800000
        
        zmm6[0] - 0f
        
        if (not(zmm6[0] <= 0f))
            zmm6 = 0x3f800000
        else if (not(zmm6[0] >= 0f))
            zmm6 = 0xbf800000
        
        zmm9[0] = zmm9[0] * zmm9[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm9[0] = zmm9[0] + zmm8[0]
        zmm9[0] = zmm9[0] + zmm6[0]
        
        if (not(zmm9[0] <= 9.99999994e-09f))
            zmm5 = 0x3f000000
            float temp0_29[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9[0])
            zmm2 = 0x3f000000
            zmm9[0] = zmm9[0] * 0.5f
            temp0_29[0] = temp0_29[0] * temp0_29[0]
            zmm9[0] = zmm9[0] * temp0_29[0]
            zmm2[0] = 0.5f - zmm9[0]
            temp0_29[0] = temp0_29[0] * zmm2[0]
            temp0_29[0] = temp0_29[0] + temp0_29[0]
            temp0_29[0] = temp0_29[0] * temp0_29[0]
            zmm9[0] = zmm9[0] * temp0_29[0]
            zmm5[0] = 0.5f - zmm9[0]
            temp0_29[0] = temp0_29[0] * zmm5[0]
            temp0_29[0] = temp0_29[0] + temp0_29[0]
            zmm9[0] = zmm9[0] * temp0_29[0]
            zmm8[0] = zmm8[0] * temp0_29[0]
            zmm6[0] = zmm6[0] * temp0_29[0]
else
    float temp0_24[0x4] = _mm_max_ss(zmm5[0], zmm3[0])
    zmm7 = _mm_max_ss(zmm7[0], zmm4[0])
    float temp0_26[0x4] = _mm_max_ss(zmm1[0], zmm2[0])
    
    if (zmm7[0] <= temp0_24[0])
        if (temp0_24[0] <= temp0_26[0])
            zmm7 = temp0_26
            rdi = 2
        else
            rdi = 1
            zmm7 = temp0_24
    else if (not(zmm7[0] > temp0_26[0]))
        zmm7 = temp0_26
        rdi = 2
    
    uint64_t rax_2 = zx.q(rdi)
    int64_t* rax_3
    
    if ((&var_128)[rax_2][0] >= (&var_138)[rax_2])
        int64_t* rax_4 = sub_141730f40(&var_128, rdi)
        var_138 = (*rax_4 ^ 0x80000000)[0]
        float var_134_1 = (*(rax_4 + 4) ^ 0x80000000)[0]
        rax_3 = &var_138
        float var_130_1 = (rax_4[1].d ^ 0x80000000)[0]
    else
        rax_3 = sub_141730f40(&var_138, rdi)
    
    zmm0 = zx.o(*rax_3)
    zmm6 = rax_3[1].d
    var_138.q = zmm0.q
    zmm9 = var_138
    zmm8 = _mm_shuffle_ps(zmm0, zmm0, 0x55)

zmm7[0] = zmm7[0] f- *(arg2 + 0x1c)
float temp0_32[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm9, zmm6[0].q), _mm_unpacklo_ps(zmm8, zx.o(0)[0].q)[0].q)
arg1[3].d = zmm7[0]
zmm5 = *arg5
float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc9)
float temp0_34[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_35[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_36[0x4] = _mm_mul_ps(temp0_33, temp0_35)
float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xd2), temp0_34)
float temp0_39[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_40[0x4] = _mm_sub_ps(temp0_38, temp0_36)
float temp0_41[0x4] = _mm_add_ps(temp0_40, temp0_40)
float temp0_42[0x4] = _mm_mul_ps(temp0_39, temp0_41)
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_41, temp0_41, 0xc9), temp0_35)
float temp0_45[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xd2)
float temp0_46[0x4] = _mm_add_ps(temp0_42, temp0_32)
float temp0_49[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_45, temp0_34), temp0_44), temp0_46)
float var_130_3 = _mm_shuffle_ps(temp0_49, temp0_49, 0xaa)[0]
*arg1 = (_mm_unpacklo_ps(temp0_49, _mm_shuffle_ps(temp0_49, temp0_49, 0x55)[0].q)).q
arg1[1].d = var_130_3
zmm5 = *arg3
zmm0 = *(arg2 + 0x18)
zmm9 = *(arg2 + 0x1c)
zmm2 = *(arg2 + 0x14)
zmm6 = *(arg2 + 0x10)
zmm9[0] = zmm9[0] f* *arg1
zmm9[0] = zmm9[0] f* *(arg1 + 4)
zmm9[0] = zmm9[0] f* arg1[1].d
float temp0_56[0x4] = __mulps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q), arg3[2])
float temp0_57[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_58[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_59[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xc9), temp0_58)
float temp0_64[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xd2), temp0_57), temp0_61)
float temp0_65[0x4] = _mm_add_ps(temp0_64, temp0_64)
float temp0_66[0x4] = _mm_mul_ps(temp0_59, temp0_65)
float temp0_67[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xc9)
float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xd2), temp0_57)
float temp0_70[0x4] = _mm_mul_ps(temp0_67, temp0_58)
float temp0_71[0x4] = _mm_add_ps(temp0_66, temp0_56)
float temp0_74[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_69, temp0_70), temp0_71), arg3[1])
temp0_74[0] = temp0_74[0] - zmm9[0]
float temp0_75[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0x55)
temp0_75[0] = temp0_75[0] - zmm9[0]
float temp0_76[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xaa)
temp0_76[0] = temp0_76[0] - zmm9[0]
*(arg1 + 0xc) = (_mm_unpacklo_ps(temp0_74, temp0_75[0].q)).q
*(arg1 + 0x14) = temp0_76[0]
return arg1
