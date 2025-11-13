// 函数: sub_141f296b0
// 地址: 0x141f296b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm5 = zx.o(*(arg3 + 0x28))
int32_t rax = arg2[1].d
uint128_t zmm4 = *arg4
uint128_t zmm3 = *(arg4 + 8)
uint128_t zmm6 = *(arg4 + 4)
uint64_t var_c8 = *arg2
uint128_t zmm2
zmm2.d = zmm4.d f* zmm5.d
float rax_1 = *(arg3 + 0x30)
uint64_t var_b8 = zmm5.q
uint128_t zmm9 = var_b8:4.d
uint128_t zmm0
zmm0.d = zmm6.d f* zmm9.d
int128_t zmm10 = rax_1
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm3.d f* zmm10.d
int32_t result
uint128_t result_1

if (zmm2.d f> 0f)
    zmm3.d = 1f f- *(arg3 + 8)
    result_1 = var_c8.d
    zmm6 = var_c8:4.d
    void var_a8
    int64_t* rax_3 = (*(*arg1 + 0x490))(arg1, &var_a8, &var_c8, zmm3, &var_b8, arg3)
    var_c8 = *rax_3
    zmm9 = var_c8:4.d
    zmm2.d = zmm9.d f* zmm6.d
    result = rax_3[1].d
    zmm6 = var_c8.d
    zmm0.d = zmm6.d f* result_1.d
    result_1 = result
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ result_1.d f* rax.d
    
    if (zmm2.d f> 0f)
        zmm3 = var_b8:4.d
        uint128_t zmm4_1 = var_b8.d
        zmm2.d = zmm3.d f* *(arg4 + 4)
        zmm0.d = zmm4_1.d f* *arg4
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ rax_1 f* *(arg4 + 8)
        zmm2.d = zmm2.d f- 1f
        
        if (not(__andps_xmmxud_memxud(zmm2, data_142d3f770).d f>= 9.99999975e-05f))
            zmm4_1.d = zmm4_1.d f* 0.00999999978f
            zmm3.d = zmm3.d f* 0.00999999978f
            zmm6.d = zmm6.d f+ zmm4_1.d
            zmm9.d = zmm9.d f+ zmm3.d
            result_1.d = result_1.d f+ rax_1 * 0.00999999978f
            var_c8.d = zmm6.d
            var_c8:4.d = zmm9.d
            result = result_1.d
    else
        var_c8.d = data_143dbb1f8.d
        result = data_143dbb200.d
        var_c8:4.d = data_143dbb1fc
else
    uint128_t zmm12 = var_c8.d
    result_1.d = zmm3.d f* zmm9.d
    zmm0.d = zmm6.d f* zmm10.d
    uint128_t zmm8
    zmm8.d = zmm4.d f* zmm10.d
    result_1.d = result_1.d f- zmm0.d
    zmm6.d = zmm6.d f* zmm5.d
    zmm4.d = zmm4.d f* zmm9.d
    uint128_t zmm13 = var_c8:4.d
    zmm6.d = zmm6.d f- zmm4.d
    zmm3.d = zmm3.d f* zmm5.d
    zmm0.d = result_1.d f* result_1.d
    zmm8.d = zmm8.d f- zmm3.d
    int128_t zmm14 = rax
    zmm2.d = zmm8.d f* zmm8.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ zmm6.d f* zmm6.d
    
    if (not(zmm2.d f== 1f))
        if (zmm2.d f>= 9.99999994e-09f)
            zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
            zmm3.d = zmm2.d f* 0.5f
            zmm0.d = zmm5.d f* zmm5.d
            zmm2.d = 0.5f - zmm3.d f* zmm0.d
            zmm0.d = zmm5.d f* zmm2.d
            zmm5.d = zmm5.d f+ zmm0.d
            zmm3.d = zmm3.d f* zmm5.d f* zmm5.d
            zmm4.d = 0.5f f- zmm3.d
            zmm0.d = zmm5.d f* zmm4.d
            zmm5.d = zmm5.d f+ zmm0.d
            result_1.d = result_1.d f* zmm5.d
            zmm8.d = zmm8.d f* zmm5.d
            zmm6.d = zmm6.d f* zmm5.d
        else
            result_1 = data_143dbb1f8
            zmm8 = data_143dbb1fc
            zmm6 = data_143dbb200
    
    zmm9.d = 1f f- *(arg3 + 8)
    zmm2.d = zmm13.d f* zmm8.d
    zmm0.d = zmm12.d f* result_1.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ zmm6.d f* zmm14.d
    zmm2.d = zmm2.d f* zmm9.d
    result_1.d = result_1.d f* zmm2.d
    zmm6.d = zmm6.d f* zmm2.d
    zmm8.d = zmm8.d f* zmm2.d
    zmm0.d = result_1.d f* zmm12.d
    zmm2.d = zmm8.d f* zmm13.d
    zmm2.d = zmm2.d f+ zmm0.d
    var_c8.d = result_1.d
    var_c8:4.d = zmm8.d
    result = zmm6.d
    zmm2.d = zmm2.d f+ zmm6.d f* zmm14.d
    
    if (not(zmm2.d f>= 0f))
        var_c8.d = (result_1 ^ 0x80000000).d
        var_c8:4.d = (zmm8 ^ 0x80000000).d
        result = (zmm6 ^ 0x80000000).d
*arg2 = var_c8
arg2[1].d = result
return result
