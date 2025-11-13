// 函数: sub_141f27de0
// 地址: 0x141f27de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm8 = arg3.o

if ((*arg5 & 1) != 0)
    int32_t var_50_1 = arg4[1].d
    int64_t rax_2 = *arg1
    uint64_t var_58 = *arg4
    int32_t var_68
    (*(rax_2 + 0x490))(arg1, &var_68, arg2, arg3.o, arg4, arg5)
    arg3.o = var_68
    arg3.d = arg3.d f* *arg2
    int32_t var_64
    uint128_t zmm0
    zmm0.d = var_64.d f* arg2[1]
    int32_t var_60
    int512_t zmm1
    zmm1.o = var_60
    zmm1.d = zmm1.d f* arg2[2]
    arg3.d = arg3.d f+ zmm0.d
    arg3.d = arg3.d f+ zmm1.d
    
    if (not(arg3.d f<= 0f))
        zmm0 = *(arg1[0x16] + 0x1c0)
        uint128_t var_48 = zmm0
        sub_141f231f0(arg1, &var_68, &var_48, 1, zmm0.q, zmm1, arg3, arg5, 0)
        char rax_4 = *arg5
        uint128_t zmm6 = *(arg5 + 8)
        
        if ((rax_4 & 1) != 0 && (rax_4 & 2) == 0)
            if (arg6 != 0)
                arg3.o = zmm6
                arg3.d = arg3.d f* zmm8.d
                (*(*arg1 + 0x458))(arg1, arg5, arg3, &var_68)
            
            (*(*arg1 + 0x4a0))(arg1, &var_68, arg5, &var_58)
            zmm1.o = var_68
            zmm0 = _mm_and_ps(zmm1.o, 0x7fffffff)
            arg3.o = var_60
            uint128_t zmm3 = var_64
            
            if (zmm0.d f> 0.00100000005f)
            label_141f27f51:
                zmm1.d = zmm1.d f* *arg2
                zmm3.d = zmm3.d f* arg2[1]
                arg3.d = arg3.d f* arg2[2]
                zmm1.d = zmm1.d f+ zmm3.d
                zmm1.d = zmm1.d f+ arg3.d
                
                if (not(zmm1.d f<= 0f))
                    sub_141f231f0(arg1, &var_68, &var_48, 1, zmm0.q, zmm1, arg3, arg5, 0)
                    arg3.o = 0x3f800000
                    arg3.d = 1f f- zmm6.d
                    arg3.d = arg3.d f* *(arg5 + 8)
                    zmm0.d = arg3.o.d f+ zmm6.d
                    zmm6 = zmm0
                    
                    if (arg6 != 0 && (*arg5 & 1) != 0)
                        arg3.d = arg3.d f* zmm8.d
                        (*(*arg1 + 0x458))(arg1, arg5, arg3, &var_68)
            else
                zmm0 = _mm_and_ps(zmm3, 0x7fffffff)
                
                if (zmm0.d f> 0.00100000005f)
                    goto label_141f27f51
                
                zmm0 = _mm_and_ps(arg3.o, 0x7fffffff)
                
                if (not(zmm0.d f<= 0.00100000005f))
                    goto label_141f27f51
        
        if (zmm6.d f< 0f)
            return zx.o(0)
        
        return __minss_xmmss_memss(zmm6.d, 0x3f800000)

return zx.o(0)
