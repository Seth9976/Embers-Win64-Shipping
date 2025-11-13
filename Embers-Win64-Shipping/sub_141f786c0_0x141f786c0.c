// 函数: sub_141f786c0
// 地址: 0x141f786c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg5 s< arg6)
    uint128_t zmm12 = arg4
    arg2.d = arg2.d f- zmm12.d
    float zmm0_1
    float zmm7_1
    uint128_t zmm8_1
    uint128_t zmm9_1
    zmm0_1, result, zmm7_1, zmm8_1, zmm9_1 = sub_141f86ef0(arg1, arg2, zx.o(0))
    uint128_t zmm15
    zmm15.d = arg3.d f+ zmm12.d
    zmm9_1.d = zmm9_1.d f+ zmm12.d
    
    if (not(zmm9_1.d f>= zmm15.d))
        uint128_t zmm10
        uint128_t var_68_1 = zmm10
        uint128_t zmm11
        uint128_t var_78_1 = zmm11
        
        do
            uint128_t zmm0_2
            float zmm6_2
            uint128_t zmm7_2
            zmm0_2, result, zmm6_2, zmm7_2, zmm8_1, zmm9_1 = sub_141f86ef0(arg1, zmm9_1, zmm8_1)
            zmm10.d = zmm0_2.d f- zmm7_2.d
            *arg7 = _mm_max_ss((*arg7).d, zmm0_2.d).d
            zmm10.d f- zmm8_1.d
            *arg8 = _mm_min_ss((*arg8).d, zmm0_2.d).d
            uint128_t zmm1
            
            if (not(zmm10.d f<= zmm8_1.d))
                zmm1 = 0x3f800000
            else if (zmm10.d f>= zmm8_1.d)
                zmm1 = zmm8_1
            else
                zmm1 = 0xbf800000
            
            zmm6_2 f- zmm8_1.d
            
            if (not(zmm6_2 f<= zmm8_1.d))
                zmm0_2 = 0x3f800000
            else if (zmm6_2 f>= zmm8_1.d)
                zmm0_2 = zmm8_1
            else
                zmm0_2 = 0xbf800000
            
            if (not(zmm1.d f== zmm0_2.d))
                zmm0_2.d = zmm12.d f+ zmm12.d
                zmm7_2.d = zmm9_1.d f- zmm0_2.d
                int128_t zmm0_3
                int512_t zmm3_1
                zmm0_3, zmm3_1, zmm6_2, zmm7_2, zmm8_1, zmm9_1 = sub_141f86ef0(arg1, zmm7_2, zmm8_1)
                zmm3_1.o = zmm0_3
                result =
                    sub_141f786c0(arg1, zmm7_2, zmm9_1, zmm3_1, zmm6_2, arg5 + 1, arg6, arg7, arg8)
            
            zmm9_1.d = zmm9_1.d f+ zmm12.d
        while (zmm9_1.d f< zmm15.d)

return result
