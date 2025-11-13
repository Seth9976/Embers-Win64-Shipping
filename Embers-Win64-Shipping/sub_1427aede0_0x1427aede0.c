// 函数: sub_1427aede0
// 地址: 0x1427aede0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
uint64_t var_e8 = __security_cookie ^ &var_1a8
uint64_t result

if (*(arg1 + 0x457) == 0)
label_1427af3bf:
    result.b = 0
else
    float var_168
    int32_t var_164
    uint64_t var_148
    int32_t* rcx
    uint128_t zmm1
    
    if (*(arg1 + 0x455) == 0)
        int32_t rax_1 = *(arg1 + 0x430)
        rcx = &var_148
        var_148 = *(arg1 + 0x428)
        int32_t var_140_1 = rax_1
    else
        zmm1 = *(arg1 + 0x42c)
        var_168 = (*(arg1 + 0x428) ^ 0x80000000).d
        rcx = &var_168
        var_164 = (zmm1 ^ 0x80000000).d
        int32_t var_160_1 = (*(arg1 + 0x430) ^ 0x80000000).d
    
    char rdx = *(arg1 + 0x425)
    uint128_t zmm0 = zx.o(*rcx)
    int32_t rax_2 = rcx[2]
    float zmm8[0x4] = *(arg1 + 0x1e0)
    uint128_t zmm6 = *(arg1 + 0x1c0)
    uint64_t var_158 = zmm0.q
    uint64_t var_138
    int64_t* rax_3
    uint128_t zmm3
    uint128_t zmm4
    uint128_t zmm5
    
    if (rdx == 0)
        rax_3 = &var_168
        zmm5 = _mm_mul_ps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(var_158.d, rax_2.q), 
                _mm_unpacklo_ps(var_158:4.d, zx.o(0).q)[0].q), 
            zmm8)
        zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm1)
        zmm3 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), zmm4), zmm0)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm1)
        float temp0_21[0x4] = _mm_add_ps(
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm4), zmm0), 
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), zmm3), zmm5))
        var_168 = temp0_21[0]
        zmm0 = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
        float var_160_2 = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)[0]
        var_164 = zmm0.d
    else
        int32_t var_130_1 = rax_2
        rax_3 = &var_138
        var_138 = zmm0.q
    
    bool cond:2_1 = *(arg1 + 0x456) == 0
    int32_t rax_4 = rax_3[1].d
    var_158 = *rax_3
    uint64_t* rcx_1
    
    if (cond:2_1)
        rcx_1 = &var_138
        int32_t rax_5 = *(arg1 + 0x43c)
        var_138 = *(arg1 + 0x434)
        int32_t var_130_2 = rax_5
    else
        rcx_1 = &var_148
        var_148.d = (*(arg1 + 0x434) ^ 0x80000000).d
        var_148:4.d = (*(arg1 + 0x438) ^ 0x80000000).d
        int32_t var_140_2 = (*(arg1 + 0x43c) ^ 0x80000000).d
    
    zmm0 = zx.o(*rcx_1)
    int32_t rax_6 = rcx_1[1].d
    var_168.q = zmm0.q
    uint64_t var_128
    int32_t var_120
    uint64_t* rcx_2
    
    if (rdx == 0)
        rcx_2 = &var_148
        zmm5 = _mm_mul_ps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(var_168, rax_6.q), 
                _mm_unpacklo_ps(var_164, zx.o(0).q)[0].q), 
            zmm8)
        zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm1)
        zmm3 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), zmm4), zmm0)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm1)
        float temp0_44[0x4] = _mm_add_ps(
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm4), zmm0), 
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), zmm3), zmm5))
        var_148.d = temp0_44[0]
        zmm0 = _mm_shuffle_ps(temp0_44, temp0_44, 0x55)
        float var_140_3 = _mm_shuffle_ps(temp0_44, temp0_44, 0xaa)[0]
        var_148:4.d = zmm0.d
    else
        var_128 = zmm0.q
        rcx_2 = &var_128
        var_120 = rax_6
    
    int128_t zmm15 = *(arg1 + 0x420)
    zmm5 = zx.o(*rcx_2)
    uint128_t zmm11 = zmm5
    int32_t rax_7 = rcx_2[1].d
    zmm4 = _mm_unpacklo_ps(_mm_unpacklo_ps(data_143dbb1f8, data_143dbb200.q), 
        _mm_unpacklo_ps(data_143dbb1fc, zx.o(0).q)[0].q)
    zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
    zmm4 = _mm_mul_ps(zmm4, zmm8)
    zmm8 = *(arg1 + 0x440)
    zmm3 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), zmm1)
    float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), zmm3)
    var_168.q = zmm5.q
    zmm5 = var_158:4.d
    float temp0_58[0x4] = _mm_sub_ps(temp0_57, zmm0)
    float temp0_59[0x4] = _mm_add_ps(temp0_58, temp0_58)
    zmm6 = _mm_mul_ps(zmm6, temp0_59)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xc9), zmm1)
    float temp0_63[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xd2)
    zmm6 = _mm_add_ps(zmm6, zmm4)
    zmm4 = rax_4
    float zmm2[0x4] = zmm5
    float temp0_66[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_63, zmm3), zmm0)
    zmm0.d = (*(arg1 + 0x444)).d f* zmm15.d
    int128_t zmm10
    zmm10.d = var_164.d f* zmm0.d
    float temp0_67[0x4] = _mm_add_ps(temp0_66, zmm6)
    zmm6 = var_158.d
    zmm11.d = zmm11.d f* zmm0.d
    int128_t zmm9
    zmm9.d = rax_7.d f* zmm0.d
    float temp0_68[0x4] = __addps_xmmps_memps(temp0_67, *(arg1 + 0x1d0))
    zmm8[0] = zmm8[0] f+ *(arg1 + 0x448)
    zmm0.d = zmm8.d f* zmm15.d
    var_138.o = temp0_68
    zmm1.d = zmm6.d f* zmm0.d
    zmm2[0] = zmm2[0] f* zmm0.d
    zmm3.d = zmm4.d f* zmm0.d
    temp0_68[0] = temp0_68[0] f+ zmm1.d
    float temp0_69[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0x55)
    zmm8[0] = zmm8[0] f* zmm15.d
    temp0_69[0] = temp0_69[0] + zmm2[0]
    float temp0_70[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xaa)
    zmm0.d = temp0_68.d f+ zmm11.d
    zmm6.d = zmm6.d f* zmm8[0]
    zmm5.d = zmm5.d f* zmm8[0]
    temp0_70[0] = temp0_70[0] f+ zmm3.d
    int32_t var_118 = zmm0.d
    zmm1.d = temp0_69.d f+ zmm10.d
    zmm0.d = temp0_70.d f+ zmm9.d
    int32_t var_114_1 = zmm1.d
    int32_t var_110_1 = zmm0.d
    temp0_69[0] = temp0_69[0] f+ zmm5.d
    zmm4.d = zmm4.d f* zmm8[0]
    void* const rbx_1 = &data_1434b638c
    zmm8 = var_138.o
    zmm8[0] = zmm8[0] f+ zmm6.d
    temp0_70[0] = temp0_70[0] f+ zmm4.d
    zmm1.d = temp0_69.d f+ zmm10.d
    zmm0.d = zmm8.d f+ zmm11.d
    int32_t var_108_1 = zmm1.d
    int32_t var_10c_1 = zmm0.d
    zmm0.d = temp0_70.d f+ zmm9.d
    int32_t var_104_1 = zmm0.d
    zmm0.d = (*(arg1 + 0x444)).d f+ *(arg1 + 0x44c)
    zmm0.d = zmm0.d f* zmm15.d
    zmm4.d = (*rcx_2).d f* zmm0.d
    zmm3.d = var_164.d f* zmm0.d
    zmm1.d = rax_7.d f* zmm0.d
    zmm8[0] = zmm8[0] f+ zmm4.d
    temp0_69[0] = temp0_69[0] f+ zmm3.d
    temp0_68[0] = temp0_68[0] f+ zmm4.d
    temp0_70[0] = temp0_70[0] f+ zmm1.d
    zmm3.d = zmm3.d f+ temp0_69[0]
    float var_100_1 = zmm8[0]
    zmm1.d = zmm1.d f+ temp0_70[0]
    float var_fc_1 = temp0_69[0]
    float var_f4_1 = temp0_68[0]
    int32_t var_f0_1 = zmm3.d
    int32_t var_ec_1 = zmm1.d
    float var_f8_1 = temp0_70[0]
    
    while (true)
        result = sub_140ae00d0(arg3, arg4, &(&var_118)[sx.q(*(rbx_1 - 4)) * 3], 
            &(&var_118)[sx.q(*rbx_1) * 3], &(&var_118)[sx.q(*(rbx_1 + 4)) * 3], &var_158, &var_128)
        
        if (result.b != 0)
            sub_140d3a3a0(arg2 + 0x70, arg1)
            float zmm4_1[0x4] = var_158.d
            int64_t zmm3_1 = var_158:4.d
            zmm4_1[0] = zmm4_1[0] f- *arg3
            uint64_t zmm0_1
            zmm0_1.d = rax_4.d f- arg3[2]
            float zmm2_1 = zmm3_1.d f- arg3[1]
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            zmm0_1.d = zmm0_1.d f* zmm0_1.d
            zmm2_1 = zmm2_1 * zmm2_1 + zmm4_1[0]
            *(arg2 + 0x1c) = (_mm_unpacklo_ps(zmm4_1, zmm3_1)).q
            *(arg2 + 0x24) = rax_4
            *(arg2 + 0xc) = _mm_sqrt_ss(0, zmm2_1 f+ zmm0_1.d).d
            *(arg2 + 0x34) = var_128
            *(arg2 + 0x3c) = var_120
            result.b = 1
            break
        
        rbx_1 += 0xc
        
        if (rbx_1 s>= "est")
            goto label_1427af3bf

__security_check_cookie(var_e8 ^ &var_1a8)
return result
