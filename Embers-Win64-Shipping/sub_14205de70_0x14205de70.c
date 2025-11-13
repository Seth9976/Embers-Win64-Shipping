// 函数: sub_14205de70
// 地址: 0x14205de70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
float zmm6[0x4] = arg4
void* rax_2 = *(arg1 + 0x540)

if (rax_2 == 0 || *(rax_2 + 8) == 0)
    sub_142092730(arg1, arg2, arg3, arg4, arg5)
else
    uint128_t zmm5 = zx.o(*arg3)
    int64_t var_d8 = 0
    int64_t var_d0_1 = 0
    uint128_t zmm4
    zmm4.d = zmm5.d f+ zmm6[0]
    float zmm1[0x4] = arg3[1].d
    uint64_t var_f8 = zmm5.q
    arg4 = var_f8:4.d
    zmm1[0] = zmm1[0] + zmm6[0]
    int32_t var_108 = zmm5.d
    uint32_t zmm2[0x4] = arg4
    float var_104_1 = arg4[0]
    zmm5.d = zmm5.d f- zmm6[0]
    float var_100_1 = zmm1[0]
    arg4[0] = arg4[0] - zmm6[0]
    float var_fc_1 = zmm6[0]
    zmm1[0] = zmm1[0] - zmm6[0]
    float var_a0_1 = zmm1[0]
    zmm2[0] = zmm2[0] f+ zmm6[0]
    char var_b0_1 = 1
    int64_t var_c8 = (_mm_unpacklo_ps(zmm5, arg4[0].q)).q
    float var_c0_1 = zmm1[0]
    int64_t var_bc_1 = (_mm_unpacklo_ps(zmm4, zmm2[0].q)).q
    float var_b4_1 = var_a0_1
    int64_t var_a8
    
    if (arg5 == 0)
        uint64_t* rax_8 = sub_140ae2c60(&var_c8, &var_a8, arg1 + 0x1c0)
        var_c8.o = *rax_8
        var_bc_1 = rax_8[2]
        var_b0_1.d = rax_8[3].d
    else
        zmm2 = data_143f43400
        arg4 = data_143f433f0
        float zmm9[0x4] = *(arg1 + 0x1e0)
        float var_88[0x4]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(arg4, _mm_and_ps(zmm9, zmm2), 1)) == 0)
            zmm1 = data_143dbb0d0
            var_88 = data_143dbb0c0
            float var_68_2[0x4] = data_143dbb0e0
            float var_78_2[0x4] = zmm1
        else
            float zmm0[0x4] = data_143f43310
            float temp0_6[0x4] = __mulps_xmmps_memps(data_143f433e0, *(arg1 + 0x1c0))
            zmm5 = *(arg1 + 0x1d0)
            zmm0[0].q = zmm9 u>> 0x40
            float temp0_7[0x4] = _mm_shuffle_ps(zmm9, zmm0, 0xc4)
            float temp0_8[0x4] = _mm_rcp_ps(temp0_7)
            var_88 = temp0_6
            float temp0_9[0x4] = _mm_mul_ps(temp0_8, temp0_8)
            float temp0_12[0x4] =
                _mm_sub_ps(_mm_add_ps(temp0_8, temp0_8), _mm_mul_ps(temp0_9, temp0_7))
            float temp0_13[0x4] = _mm_mul_ps(temp0_12, temp0_12)
            float temp0_14[0x4] = _mm_add_ps(temp0_12, temp0_12)
            float temp0_15[0x4] = _mm_mul_ps(temp0_13, temp0_7)
            float temp0_17[0x4] = _mm_cmpeq_ps(_mm_and_ps(temp0_7, zmm2), arg4, 2)
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xd2)
            float temp0_19[0x4] = _mm_sub_ps(temp0_14, temp0_15)
            zmm2 = _mm_shuffle_ps(temp0_6, temp0_6, 0xc9)
            float temp0_21[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xff)
            zmm9 = __andps_xmmxud_memxud(_mm_and_ps(temp0_17, zx.o(0) ^ temp0_19) ^ temp0_19, 
                data_143f43320)
            zmm5 = _mm_mul_ps(zmm5, zmm9)
            float var_68_1[0x4] = zmm9
            float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_18)
            zmm4 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), zmm2), temp0_26)
            zmm4 = _mm_add_ps(zmm4, zmm4)
            float temp0_31[0x4] = _mm_mul_ps(temp0_21, zmm4)
            float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), zmm2)
            float temp0_34[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
            float temp0_35[0x4] = _mm_add_ps(temp0_31, zmm5)
            float var_78_1[0x4] = __andps_xmmxud_memxud(
                _mm_sub_ps(zx.o(0), 
                    _mm_add_ps(_mm_sub_ps(temp0_33, _mm_mul_ps(temp0_34, temp0_18)), temp0_35)), 
                data_143f43320)
        
        var_108.o = *sub_140ae2f70(&var_108, &var_a8, &var_88)
    
    void* rcx_3 = *(arg1 + 0x440)
    
    if (rcx_3 != 0)
        int128_t* rax_10 = sub_1423633d0(rcx_3, &var_a8)
        int128_t zmm0_3 = var_108.o
        int32_t zmm2_1 = *(rax_10 + 0x18)
        var_a0_1.q = &var_f8
        var_a8 = j_sub_14204b050
        char var_118
        var_118.q = &var_d8
        int32_t var_e8_1 = zmm2_1
        var_f8.o = zmm0_3
        sub_142059b70(arg1, &var_c8, 0, &var_a8, var_118)
    
    *arg2 = var_d8
    arg2[1].d = var_d0_1.d
    *(arg2 + 0xc) = var_d0_1:4.d

__security_check_cookie(rax_1 ^ &var_138)
return arg2
