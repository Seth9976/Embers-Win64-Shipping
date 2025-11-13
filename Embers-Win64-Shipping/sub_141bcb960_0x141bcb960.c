// 函数: sub_141bcb960
// 地址: 0x141bcb960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    int32_t rax_1 = arg2[1].d
    uint64_t var_28 = *arg2
    int32_t var_20_1 = rax_1
    int32_t var_18
    
    if (sub_142275350(arg1, &var_28, &var_18, arg4, var_28.d) != 0)
        uint128_t zmm1
        zmm1.d = var_18.d f* 2f
        zmm1.d = zmm1.d f+ 0.5f
        int32_t rax_2 = int.d(zmm1.d)
        int32_t var_14
        zmm1.d = var_14.d f* 2f
        zmm1.d = zmm1.d f+ 0.5f
        int64_t arg_10
        sub_141bdd090(arg1, 
            _mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o(rax_2 s>> 1)), 
                _mm_cvtepi32_ps(zx.o(int.d(zmm1.d) s>> 1)).q).q, 
            &arg_10, 0)
        int32_t arg_8
        int32_t arg_18
        sub_141b8f080(arg1, arg_10, &arg_18, &arg_8)
        uint64_t result
        result.b = 1
        *arg3 = (_mm_unpacklo_ps(arg_8, arg5)).q
        return result

*arg3 = (_mm_unpacklo_ps(data_143dbb1f8, data_143dbb1fc.q)).q
return 0
