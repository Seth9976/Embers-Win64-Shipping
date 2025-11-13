// 函数: sub_141ef25e0
// 地址: 0x141ef25e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = zx.o(0)
bool cond:0 = 0f f== arg2[1].d
int32_t var_60 = arg2[1].d
uint64_t var_68 = *arg2

if (not(cond:0))
    char rax_2 = (*(*arg1 + 0x550))()
    char rax_4
    
    if (rax_2 == 0)
        rax_4 = (*(*arg1 + 0x548))(arg1)
    
    if (rax_2 != 0 || rax_4 != 0)
        uint128_t zmm2 = arg2[1].d
        uint128_t zmm7 = *arg2
        uint128_t zmm8 = *(arg2 + 4)
        uint128_t zmm0
        zmm0.d = zmm8.d f* zmm8.d
        uint128_t zmm1
        zmm1.d = zmm7.d f* zmm7.d
        zmm1.d = zmm1.d f+ zmm0.d
        zmm0.d = zmm2.d f* zmm2.d
        zmm0.d = zmm0.d f+ zmm1.d
        float temp0_1[0x4] = _mm_sqrt_ss(0, zmm0.d)
        
        if (zmm1.d f!= 1f)
            if (zmm1.d f>= 9.99999994e-09f)
                uint128_t zmm5_1 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
                uint128_t zmm3
                zmm3.d = zmm1.d f* 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm1.d = zmm3.d f* zmm0.d
                zmm2.d = 0.5f f- zmm1.d
                zmm0.d = zmm5_1.d f* zmm2.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm1.d = zmm5_1.d f* zmm5_1.d
                zmm3.d = zmm3.d f* zmm1.d
                zmm0.d = zmm5_1.d f* (0.5f f- zmm3.d)
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm7.d = zmm7.d f* zmm5_1.d
                zmm8.d = zmm8.d f* zmm5_1.d
                zmm1 = zmm8
            else
                zmm7 = data_143dbb1f8
                zmm1 = data_143dbb1fc
                zmm6 = data_143dbb200
        else if (zmm2.d f!= 0f)
            zmm1 = zmm8
        else
            zmm0 = zx.o(*arg2)
            zmm6 = arg2[1].d
            zmm7 = zmm0.d
            zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        
        zmm7.d = zmm7.d f* temp0_1[0]
        zmm1.d = zmm1.d f* temp0_1[0]
        zmm6.d = zmm6.d f* temp0_1[0]
        int32_t var_50_2 = zmm6.d
        var_68 = (_mm_unpacklo_ps(zmm7, zmm1.q)).q
        int32_t var_60_1 = var_50_2

return sub_141f22580(arg1, &var_68)
