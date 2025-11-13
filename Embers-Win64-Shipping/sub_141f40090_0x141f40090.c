// 函数: sub_141f40090
// 地址: 0x141f40090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_141f1dc60(arg1)
uint128_t zmm10 = arg1[0x19].d
uint128_t zmm7 = *(arg1 + 0xc4)
uint128_t zmm6 = *(arg1 + 0xcc)
uint128_t zmm2
zmm2.d = zmm7.d f* zmm7.d
uint128_t zmm0
zmm0.d = zmm10.d f* zmm10.d
uint128_t zmm1
zmm1.d = zmm6.d f* zmm6.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d

if (not(zmm2.d f<= 0f))
    int128_t zmm8 = arg1[0x1e].d
    uint64_t var_a8
    int32_t var_a0
    int32_t arg_8
    uint128_t entry_zmm3
    
    if (not(zmm8.d f<= 0f))
        if (not(zmm2.d f!= 1f))
            zmm0 = zx.o(*(arg1 + 0xc4))
            var_a0 = *(arg1 + 0xcc)
            zmm6 = var_a0
            var_a8 = zmm0.q
            zmm7 = var_a8.d
            zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        else if (zmm2.d f>= 9.99999994e-09f)
            uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
            entry_zmm3.d = zmm2.d f* 0.5f
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm1.d = entry_zmm3.d f* zmm0.d
            zmm2.d = 0.5f f- zmm1.d
            zmm0.d = zmm5_1.d f* zmm2.d
            zmm5_1.d = zmm5_1.d f+ zmm0.d
            zmm1.d = zmm5_1.d f* zmm5_1.d
            entry_zmm3.d = entry_zmm3.d f* zmm1.d
            zmm0.d = zmm5_1.d f* (0.5f f- entry_zmm3.d)
            zmm5_1.d = zmm5_1.d f+ zmm0.d
            zmm10.d = zmm10.d f* zmm5_1.d
            arg_8 = zmm5_1.d
            zmm7.d = zmm7.d f* zmm5_1.d
            zmm1 = zmm10
            zmm6.d = zmm6.d f* zmm5_1.d
        else
            zmm7 = data_143dbb1f8
            zmm1 = data_143dbb1fc
            zmm6 = data_143dbb200
        
        zmm7.d = zmm7.d f* zmm8.d
        zmm1.d = zmm1.d f* zmm8.d
        zmm6.d = zmm6.d f* zmm8.d
        *(arg1 + 0xc4) = (_mm_unpacklo_ps(zmm7, zmm1.q)).q
        *(arg1 + 0xcc) = zmm6.d
    
    char rax_4 = arg1[0x1f].b
    
    if ((rax_4 & 8) != 0)
        var_a0 = *(arg1 + 0xcc)
        int64_t rax_3 = *arg1
        var_a8 = *(arg1 + 0xc4)
        (*(rax_3 + 0x508))(arg1, &var_a8, zmm2, entry_zmm3)
        rax_4 = arg1[0x1f].b
    
    int64_t var_b8
    char var_b0
    uint64_t var_98
    
    if ((rax_4 & 1) != 0 && arg1[0x16] != 0)
        sub_140adf3c0(arg1 + 0xc4, &var_a8)
        uint128_t zmm0_1
        
        if ((arg1[0x1f].b & 2) != 0)
            var_a8.d = 0
            int32_t zmm6_1
            int32_t zmm9_1
            zmm0_1, zmm6_1, zmm9_1 = sub_140a454f0(var_a8:4.d, 0x43b40000)
            
            if (not(zmm0_1.d f>= zmm9_1))
                zmm0_1.d = zmm0_1.d f+ zmm6_1
            
            if (not(zmm0_1.d f<= 180f))
                zmm0_1.d = zmm0_1.d f- zmm6_1
            
            var_a8:4.d = zmm0_1.d
            var_a0 = 0
        
        int64_t* rsi_1 = arg1[0x16]
        zmm0_1 = zx.o(var_a8)
        var_98 = zmm0_1.q
        int32_t var_90_2 = var_a0
        
        if (rsi_1[0x18] != 0)
            void var_88
            float var_78[0x4]
            float zmm7_1[0x4]
            float zmm8_1[0x4]
            float zmm9_2[0x4]
            float zmm10_1[0x4]
            zmm7_1, zmm8_1, zmm9_2, zmm10_1 =
                sub_141f3cd60(rsi_1, &var_88, sub_140ade170(&var_98, &var_78))
            int32_t rax_7 = *(rsi_1 + 0x124)
            var_b0 = 0
            var_98 = *(rsi_1 + 0x11c)
            int32_t var_90_4 = rax_7
            var_b8 = 0
            sub_141f48240(rsi_1, &var_98, &var_88, 0, zmm7_1, zmm8_1, zmm9_2, zmm10_1, 0, 0)
        else
            var_98 = zmm0_1.q
            int32_t var_90_3 = var_a0
            var_b8.b = 0
            sub_141f48c80(rsi_1, &var_98, 0, 0, 0)
    
    result = (*(*arg1 + 0x460))(arg1)
    int64_t* rcx_7 = arg1[0x17]
    
    if (rcx_7 != 0)
        arg_8.q = 0
        result = (*(*rcx_7 + 0x3e8))(rcx_7, 0)
        
        if (result != 0)
            int64_t* rcx_8 = arg1[0x17]
            int32_t var_90_5 = *(arg1 + 0xcc)
            var_98 = *(arg1 + 0xc4)
            arg_8.q = 0
            return (*(*rcx_8 + 0x5f0))(rcx_8, &var_98, 0, 0, var_b8, var_b0)

return result
