// 函数: sub_141a91a70
// 地址: 0x141a91a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
float var_88[0x3][0x4]
float (* result)[0x4] = sub_140ad7d70(arg3, &var_88, arg2)
uint32_t var_d8[0x4] = var_88[0]
float var_c8[0x4]
float var_a8[0x4]
sub_140ae2000(&var_d8, arg5, &var_c8, &var_a8)
float zmm6[0x4] = var_c8
float zmm5[0x4] = data_143f2b8b0
float temp0[0x4] = _mm_mul_ps(zmm6, zmm6)
float temp0_2[0x4] = _mm_add_ps(temp0, _mm_shuffle_ps(temp0, temp0, 0x4e))
float temp0_4[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0x39), temp0_2)
float temp0_5[0x4] = _mm_rsqrt_ps(temp0_4)
float temp0_6[0x4] = _mm_mul_ps(zmm5, temp0_4)
float temp0_11[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_5, temp0_5), temp0_6)), temp0_5), 
    temp0_5)
float temp0_14[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_11, temp0_11), temp0_6))
uint32_t zmm0_1[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_4, 2)
zmm5 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_14, temp0_11), temp0_11), zmm6) ^ data_143f2b8a0, zmm0_1)
zmm0_1 = *arg4
var_c8 = zmm5 ^ data_143f2b8a0
var_d8 = zmm0_1
float var_b8[0x4]
float var_98[0x4]
sub_140ae2000(&var_d8, arg5, &var_98, &var_b8)
float zmm5_1[0x4] = var_b8
float zmm8[0x4] = data_143f2b8b0
float temp0_21[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
float temp0_23[0x4] = _mm_add_ps(temp0_21, _mm_shuffle_ps(temp0_21, temp0_21, 0x4e))
float temp0_25[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0x39), temp0_23)
float temp0_26[0x4] = _mm_rsqrt_ps(temp0_25)
float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm8)
float temp0_32[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_26, temp0_26), temp0_27)), temp0_26), 
    temp0_26)
float temp0_34[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_32, temp0_32), temp0_27)
float zmm3_1[0x4] = var_c8
float temp0_35[0x4] = _mm_sub_ps(zmm8, temp0_34)
float temp0_37[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_25, 2)
float temp0_38[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
float temp0_39[0x4] = _mm_mul_ps(temp0_35, temp0_32)
float temp0_40[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b)
float temp0_41[0x4] = _mm_add_ps(temp0_39, temp0_32)
float zmm2_1[0x4] = *arg2
zmm8 = _mm_and_ps(_mm_mul_ps(temp0_41, zmm5_1) ^ data_143f2b8a0, temp0_37) ^ data_143f2b8a0
float temp0_45[0x4] = _mm_mul_ps(temp0_40, _mm_shuffle_ps(zmm2_1, zmm2_1, 0))
float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm3_1)
float temp0_48[0x4] = __mulps_xmmps_memps(temp0_45, data_143f2b850)
float temp0_49[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x1b)
float temp0_50[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
float temp0_51[0x4] = _mm_add_ps(temp0_48, temp0_47)
float temp0_53[0x4] = _mm_mul_ps(temp0_38, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55))
float temp0_55[0x4] = _mm_mul_ps(temp0_50, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa))
float temp0_56[0x4] = __mulps_xmmps_memps(temp0_53, data_143f2b840)
float temp0_57[0x4] = __mulps_xmmps_memps(temp0_55, data_143f2b830)
float temp0_58[0x4] = _mm_add_ps(temp0_51, temp0_56)
float temp0_59[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x4e)
float temp0_60[0x4] = _mm_add_ps(temp0_58, temp0_57)
float temp0_62[0x4] = _mm_mul_ps(temp0_49, _mm_shuffle_ps(temp0_60, temp0_60, 0))
float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xff), zmm8)
float temp0_65[0x4] = __mulps_xmmps_memps(temp0_62, data_143f2b850)
float temp0_66[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xb1)
float temp0_67[0x4] = _mm_add_ps(temp0_65, temp0_64)
float temp0_69[0x4] = _mm_mul_ps(temp0_59, _mm_shuffle_ps(temp0_60, temp0_60, 0x55))
float temp0_71[0x4] = _mm_mul_ps(temp0_66, _mm_shuffle_ps(temp0_60, temp0_60, 0xaa))
float temp0_72[0x4] = __mulps_xmmps_memps(temp0_69, data_143f2b840)
float temp0_73[0x4] = __mulps_xmmps_memps(temp0_71, data_143f2b830)
float temp0_75[0x4] = _mm_add_ps(_mm_add_ps(temp0_67, temp0_72), temp0_73)
*arg3 = temp0_75
zmm5_1 = data_143f2b8b0
float temp0_76[0x4] = _mm_mul_ps(temp0_75, temp0_75)
float temp0_78[0x4] = _mm_add_ps(temp0_76, _mm_shuffle_ps(temp0_76, temp0_76, 0x4e))
float temp0_80[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0x39), temp0_78)
float temp0_81[0x4] = _mm_rsqrt_ps(temp0_80)
float temp0_82[0x4] = _mm_mul_ps(temp0_80, zmm5_1)
float temp0_87[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_81, temp0_81), temp0_82)), temp0_81), 
    temp0_81)
float temp0_91[0x4] =
    _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_87, temp0_87), temp0_82)), temp0_87)
float zmm0_2[0x4] = data_143f2b8f0
float temp0_92[0x4] = _mm_add_ps(temp0_91, temp0_87)
float temp0_93[0x4] = _mm_cmpeq_ps(zmm0_2, temp0_80, 2)
*arg3 = _mm_and_ps(_mm_mul_ps(temp0_92, temp0_75) ^ data_143f2b8a0, temp0_93) ^ data_143f2b8a0
__security_check_cookie(rax_1 ^ &var_108)
return result
