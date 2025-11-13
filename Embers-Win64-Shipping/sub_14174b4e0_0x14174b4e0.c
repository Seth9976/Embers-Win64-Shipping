// 函数: sub_14174b4e0
// 地址: 0x14174b4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg9 = 0xffffffff
uint128_t zmm2 = *arg1
int128_t zmm8 = *(arg1 + 4)
uint128_t zmm0
zmm0.d = (*arg2).d f- zmm2.d
uint128_t zmm6 = arg1[1].d
uint128_t zmm5 = *(arg1 + 0xc)
uint128_t zmm7 = *(arg1 + 0x14)
int128_t zmm9 = *(arg1 + 8)
zmm0.d = zmm0.d f* zmm5.d
int64_t zmm1
zmm1.d = (*(arg2 + 8)).d f- zmm9.d
int128_t zmm10 = arg5
uint128_t zmm14 = arg4
arg4.d = (*(arg2 + 4)).d f- zmm8.d
zmm1.d = zmm1.d f* zmm7.d
arg4.d = arg4.d f* zmm6.d
arg4.d = arg4.d f+ zmm0.d
arg4.d = arg4.d f+ zmm1.d
int32_t* result

if (__andps_xmmxud_memxud(arg4, data_142d3f770).d f>= zmm10.d)
    int32_t var_78
    int32_t var_70_1
    
    if (arg4.d f>= 0f)
        var_78 = (zmm5 ^ 0x80000000).d
        int32_t var_74_1 = (zmm6 ^ 0x80000000).d
        var_70_1 = (zmm7 ^ 0x80000000).d
    else
        var_78.q = *(arg1 + 0xc)
        var_70_1 = *(arg1 + 0x14)
    
    zmm0 = zx.o(var_78.q)
    var_78.q = zmm0.q
    zmm7 = var_78
    zmm5 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm0.d = zmm7.d f* *arg3
    arg4.d = zmm5.d f* arg3[1]
    zmm6 = var_70_1
    zmm1.d = zmm6.q.d f* arg3[2]
    arg4.d = arg4.d f+ zmm0.d
    arg4.d = arg4.d f+ zmm1.d
    
    if (not(arg4.d f< 1.00000001e-07f))
        zmm0.d = zmm7.d f* zmm10.d
        zmm2.d = zmm2.d f- zmm0.d
        zmm0.d = zmm5.d f* zmm10.d
        zmm2.d = zmm2.d f- *arg2
        zmm8.d = zmm8.d f- zmm0.d
        zmm0.d = zmm6.d f* zmm10.d
        zmm2.d = zmm2.d f* zmm7.d
        zmm8.d = zmm8.d f- *(arg2 + 4)
        zmm9.d = zmm9.d f- zmm0.d
        zmm8.d = zmm8.d f* zmm5.d
        zmm9.d = zmm9.d f- *(arg2 + 8)
        zmm2.d = zmm2.d f+ zmm8.d
        zmm9.d = zmm9.d f* zmm6.d
        zmm2.d = zmm2.d f+ zmm9.d
        zmm2.d = zmm2.d f/ arg4.d
    
    if (not(arg4.d f< 1.00000001e-07f) && zmm2.d f<= zmm14.d)
        *arg6 = zmm2.d
        zmm2.d = zmm2.d f+ zmm10.d
        zmm0.d = zmm2.d f* *arg3
        zmm1.d = zmm2.q.d f* arg3[1]
        zmm0.d = zmm0.d f+ *arg2
        zmm2.d = zmm2.d f* arg3[2]
        zmm1.d = zmm1.d f+ *(arg2 + 4)
        zmm2.d = zmm2.d f+ *(arg2 + 8)
        *arg7 = (_mm_unpacklo_ps(zmm0, zmm1)).q
        arg7[1].d = zmm2.d
        *arg8 = (_mm_unpacklo_ps(zmm7 ^ 0x80000000, (zmm5 ^ 0x80000000).q)).q
        arg8[1].d = (zmm6 ^ 0x80000000).d
        result.b = 1
    else
        result.b = 0
else
    *arg6 = 0
    result.b = 1

return result
