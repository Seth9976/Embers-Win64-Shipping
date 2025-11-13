// 函数: sub_141ee7b40
// 地址: 0x141ee7b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x389)

if ((result & 4) == 0)
    result |= 4
    bool cond:0_1 = arg1[0x29] == 0
    *(arg1 + 0x389) = result
    
    if (not(cond:0_1))
        (*(*arg1 + 0x3f0))()
        uint128_t zmm8
        zmm8.d = arg3.d f* 0.850000024f
        uint64_t var_58
        int32_t* rax_2 = (*(*arg1 + 0x658))(arg1, &var_58, arg2)
        uint128_t zmm7
        zmm7.d = zmm8.d f* *rax_2
        uint128_t zmm9
        zmm9.d = rax_2[1].d f* zmm8.d
        zmm7.d = zmm7.d f+ *(arg1 + 0xc4)
        uint128_t zmm6
        zmm6.d = rax_2[2].d f* zmm8.d
        zmm9.d = zmm9.d f+ arg1[0x19].d
        zmm6.d = zmm6.d f+ *(arg1 + 0xcc)
        *(arg1 + 0xc4) = zmm7.d
        arg3.d = zmm7.d f* zmm7.d
        arg1[0x19].d = zmm9.d
        *(arg1 + 0xcc) = zmm6.d
        float zmm2 = zmm9.d f* zmm9.d f+ arg3.d
        uint128_t entry_zmm3
        
        if (not(_mm_sqrt_ss(0, zmm2).d f<= zmm8.d))
            uint128_t zmm1
            zmm1.d = zmm6.d f* zmm6.d
            zmm1.d = zmm1.d f+ zmm2
            
            if (not(zmm1.d f!= 1f))
                arg3 = zx.o(*(arg1 + 0xc4))
                zmm6 = *(arg1 + 0xcc)
                var_58 = arg3.q
                zmm7 = var_58.d
                zmm1 = _mm_shuffle_ps(arg3, arg3, 0x55)
            else if (zmm1.d f>= 9.99999994e-09f)
                uint128_t zmm5_1 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
                entry_zmm3.d = zmm1.d f* 0.5f
                arg3.d = zmm5_1.d f* zmm5_1.d
                zmm1.d = entry_zmm3.d f* arg3.d
                zmm2 = 0.5f f- zmm1.d
                arg3.d = zmm5_1.d f* zmm2
                zmm5_1.d = zmm5_1.d f+ arg3.d
                zmm1.d = zmm5_1.d f* zmm5_1.d
                entry_zmm3.d = entry_zmm3.d f* zmm1.d
                arg3.d = zmm5_1.d f* (0.5f f- entry_zmm3.d)
                zmm5_1.d = zmm5_1.d f+ arg3.d
                zmm9.d = zmm9.d f* zmm5_1.d
                zmm7.d = zmm7.d f* zmm5_1.d
                zmm1 = zmm9
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
        
        arg3.d = (*(arg1 + 0x15c)).d f* arg1[0x2b].d
        int64_t rax_5 = *arg1
        *(arg1 + 0xcc) = arg3.d
        (*(rax_5 + 0x590))(arg1, 3, zmm2, entry_zmm3)
        result = *(arg1 + 0x389)
    
    result &= 0xfb
    *(arg1 + 0x389) = result

return result
