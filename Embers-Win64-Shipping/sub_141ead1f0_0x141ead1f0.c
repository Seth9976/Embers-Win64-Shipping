// 函数: sub_141ead1f0
// 地址: 0x141ead1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result

if (_mm_and_ps(*arg3, 0x7fffffff)[0] f> 9.99999975e-05f)
label_141ead268:
    void* rax_1
    
    if (arg2 != 0)
        rax_1 = *(arg2 + 0x130)
    
    if (arg2 == 0 || rax_1 == 0 || *(rax_1 + 0x14f) == 0)
        arg2 = nullptr
    
    *arg1 = arg2
    
    if (arg2 == 0)
        arg1[1] = *arg3
        result = *(arg3 + 8)
        arg1[2].d = result
    else
        void* rbx_1 = *(arg2 + 0x130)
        float zmm6[0x4]
        float var_18_1[0x4] = zmm6
        float zmm7[0x4]
        float var_28_1[0x4] = zmm7
        float zmm8[0x4]
        float var_38_1[0x4] = zmm8
        uint32_t zmm9[0x4]
        uint32_t var_48_1[0x4] = zmm9
        int64_t var_a8
        uint32_t var_a0_1
        uint32_t zmm0[0x4]
        uint32_t zmm1[0x4]
        
        if (rbx_1 == 0)
            var_a8 = data_143dbb1f8.q
            var_a0_1 = data_143dbb200
        else
            zmm1 = *(rbx_1 + 0x1d0)
            var_a8.d = zmm1[0]
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            var_a0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
            var_a8:4.d = zmm0[0]
        
        int64_t var_9c
        uint32_t var_78[0x4]
        int32_t rax_7
        
        if (rbx_1 == 0)
            zmm0 = zx.o(data_143dbb208)
            rax_7 = data_143dbb210
        else
            zmm1 = *(rbx_1 + 0x1c0)
            uint32_t temp0_6 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_1 + 0x180), zmm1, 4))
            var_78 = zmm1
            
            if (temp0_6 != 0)
                *(rbx_1 + 0x180) = zmm1
                int32_t* rax_5 = sub_140adf5d0(&var_78, &var_9c)
                *(rbx_1 + 0x190) = *rax_5
                *(rbx_1 + 0x198) = rax_5[2]
            
            zmm0 = zx.o(*(rbx_1 + 0x190))
            rax_7 = *(rbx_1 + 0x198)
        
        var_9c = zmm0.q
        int64_t var_90 = var_9c
        *(arg1 + 0x14) = var_a8
        arg1[4] = var_9c
        int32_t var_88_1 = rax_7
        *(arg1 + 0x1c) = var_a0_1
        arg1[5].d = rax_7
        *(arg1 + 0x2c) = *arg3
        *(arg1 + 0x34) = *(arg3 + 8)
        zmm8 = *arg3
        zmm7 = *(arg3 + 4)
        zmm6 = *(arg3 + 8)
        zmm8[0] = zmm8[0] f- var_a8.d
        zmm7[0] = zmm7[0] f- var_a8:4.d
        zmm6[0] = zmm6[0] f- var_a0_1
        float zmm6_1[0x4]
        float zmm7_1[0x4]
        float zmm8_1[0x4]
        zmm6_1, zmm7_1, zmm8_1 = sub_140ade170(&var_90, &var_78)
        zmm9 = __mulps_xmmps_memps(var_78, data_143f3a150)
        uint32_t temp0_8[0x4] = __andps_xmmxud_memxud(data_143f3a0a0, data_143f3a0b0)
        zmm6_1 = __andps_xmmxud_memxud(
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8_1, zmm6_1[0].q), _mm_unpacklo_ps(zmm7_1, 0)[0].q), 
            data_143f3a0b0)
        float temp0_13[0x4] = _mm_rcp_ps(temp0_8)
        float temp0_14[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
        float temp0_15[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
        float temp0_16[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xd2)
        float temp0_17[0x4] = _mm_mul_ps(temp0_15, temp0_16)
        float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2), temp0_14)
        zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0xff)
        float temp0_21[0x4] = _mm_sub_ps(temp0_19, temp0_17)
        float temp0_22[0x4] = _mm_mul_ps(temp0_13, temp0_13)
        float temp0_23[0x4] = _mm_add_ps(temp0_13, temp0_13)
        float temp0_24[0x4] = _mm_add_ps(temp0_21, temp0_21)
        float temp0_25[0x4] = _mm_mul_ps(temp0_22, temp0_8)
        zmm9 = _mm_mul_ps(zmm9, temp0_24)
        float temp0_27[0x4] = _mm_sub_ps(temp0_23, temp0_25)
        float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0xd2), temp0_14)
        zmm9 = _mm_add_ps(zmm9, zmm6_1)
        float temp0_31[0x4] = _mm_mul_ps(temp0_27, temp0_27)
        float temp0_32[0x4] = _mm_add_ps(temp0_27, temp0_27)
        float temp0_33[0x4] = _mm_mul_ps(temp0_31, temp0_8)
        uint32_t zmm11[0x4] = __cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(temp0_8, data_143f3a0e0), data_143f3a140, 2)
        float temp0_36[0x4] = _mm_sub_ps(temp0_32, temp0_33)
        float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0xc9), temp0_16)
        uint32_t temp0_39[0x4] = _mm_and_ps(zmm11, zx.o(0) ^ temp0_36)
        float temp0_42[0x4] =
            _mm_mul_ps(_mm_add_ps(_mm_sub_ps(temp0_29, temp0_38), zmm9), temp0_39 ^ temp0_36)
        result = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)[0]
        arg1[1] = (_mm_unpacklo_ps(temp0_42, _mm_shuffle_ps(temp0_42, temp0_42, 0x55)[0].q)).q
        arg1[2].d = result
else
    if (_mm_and_ps(*(arg3 + 4), 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_141ead268
    
    if (_mm_and_ps(*(arg3 + 8), 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_141ead268
    
    *arg1 = 0
    arg1[1] = data_143dbb1f8.q
    result = data_143dbb200
    arg1[2].d = result

return result
