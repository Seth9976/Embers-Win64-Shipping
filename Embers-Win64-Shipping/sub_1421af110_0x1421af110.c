// 函数: sub_1421af110
// 地址: 0x1421af110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = arg6
int64_t* rdi = arg4
float zmm3[0x4] = arg5[1]
uint128_t zmm1
zmm1.d = arg5[2].d f* zmm0[0]
float zmm2 = zmm0[0] * *arg5 + *arg4
zmm3[0] = zmm3[0] * zmm0[0]
zmm1.d = zmm1.d f+ arg4[2]
zmm3[0] = zmm3[0] + arg4[1]
arg4[2] = zmm1.d
*arg4
zmm1.d = zmm2
_mm_shuffle_ps(zmm1, zmm1, 0xe1)
zmm1.d = zmm3[0]
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
*arg4 = zmm1.q
*(arg2 + 0x18) = zmm1.q
*(arg2 + 0x20) = arg4[2]
float zmm4[0x4] = *arg4
float rax_1
int64_t* rcx

if (_mm_and_ps(zmm4, 0x7fffffff)[0] > 9.99999975e-05f)
label_1421af1e3:
    zmm1 = arg4[1]
    zmm2 = arg4[2]
    int32_t var_bc_1 = 0
    float var_c8[0x4]
    zmm3 = var_c8
    zmm3[0] = zmm4[0]
    float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    temp0_5[0] = zmm1.d
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
    temp0_6[0] = zmm2
    int64_t var_d8 = 0
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc9)
    var_c8 = temp0_7
    float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_7, temp0_7, 0xff), arg8[3])
    int32_t var_d0_1 = 0
    zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_7, temp0_7, 0x55), arg8[1])
    float temp0_13[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_7, temp0_7, 0xaa), arg8[2])
    float temp0_15[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_7, temp0_7, 0), *arg8)
    float temp0_18[0x4] = _mm_add_ps(_mm_add_ps(temp0_9, temp0_13), _mm_add_ps(zmm1, temp0_15))
    zmm1 = _mm_shuffle_ps(temp0_18, temp0_18, 0x55)
    float temp0_20[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xaa)
    temp0_20[0] = temp0_20[0] * 360f
    temp0_18[0] = temp0_18[0] * 360f
    zmm1.d = zmm1.d f* 360f
    float var_d0_2 = temp0_20[0]
    var_d8.d = temp0_18[0]
    var_d8:4.d = zmm1.d
    sub_140ada0c0(&var_c8, &var_d8)
    float var_b8[0x10]
    float* rax_2 = sub_14077e760(&var_b8, &var_c8)
    float zmm2_1[0x4] = *arg8
    float zmm3_1[0x4] = arg8[1]
    float zmm4_1[0x4] = arg8[2]
    float zmm5_1[0x4] = *(rax_2 + 0x10)
    float zmm7_1[0x4] = *rax_2
    float zmm8_1[0x4] = *(rax_2 + 0x20)
    float zmm10[0x4] = *(rax_2 + 0x30)
    float zmm9_1[0x4] = arg8[3]
    float temp0_21[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_22[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    float temp0_23[0x4] = _mm_mul_ps(temp0_21, zmm5_1)
    float temp0_24[0x4] = _mm_mul_ps(temp0_22, zmm7_1)
    float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), zmm8_1)
    float temp0_27[0x4] = _mm_add_ps(temp0_23, temp0_24)
    float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm10)
    float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), zmm5_1)
    float temp0_32[0x4] = _mm_add_ps(temp0_27, temp0_26)
    float temp0_33[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
    float temp0_34[0x4] = _mm_add_ps(temp0_32, temp0_29)
    *arg8 = temp0_34
    rcx = arg7
    float temp0_35[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
    float temp0_36[0x4] = _mm_mul_ps(temp0_33, zmm7_1)
    var_c8[0].q = 0
    float temp0_37[0x4] = _mm_mul_ps(temp0_35, zmm8_1)
    var_c8[2] = 0
    float temp0_38[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    float temp0_39[0x4] = _mm_add_ps(temp0_31, temp0_36)
    float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm10)
    float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm7_1)
    float temp0_44[0x4] = _mm_add_ps(temp0_39, temp0_37)
    float temp0_45[0x4] = _mm_mul_ps(temp0_38, zmm5_1)
    float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm8_1)
    float temp0_48[0x4] = _mm_add_ps(temp0_45, temp0_43)
    float temp0_49[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
    float temp0_50[0x4] = _mm_add_ps(temp0_44, temp0_41)
    float temp0_51[0x4] = _mm_mul_ps(temp0_49, zmm10)
    float temp0_52[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0)
    float temp0_53[0x4] = _mm_add_ps(temp0_48, temp0_47)
    float temp0_54[0x4] = _mm_mul_ps(temp0_52, zmm7_1)
    arg8[1] = temp0_50
    float temp0_56[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9_1, zmm9_1, 0xaa), zmm8_1)
    float temp0_57[0x4] = _mm_add_ps(temp0_53, temp0_51)
    float temp0_59[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9_1, zmm9_1, 0x55), zmm5_1)
    float temp0_60[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xff)
    arg8[2] = temp0_57
    float temp0_61[0x4] = _mm_mul_ps(temp0_60, zmm10)
    float temp0_64[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_59, temp0_54), temp0_56), temp0_61)
    arg8[3] = temp0_64
    float zmm0_1[0x4] = *(arg3 + 4)
    float zmm1_1[0x4] = arg3[1].d
    zmm3_1 = *arg3
    float temp0_65[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
    temp0_65[0] = zmm0_1[0]
    float temp0_66[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xc6)
    temp0_66[0] = zmm1_1[0]
    float temp0_67[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x27)
    temp0_67[0] = 0x3f800000
    float temp0_68[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0x39)
    var_c8 = temp0_68
    float temp0_69[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0)
    float temp0_70[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0x55)
    float temp0_71[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xff)
    float temp0_72[0x4] = _mm_mul_ps(temp0_70, temp0_50)
    float temp0_73[0x4] = _mm_mul_ps(temp0_69, temp0_34)
    float temp0_74[0x4] = _mm_mul_ps(temp0_71, temp0_64)
    float temp0_79[0x4] = _mm_add_ps(_mm_add_ps(temp0_73, temp0_72), 
        _mm_add_ps(temp0_74, _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xaa), temp0_57)))
    var_c8[2] = _mm_shuffle_ps(temp0_79, temp0_79, 0xaa)[0]
    rax_1 = var_c8[2]
    *rcx = (_mm_unpacklo_ps(temp0_79, _mm_shuffle_ps(temp0_79, temp0_79, 0x55)[0].q)).q
else
    if (_mm_and_ps(arg4[1], 0x7fffffff)[0] > 9.99999975e-05f)
        goto label_1421af1e3
    
    if (_mm_and_ps(arg4[2], 0x7fffffff)[0] > 9.99999975e-05f)
        goto label_1421af1e3
    
    rcx = arg7
    *rcx = *arg3
    rax_1 = arg3[1].d

rcx[1].d = rax_1
*arg3 = 0
arg3[1].d = 0
*rdi = 0
rdi[1].d = 0
*arg5 = 0.0
arg5[2] = 0
return 0
