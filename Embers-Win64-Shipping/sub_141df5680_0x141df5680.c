// 函数: sub_141df5680
// 地址: 0x141df5680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2

if (not(_mm_and_ps(*arg2, 0x7fffffff)[0] f> 9.99999975e-05f)
        && not(_mm_and_ps(*(arg2 + 4), 0x7fffffff)[0] f> 9.99999975e-05f)
        && not(_mm_and_ps(*(arg2 + 8), 0x7fffffff)[0] f> 9.99999975e-05f))
    return zx.o(0)

float var_88[0x10]
float* rax
uint128_t zmm7_1
rax, zmm7_1 = sub_14077e760(&var_88, arg3)
uint128_t zmm6 = *(rbx + 4)
uint128_t zmm2
zmm2.d = zmm6.d f* zmm6.d
int96_t var_c8 = (*rax).12
uint128_t zmm0_1
zmm0_1.d = zmm7_1.d f* zmm7_1.d
int96_t var_b8 = (*(rax + 0x10)).12
zmm2.d = zmm2.d f+ zmm0_1.d
int96_t zmm1
int96_t zmm3_1
int32_t zmm8

if (zmm2.d f!= 1f)
    if (zmm2.d f>= 9.99999994e-09f)
        zmm3_1 = zmm2.12
        uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm3_1.d)
        zmm3_1.d = zmm3_1.d f* 0.5f
        zmm0_1.d = zmm5_1.d f* zmm5_1.d
        zmm1.d = zmm3_1.d f* zmm0_1.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0_1.d = zmm5_1.d f* zmm2.d
        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
        zmm1.d = zmm5_1.12.d f* zmm5_1.d
        zmm3_1.d = zmm3_1.d f* zmm1.d
        zmm0_1.d = zmm5_1.d f* (0.5f f- zmm3_1.d)
        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
        zmm7_1.d = zmm7_1.d f* zmm5_1.d
        zmm6.d = zmm6.d f* zmm5_1.d
        zmm8 = (zx.o(0)).d
    else
        zmm7_1 = data_143dbb1f8
        zmm6 = data_143dbb1fc
        zmm8 = data_143dbb200
else if (0f f!= rbx[1].d)
    zmm8 = (zx.o(0)).d
else
    zmm0_1 = zx.o(*rbx)
    zmm8 = rbx[1].d
    zmm7_1 = zmm0_1.d
    zmm6 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)

zmm2.d = var_c8:4.d.d f* zmm6.d
zmm0_1.d = var_c8.d.d f* zmm7_1.d
zmm1.d = var_c8:8.d.d f* zmm8
zmm2.d = zmm2.d f+ zmm0_1.d
zmm0_1 = 0xbf800000
zmm2.d = zmm2.d f+ zmm1.d

if (not(zmm2.d f< -1f))
    zmm0_1 = __minss_xmmss_memss(zmm2.d, 0x3f800000)

int128_t result
result.d = acosf(zmm0_1.d).d f* 57.2957764f
zmm3_1.d = var_b8:4.d.d f* zmm6.d
zmm2.d = var_b8:8.d.d f* zmm8
zmm1.d = var_b8.d.d f* zmm7_1.d
zmm3_1.d = zmm3_1.d f+ zmm1.d
zmm3_1.d = zmm3_1.d f+ zmm2.d

if (zmm3_1.d f>= 0f)
    return result

return result ^ data_142d3f780
