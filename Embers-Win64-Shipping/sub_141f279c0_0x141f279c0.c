// 函数: sub_141f279c0
// 地址: 0x141f279c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result

if ((*arg2 & 1) == 0)
    result.b = 0
else if ((arg5 & 1) == 0 || arg4 == 0)
label_141f27a3f:
    
    if (data_143f3ad90.d f> *(arg2 + 0xc))
        if ((arg5 & 4) == 0)
            goto label_141f27a61
        
        result.b = 0
    else if ((*arg2 & 2) == 0 || (arg5 & 4) != 0)
        result.b = 0
    else
    label_141f27a61:
        uint128_t zmm6 = arg3[1].d
        uint128_t zmm7 = *arg3
        uint128_t zmm8 = *(arg3 + 4)
        uint128_t zmm2
        zmm2.d = zmm7.d f* zmm7.d
        uint128_t zmm0
        zmm0.d = zmm8.d f* zmm8.d
        uint128_t zmm1
        zmm1.d = zmm6.d f* zmm6.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (not(zmm2.d f!= 1f))
            zmm0 = zx.o(*arg3)
            zmm6 = arg3[1].d
            zmm7 = zmm0.d
            zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        else if (zmm2.d f>= 9.99999994e-09f)
            uint128_t zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
            uint128_t zmm3
            zmm3.d = zmm2.d f* 0.5f
            zmm0.d = zmm5.d f* zmm5.d
            zmm1.d = zmm3.d f* zmm0.d
            zmm2.d = 0.5f f- zmm1.d
            zmm0.d = zmm5.d f* zmm2.d
            zmm5.d = zmm5.d f+ zmm0.d
            zmm1.d = zmm5.d f* zmm5.d
            zmm3.d = zmm3.d f* zmm1.d
            zmm0.d = zmm5.d f* (0.5f f- zmm3.d)
            zmm5.d = zmm5.d f+ zmm0.d
            zmm8.d = zmm8.d f* zmm5.d
            zmm7.d = zmm7.d f* zmm5.d
            zmm1 = zmm8
            zmm6.d = zmm6.d f* zmm5.d
        else
            zmm7 = data_143dbb1f8
            zmm1 = data_143dbb1fc
            zmm6 = data_143dbb200
        
        zmm1.d = zmm1.d f* *(arg2 + 0x38)
        zmm7.d = zmm7.d f* *(arg2 + 0x34)
        zmm6.d = zmm6.d f* *(arg2 + 0x3c)
        zmm1.d = zmm1.d f+ zmm7.d
        zmm1.d = zmm1.d f+ zmm6.d
        
        if (zmm1.d f<= data_143f3ad8c)
            result.b = 0
        else
            result.b = 1
else
    result = sub_140d3c6e0(&arg2[0x68])
    
    if (result == 0)
        goto label_141f27a3f
    
    int64_t r8 = *arg4
    
    if ((*(r8 + 0x508))(arg4, result, r8).b != 0)
        result.b = 1
    else
        int64_t r8_1 = *result
        
        if ((*(r8_1 + 0x508))(result, arg4, r8_1).b == 0)
            goto label_141f27a3f
        
        result.b = 1

return result
