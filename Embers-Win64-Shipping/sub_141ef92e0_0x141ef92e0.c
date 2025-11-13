// 函数: sub_141ef92e0
// 地址: 0x141ef92e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm9 = arg3.o

if ((*arg5 & 1) == 0)
    return zx.o(0)

int32_t rax_1 = arg4[1].d
uint128_t zmm0 = zx.o(*arg4)
int64_t rax_2 = *arg1
uint64_t var_58 = zmm0.q

if ((*(rax_2 + 0x550))(zmm0) != 0)
    uint128_t zmm3 = rax_1
    uint128_t zmm6
    uint128_t var_18_1 = zmm6
    uint128_t zmm7
    uint128_t var_28_1 = zmm7
    int32_t var_68_1
    int32_t var_50_2
    uint128_t zmm1
    uint128_t zmm5_1
    
    if (not(zmm3.d f<= 0f))
        if ((*(*arg1 + 0x820))(arg1, arg5) == 0)
            zmm6 = var_58.d
            zmm7 = var_58:4.d
            zmm1.d = zmm6.d f* zmm6.d
            zmm0.d = zmm7.d f* zmm7.d
            zmm1.d = zmm1.d f+ zmm0.d
            
            if (not(zmm1.d f!= 1f))
                zmm0 = rax_1
                var_68_1 = zmm6.d
                int32_t var_64_1 = zmm7.d
                
                if (zmm0.d f!= 0f)
                    goto label_141ef95a0
                
                var_58 = var_68_1.q
                var_50_2 = zmm0.d
            else if (zmm1.d f< 9.99999994e-09f)
            label_141ef951c:
                int32_t var_60_1 = data_143dbb200.d
                int32_t var_64_3 = data_143dbb1fc.d
                var_58 = data_143dbb1f8.d.q
                var_50_2 = var_60_1
            else
                zmm5_1 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
                arg3.o = 0x3f000000
                zmm3.d = zmm1.d f* 0.5f
                zmm0.d = zmm5_1.d f* zmm5_1.d
                zmm1.d = zmm3.d f* zmm0.d
                arg3.d = 0.5f f- zmm1.d
                zmm0.d = zmm5_1.d f* arg3.d
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm1.d = zmm5_1.d f* zmm5_1.d
                zmm3.d = zmm3.d f* zmm1.d
                zmm0.d = zmm5_1.d f* (0.5f f- zmm3.d)
                zmm5_1.d = zmm5_1.d f+ zmm0.d
                zmm0 = zmm5_1
                zmm5_1.d = zmm5_1.d f* zmm7.d
                zmm0.d = zmm0.d f* zmm6.d
            label_141ef9596:
                var_68_1 = zmm0.d
                int32_t var_64_4 = zmm5_1.d
            label_141ef95a0:
                var_58 = var_68_1.q
                var_50_2 = 0
    else if (not(zmm3.d f>= -9.99999975e-05f) && not(1.89999998f f<= *(arg1 + 0x2f4))
            && (arg1[0x5e].b & 1) != 0)
        zmm0 = zx.o(*(arg1 + 0x324))
        int32_t rax_6 = *(arg1 + 0x32c)
        int32_t var_68
        var_68.q = zmm0.q
        zmm7 = var_68
        zmm6 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm0.d = zmm7.d f* *arg2
        arg3.o = zmm6
        arg3.d = arg3.d f* arg2[1]
        uint128_t zmm4_1 = rax_6
        zmm1.d = zmm4_1.d f* arg2[2]
        arg3.d = arg3.d f+ zmm0.d
        arg3.d = arg3.d f+ zmm1.d
        
        if (arg3.d f>= 0f || zmm4_1.d f>= 0.999989986f)
            zmm6 = var_58:4.d
            zmm7 = var_58.d
        else
            zmm3 = zmm4_1
        
        zmm1.d = zmm7.d f* zmm7.d
        zmm0.d = zmm6.d f* zmm6.d
        zmm1.d = zmm1.d f+ zmm0.d
        
        if (zmm1.d f!= 1f)
            if (not(zmm1.d f>= 9.99999994e-09f))
                goto label_141ef951c
            
            zmm5_1 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
            arg3.o = 0x3f000000
            zmm3.d = zmm1.d f* 0.5f
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm1.d = zmm3.d f* zmm0.d
            arg3.d = 0.5f f- zmm1.d
            zmm0.d = zmm5_1.d f* arg3.d
            zmm5_1.d = zmm5_1.d f+ zmm0.d
            zmm1.d = zmm5_1.d f* zmm5_1.d
            zmm3.d = zmm3.d f* zmm1.d
            zmm4_1.d = 0.5f f- zmm3.d
            zmm0.d = zmm5_1.d f* zmm4_1.d
            zmm5_1.d = zmm5_1.d f+ zmm0.d
            zmm0 = zmm5_1
            zmm5_1.d = zmm5_1.d f* zmm6.d
            zmm0.d = zmm0.d f* zmm7.d
            goto label_141ef9596
        
        var_68_1 = zmm7.d
        int32_t var_64_2 = zmm6.d
        
        if (zmm3.d f!= 0f)
            goto label_141ef95a0
        
        var_58 = var_68_1.q
        var_50_2 = zmm3.d

arg3.o = zmm9
return sub_141f27de0(arg1, arg2, arg3, &var_58, arg5, arg6)
