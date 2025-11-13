// 函数: sub_14177a920
// 地址: 0x14177a920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm4 = *(arg1 + 0x34)
int32_t* rax = arg6
int128_t zmm7
zmm7.d = zmm4.d f* 0.5f
int128_t zmm8
zmm8.d = (*(arg1 + 0x38)).d f* 0.5f
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(rax[1])).d f* *(arg1 + 0x38)
int128_t zmm10
zmm10.d = (*(arg1 + 0x3c)).d f* 0.5f
zmm1.d = zmm1.d f+ *(arg1 + 0x14)
zmm1.d = zmm1.d f+ zmm8.d
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(*rax)).d f* zmm4.d
zmm0.d = zmm0.d f+ *(arg1 + 0x10)
int32_t var_64 = zmm1.d
zmm0.d = zmm0.d f+ zmm7.d
int32_t var_68 = zmm0.d
zmm0.d = _mm_cvtepi32_ps(zx.o(rax[2])).d f* *(arg1 + 0x3c)
zmm1 = _mm_cvtepi32_ps(zx.o(*arg5))
zmm0.d = zmm0.d f+ *(arg1 + 0x18)
zmm1.d = zmm1.d f* zmm4.d
zmm1.d = zmm1.d f+ *(arg1 + 0x10)
zmm0.d = zmm0.d f+ zmm10.d
zmm1.d = zmm1.d f+ zmm7.d
int32_t var_60 = zmm0.d
zmm0 = _mm_cvtepi32_ps(zx.o(arg5[1]))
int32_t var_5c = zmm1.d
zmm0.d = zmm0.d f* *(arg1 + 0x38)
zmm1 = _mm_cvtepi32_ps(zx.o(arg5[2]))
zmm0.d = zmm0.d f+ *(arg1 + 0x14)
zmm1.d = zmm1.d f* *(arg1 + 0x3c)
zmm1.d = zmm1.d f+ *(arg1 + 0x18)
zmm0.d = zmm0.d f+ zmm8.d
zmm1.d = zmm1.d f+ zmm10.d
int32_t var_58 = zmm0.d
int32_t var_78 = 0
int32_t var_54 = zmm1.d
int64_t var_50
sub_141737e80(arg4, &var_50, &var_5c, &var_68, zx.o(0), 0)
char var_44
int64_t* result

if (var_44 == 0)
    result.b = 0
else
    int64_t rdx_1 = *(arg2 + 0x28)
    var_78.q = &var_50
    sub_141549fd0(&arg6, rdx_1 + sx.q(*arg3) * 0xc, rdx_1 + sx.q(arg3[1]) * 0xc, 
        rdx_1 + sx.q(arg3[2]) * 0xc, var_78)
    float zmm2_1 = arg6.d
    
    if (zmm2_1 < -0.100000001f)
        result.b = 0
    else
        float zmm0_1 = arg6:4.d
        
        if (zmm0_1 < -0.100000001f || zmm0_1 + zmm2_1 > 1.10000002f)
            result.b = 0
        else
            result.b = 1

return result
