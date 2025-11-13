// 函数: sub_141ee4bb0
// 地址: 0x141ee4bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = arg1[0x46].d
uint128_t zmm1 = *(arg1 + 0x22c)
*arg2 = zmm1.d
arg2[1] = zmm0.d
arg2[2] = 0

if (arg1[0xb4].b == 0)
    zmm0.d = zmm0.d f* zmm0.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm1.d = zmm1.d f+ zmm0.d
    
    if (not(zmm1.d f<= 0f))
        int64_t var_58
        int64_t* rax_2 = (*(*arg1 + 0x740))(zx.o(0), &var_58, arg3, *(arg1 + 0x1c4), arg2)
        zmm0 = zx.o(*rax_2)
        *arg2 = zmm0.q
        arg2[2] = rax_2[1].d
        (*(*arg1 + 0x6d0))(arg1)
        uint128_t zmm6 = zmm0
        int32_t rax_5
        uint128_t zmm3
        
        if (zmm6.d f>= 9.99999975e-05f)
            uint128_t zmm7 = *arg2
            uint128_t zmm8 = arg2[1]
            arg3.d = zmm7.d f* zmm7.d
            zmm0.d = zmm8.d f* zmm8.d
            uint128_t zmm9 = arg2[2]
            arg3.d = arg3.d f+ zmm0.d
            zmm1.d = zmm9.d f* zmm9.d
            zmm0.d = zmm6.d f* zmm6.d
            arg3.d = arg3.d f+ zmm1.d
            
            if (arg3.d f<= zmm0.d)
                zmm1 = zx.o(*arg2)
                rax_5 = arg2[2]
            else
                uint128_t zmm5_1 = _mm_rsqrt_ss(arg3.d, arg3.d)
                zmm3.d = arg3.d f* 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm1.d = zmm3.d f* zmm0.d
                arg3.d = 0.5f f- zmm1.d
                zmm0.d = zmm5_1.d f* arg3.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm1.d = zmm5_1.d f* zmm5_1.d
                zmm3.d = zmm3.d f* zmm1.d
                zmm0.d = zmm5_1.d f* (0.5f f- zmm3.d)
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm5_1.d = zmm5_1.d f* zmm6.d
                zmm7.d = zmm7.d f* zmm5_1.d
                zmm8.d = zmm8.d f* zmm5_1.d
                zmm1.d = zmm7.d
                zmm9.d = zmm9.d f* zmm5_1.d
                _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                zmm1.d = zmm8.d
                rax_5 = zmm9.d
                zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
        else
            zmm3 = data_143dbb1fc
            zmm1.d = data_143dbb1f8.d
            rax_5 = data_143dbb200.d
            _mm_shuffle_ps(zmm1, zmm1, 0xe1)
            zmm0.d = zmm3.d
            zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
        *arg2 = zmm1.q
        arg2[2] = rax_5

return arg2
