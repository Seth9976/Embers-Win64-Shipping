// 函数: sub_141f41d80
// 地址: 0x141f41d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t __saved_zmm6 = arg6
(*(*arg1 + 0x3f0))()
arg6 = arg5
uint64_t var_58
uint128_t __saved_zmm9
uint128_t __saved_zmm8
uint128_t __saved_zmm7

if (not(arg6.d f<= 0f))
    int32_t rax_1
    uint128_t zmm1
    
    if (arg6.d f>= 9.99999975e-05f)
        __saved_zmm7 = arg7
        arg7 = *arg3
        __saved_zmm8 = arg8
        arg8 = *(arg3 + 4)
        uint128_t zmm2
        zmm2.d = arg7.d f* arg7.d
        arg5.d = arg8.d f* arg8.d
        __saved_zmm9 = arg9
        arg9 = arg3[1].d
        zmm2.d = zmm2.d f+ arg5.d
        zmm1.d = arg9.d f* arg9.d
        arg5.d = arg6.d f* arg6.d
        zmm2.d = zmm2.d f+ zmm1.d
        
        if (zmm2.d f<= arg5.d)
            zmm1 = zx.o(*arg3)
            rax_1 = arg3[1].d
        else
            uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
            arg4.d = zmm2.d f* 0.5f
            arg5.d = zmm5_1.d f* zmm5_1.d
            zmm1.d = arg4.d f* arg5.d
            zmm2.d = 0.5f f- zmm1.d
            arg5.d = zmm5_1.d f* zmm2.d
            zmm5_1.d = zmm5_1.d f+ arg5.d
            zmm1.d = zmm5_1.d f* zmm5_1.d
            arg4.d = arg4.d f* zmm1.d
            arg5.d = zmm5_1.d f* (0.5f f- arg4.d)
            zmm5_1.d = zmm5_1.d f+ arg5.d
            zmm5_1.d = zmm5_1.d f* arg6.d
            arg7.d = arg7.d f* zmm5_1.d
            arg8.d = arg8.d f* zmm5_1.d
            zmm1.d = arg7.d
            arg9.d = arg9.d f* zmm5_1.d
            _mm_shuffle_ps(zmm1, zmm1, 0xe1)
            zmm1.d = arg8.d
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
            rax_1 = arg9.d
            var_58 = zmm1.q
    else
        arg4 = data_143dbb1fc
        zmm1.d = data_143dbb1f8.d
        rax_1 = data_143dbb200.d
        _mm_shuffle_ps(zmm1, zmm1, 0xe1)
        arg5.d = arg4.d
        arg5 = _mm_shuffle_ps(arg5, arg5, 0xe1)
        var_58 = arg5.q
        zmm1 = arg5
    
    *arg3 = zmm1.q
    arg3[1].d = rax_1

int32_t rax_2 = arg3[1].d
int64_t rax_3 = *arg1
var_58 = *arg3
(*(rax_3 + 0x4e0))(arg1, arg2, &var_58, arg4, var_58, rax_2, __saved_zmm9, __saved_zmm8, 
    __saved_zmm7, __saved_zmm6)
return arg2
