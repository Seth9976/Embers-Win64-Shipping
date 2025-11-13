// 函数: sub_1417485e0
// 地址: 0x1417485e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t r14
r14.b = 0
uint128_t zmm6 = 0x7f7fffff
int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        result = *(arg1 + 0x10)
        int64_t* rcx = *(rsi_1 + result)
        
        if (rcx != 0)
            int64_t var_68
            result = (*(*rcx + 0x20))(rcx, arg2, &var_68)
            int32_t result_1
            
            if (not(arg4.d f>= zmm6.d))
                result = zx.q(result_1)
                zmm6 = arg4
                arg4 = zx.o(var_68)
                r14.b = 0
                *arg3 = arg4.q
                arg3[2] = result.d
            else if (not(arg4.d f!= zmm6.d))
                r14.b = 1
                arg4.d = var_68.d.d f+ *arg3
                float zmm1 = var_68:4.d f+ arg3[1]
                *arg3 = arg4.d
                arg4.d = result_1.d f+ arg3[2]
                arg3[1] = zmm1
                arg3[2] = arg4.d
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0x18))
    
    if (r14.b != 0)
        uint128_t zmm7 = *arg3
        uint128_t zmm8 = arg3[1]
        arg4.d = zmm7.d f* zmm7.d
        uint128_t zmm2
        zmm2.d = zmm8.d f* zmm8.d
        int128_t zmm9 = arg3[2]
        zmm2.d = zmm2.d f+ arg4.d
        zmm2.d = zmm2.d f+ zmm9.d f* zmm9.d
        
        if (not(zmm2.d f<= 9.99999994e-09f))
            float zmm3 = zmm2.d
            uint128_t zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3)
            zmm3 = zmm3 * 0.5f
            arg4.d = zmm5.d f* zmm5.d
            zmm2.d = 0.5f - zmm3 f* arg4.d
            arg4.d = zmm5.d f* zmm2.d
            zmm5.d = zmm5.d f+ arg4.d
            zmm5.d = zmm5.d f+ zmm5.d * (0.5f - zmm3 * zmm5.d f* zmm5.d)
            zmm7.d = zmm7.d f* zmm5.d
            zmm8.d = zmm8.d f* zmm5.d
            zmm9.d = zmm9.d f* zmm5.d
            *arg3 = zmm7.d
            arg3[1] = zmm8.d
            arg3[2] = zmm9.d

return result
