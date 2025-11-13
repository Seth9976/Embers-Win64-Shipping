// 函数: sub_140380430
// 地址: 0x140380430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_18 = zmm6
int64_t r10 = sx.q(arg2)
uint128_t zmm7
uint128_t var_28 = zmm7
int32_t temp0 = divs.dp.d(sx.q(arg3), r10.d)
uint128_t result_1 = zx.o(0)
uint128_t zmm8 = zx.o(0)
uint128_t result_2 = zx.o(0)
int32_t r8 = temp0

if (r8 s< 0x32)
    r8 = 0x32

uint128_t zmm1
zmm1.d = 25f f/ _mm_cvtepi32_ps(zx.o(r8)).d
int128_t zmm12
zmm12.d = 1f f- zmm1.d
uint128_t result
uint128_t zmm2

if (r10.d s> 0)
    int128_t* rax_3 = arg1 + 8
    int64_t i_1 = ((r10 - 1) u>> 2) + 1
    int64_t i
    
    do
        result = *(rax_3 - 8)
        zmm2 = *rax_3
        uint128_t zmm3 = *(rax_3 + 4)
        zmm1 = zmm3
        zmm3.d = zmm3.d f* zmm3.d
        float zmm5 = result.d f* result.d
        zmm1.d = zmm1.d f* zmm2.d
        zmm7 = *(rax_3 - 4)
        uint128_t zmm4 = *(rax_3 + 0xc)
        rax_3 = &rax_3[2]
        zmm6.d = zmm7.d f* result.d
        zmm7.d = zmm7.d f* zmm7.d
        zmm6.d = zmm6.d f+ zmm1.d
        zmm7.d = zmm7.d f+ zmm3.d
        zmm3 = *(rax_3 - 0xc)
        result.d = zmm2.d f* zmm2.d
        zmm1 = zmm4
        zmm4.d = zmm4.d f* zmm4.d
        zmm2 = *(rax_3 - 0x18)
        zmm5 = zmm5 f+ result.d
        zmm7.d = zmm7.d f+ zmm4.d
        zmm1.d = zmm1.d f* zmm2.d
        result.d = zmm2.d f* zmm2.d
        zmm2 = rax_3[-1].d
        zmm6.d = zmm6.d f+ zmm1.d
        zmm5 = zmm5 f+ result.d
        zmm1 = zmm3
        zmm3.d = zmm3.d f* zmm3.d
        zmm1.d = zmm1.d f* zmm2.d
        result.d = zmm2.d f* zmm2.d
        zmm1.d = zmm1.d f+ zmm6.d
        zmm3.d = zmm3.d f+ zmm7.d
        result.d = result.d f+ zmm5
        zmm8.d = zmm8.d f+ zmm1.d
        result_1.d = result_1.d f+ zmm3.d
        result_2.d = result_2.d f+ result.d
        i = i_1
        i_1 -= 1
    while (i != 1)

result_2.d = result_2.d f- *arg4
zmm8.d = zmm8.d f- arg4[1]
result_1.d = result_1.d f- arg4[2]
result_2.d = result_2.d f* zmm12.d
zmm8.d = zmm8.d f* zmm12.d
result_1.d = result_1.d f* zmm12.d
result_2.d = result_2.d f+ *arg4
zmm8.d = zmm8.d f+ arg4[1]
result_1.d = result_1.d f+ arg4[2]
*arg4 = result_2.d
arg4[1] = zmm8.d
arg4[2] = result_1.d

if (not(0f f<= result_2.d))
    result_2 = zx.o(0)

*arg4 = result_2.d

if (not(0f f<= zmm8.d))
    zmm8 = zx.o(0)

arg4[1] = zmm8.d

if (not(0f f<= result_1.d))
    result_1 = zx.o(0)

arg4[2] = result_1.d

if (result_2.d f<= result_1.d)
    result = result_1
else
    result = result_2

if (not(result.d f<= 0.00079999998f))
    result.q = fconvert.d(result_2.d)
    zmm6.d = fconvert.s(sqrt(result.q))
    zmm7.d = fconvert.s(sqrt(fconvert.d(result_1.d)))
    result_2.d = fconvert.s(sqrt(_mm_cvtps_pd(zmm6.q).q))
    double zmm0_3 = sqrt(_mm_cvtps_pd(zmm7.q).q)
    zmm7.d = zmm7.d f* zmm6.d
    int128_t zmm14
    zmm14.d = fconvert.s(zmm0_3)
    
    if (not(zmm7.d f> zmm8.d))
        zmm8 = zmm7
    
    arg4[1] = zmm8.d
    result_1.d = result_2.d f- zmm14.d
    zmm7.d = zmm7.d f+ 1e-15f
    zmm8.d = zmm8.d f/ zmm7.d
    
    if (not(0f f<= result_1.d))
        result_1 ^= data_142d3f780
    
    zmm8.d = zmm8.d f* zmm8.d
    zmm0_3.d = 1f f- zmm8.d
    zmm7 = _mm_cvtepi32_ps(zx.o(temp0))
    zmm1.d = fconvert.s(sqrt(fconvert.d(zmm0_3.d)).q)
    result.d = 0.0199999996f f/ zmm7.d
    result_2.d = result_2.d f+ 1e-15f
    zmm2.d = arg4[4].d f- result.d
    result_2.d = result_2.d f+ zmm14.d
    result_1.d = result_1.d f/ result_2.d
    zmm1.d = zmm1.d f* result_1.d
    zmm1.d = zmm1.d f- arg4[3]
    zmm1.d = zmm1.d f/ zmm7.d
    zmm1.d = zmm1.d f+ arg4[3]
    arg4[3] = zmm1.d
    
    if (not(zmm2.d f> zmm1.d))
        zmm2 = zmm1
    
    arg4[4] = zmm2.d

result.d = arg4[4].d f* 20f

if (result.d f<= 1f)
    return result

return 0x3f800000
