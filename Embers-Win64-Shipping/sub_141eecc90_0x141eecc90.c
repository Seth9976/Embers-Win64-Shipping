// 函数: sub_141eecc90
// 地址: 0x141eecc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (not(arg2.d f< 9.99999997e-07f))
    char rcx = arg1[0xa0].b
    
    if ((rcx & 8) != 0)
        arg3 = *(arg1 + 0x504)
        int32_t rax = *(arg1 + 0x50c)
        *(arg1 + 0xc4) = arg3
        *(arg1 + 0xcc) = rax
        arg1[0xa0].b = rcx & 0xf7
    
    if (arg1[0xb4].b == 0 && sub_142008320(&arg1[0x9b]) == 0)
        if ((arg1[0x71].b & 8) != 0 && not(0f f!= *(arg1 + 0x22c)) && not(0f f!= arg1[0x46].d)
                && not(0f f!= *(arg1 + 0x234)))
            arg3 = data_143dbb1f8.q
            *(arg1 + 0xc4) = arg3
            *(arg1 + 0xcc) = data_143dbb200
        
        void* rax_4 = (*(*arg1 + 0x430))(arg1)
        int64_t rbx_1 = *arg1
        int128_t zmm6
        zmm6.d = (*(rax_4 + 0x260)).d f* 0.5f
        (*(rbx_1 + 0x6d8))(arg1)
        int64_t r9_1
        r9_1.b = 1
        int512_t zmm2
        zmm2.o = zmm6
        int64_t var_138
        var_138.d = arg3.d
        (*(rbx_1 + 0x6a0))(arg1, arg2, zmm2, r9_1, var_138)
    
    int512_t zmm1
    int512_t zmm2_1
    int128_t zmm8_1
    zmm1, zmm2_1, zmm8_1 = sub_141ed7690(arg1, arg2, arg3)
    *(arg1 + 0x387) &= 0xdf
    void* rbx_2 = arg1[0x16]
    zmm1.o = zmm8_1
    zmm1.d = zmm1.d f* arg1[0x19].d
    float zmm7_1[0x4] = *(rbx_2 + 0x1d0)
    float var_128 = zmm8_1.d f* *(arg1 + 0xc4)
    float zmm0 = zmm8_1.d f* *(arg1 + 0xcc)
    int64_t var_f8_1 = zmm7_1[0].q
    int32_t var_124_1 = zmm1.d
    float temp0_1[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)
    char var_d8
    memset(&var_d8, 0, 0x88)
    int32_t var_d0_1 = 0x3f800000
    int128_t zmm0_1 = *(rbx_2 + 0x1c0)
    int128_t var_108 = zmm0_1
    char* var_138_1 = &var_d8
    result = sub_141f231f0(arg1, &var_128, &var_108, 1, zmm0_1.q, zmm1, zmm2_1, var_138_1, 0)
    uint128_t zmm0_2
    
    if (not(var_d0_1.d f>= 1f))
        zmm0_2 = arg1[0x19].d
        uint128_t zmm6_1 = *(arg1 + 0xcc)
        zmm1.o = *(arg1 + 0xc4)
        zmm0_2.d = zmm0_2.d f* zmm0_2.d
        var_108.q = 0
        zmm1.d = zmm1.d f* zmm1.d
        var_108:8.d = 0xbf800000
        zmm1.d = zmm1.d f+ zmm0_2.d
        zmm0_2.d = zmm6_1.d f* zmm6_1.d
        zmm1.d = zmm1.d f+ zmm0_2.d
        uint64_t var_118
        
        if (not(zmm1.d f!= 1f))
            zmm6_1 = *(arg1 + 0xcc)
            var_118 = *(arg1 + 0xc4)
        else if (zmm1.d f>= 9.99999994e-09f)
            zmm0_2 = zmm1.o
            uint128_t zmm4_1 = _mm_rsqrt_ss(zmm0_2.d, zmm0_2.d)
            zmm2_1.o = 0x3f000000
            uint128_t zmm3_1
            zmm3_1.d = zmm0_2.d f* 0.5f
            zmm0_2.d = zmm4_1.d f* zmm4_1.d
            zmm1.o = zmm3_1
            zmm1.d = zmm1.d f* zmm0_2.d
            zmm2_1.d = 0.5f f- zmm1.d
            zmm0_2.d = zmm4_1.d f* zmm2_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0_2.d
            zmm1.o = zmm4_1
            zmm1.d = zmm1.d f* zmm4_1.d
            zmm3_1.d = zmm3_1.d f* zmm1.d
            zmm0_2.d = zmm4_1.d f* (0.5f f- zmm3_1.d)
            zmm4_1.d = zmm4_1.d f+ zmm0_2.d
            zmm6_1.d = zmm6_1.d f* zmm4_1.d
        else
            zmm6_1 = data_143dbb200
        
        zmm6_1.d = zmm6_1.d f* -1f
        int32_t var_9c
        
        if (__andps_xmmxud_memxud(var_9c, data_142d3f770).d f>= 0.200000003f || zmm6_1.d f>= 0.5f
            || zmm6_1.d f<= -0.200000003f)
        label_141eed023:
            zmm2_1.o = zmm8_1
            (*(*arg1 + 0x458))(arg1, &var_d8, zmm2_1, &var_128, var_138_1)
            zmm2_1.o = 0x3f800000
            zmm2_1.d = 1f f- var_d0_1
            void var_b0
            result = (*(*arg1 + 0x498))(arg1, &var_128, zmm2_1, &var_b0, &var_d8, 1)
        else
            if ((*(*arg1 + 0x6e0))(arg1, &var_d8) == 0)
                goto label_141eed023
            
            zmm1.o = var_124_1
            zmm2_1.o = 0x3f800000
            var_138_1 = nullptr
            zmm2_1.d = 1f f- var_d0_1
            int96_t var_e8_1 = (*(arg1[0x16] + 0x1d0)).12
            zmm0_2.d = var_128.d f* zmm2_1.d
            zmm1.d = zmm1.d f* zmm2_1.d
            var_118.d = zmm0_2.d
            zmm0_2.d = zmm0.d f* zmm2_1.d
            var_118:4.d = zmm1.d
            int32_t var_110_2 = zmm0_2.d
            
            if ((*(*arg1 + 0x6e8))(arg1, &var_108, &var_118, &var_d8, 0) == 0)
                goto label_141eed023
            
            temp0_1[0] = temp0_1[0] f- var_e8_1:8.d
            result = arg1[0x16]
            temp0_1[0] = temp0_1[0] f+ result[0x3b].d
    
    if ((*(arg1 + 0x387) & 0x20) == 0 && arg1[0xb4].b == 0)
        result = sub_142008320(&arg1[0x9b])
        
        if (result.b == 0)
            float zmm9_1 = 1f f/ zmm8_1.d
            zmm2_1.o = *(arg1[0x16] + 0x1d0)
            zmm1.o = zmm2_1.o
            zmm0_2.d = zmm2_1.o.d f- var_f8_1.d
            zmm1.o = _mm_shuffle_ps(zmm1.o, zmm2_1.o, 0x55)
            zmm1.d = zmm1.d f- var_f8_1:4.d
            zmm2_1.o = _mm_shuffle_ps(zmm2_1.o, zmm2_1.o, 0xaa)
            zmm2_1.d = zmm2_1.d f- temp0_1[0]
            zmm0_2.d = zmm0_2.d f* zmm9_1
            zmm1.d = zmm1.d f* zmm9_1
            zmm2_1.d = zmm2_1.d f* zmm9_1
            *(arg1 + 0xc4) = (_mm_unpacklo_ps(zmm0_2, zmm1.q)).q
            var_108:8.d = zmm2_1.d
            result = zx.q(var_108:8.d)
            *(arg1 + 0xcc) = result.d

return result
