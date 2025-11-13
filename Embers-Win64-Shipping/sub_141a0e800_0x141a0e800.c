// 函数: sub_141a0e800
// 地址: 0x141a0e800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(arg3.d f!= 0f))
    *arg1 = 0
    *arg2 = 0x3f800000
    return 

if (not(arg3.d f!= 90f))
    *arg1 = 0x3f800000
    *arg2 = 0
    return 

if (not(arg3.d f!= 180f))
    *arg1 = 0
    *arg2 = 0xbf800000
    return 

if (not(arg3.d f!= 270f))
    *arg1 = 0xbf800000
    *arg2 = 0
    return 

uint128_t zmm3
zmm3.d = arg3.d f* 0.0174532924f
uint128_t zmm0
zmm0.d = zmm3.d f* 0.159154937f

if (zmm3.d f< 0f)
    zmm0.d = zmm0.d f- 0.5f
else
    zmm0.d = zmm0.d f+ 0.5f

zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d f* 6.28318548f
zmm3.d = zmm3.d f- zmm0.d
float zmm5

if (not(zmm3.d f<= 1.57079637f))
    zmm5 = -1f
    zmm0.d = 3.14159274f f- zmm3.d
    zmm3 = zmm0
else if (zmm3.d f>= -1.57079637f)
    zmm5 = 1f
else
    zmm5 = -1f
    zmm0.d = -3.14159274f f- zmm3.d
    zmm3 = zmm0

arg3.d = zmm3.d f* zmm3.d
zmm0.d = arg3.d f* 2.3889859e-08f
int32_t zmm1 = 2.75255616e-06f f- zmm0.d
zmm0.d = arg3.d f* 2.60516146e-07f
*arg1 = ((((zmm1 f* arg3.d f- 0.000198408743f) f* arg3.d f+ 0.00833333097f) f* arg3.d
    f- 0.166666672f) f* arg3.d f+ 1f) f* zmm3.d
*arg2 = (((((2.47604949e-05f f- zmm0.d) f* arg3.d f- 0.00138883782f) f* arg3.d f+ 0.0416666381f)
    f* arg3.d f- 0.5f) f* arg3.d f+ 1f) f* zmm5
