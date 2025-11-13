// 函数: sub_1420ba4e0
// 地址: 0x1420ba4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3.d = arg3.d f* 0.0174532924f
uint128_t zmm0
zmm0.d = arg3.d f* 0.159154937f

if (arg3.d f< 0f)
    zmm0.d = zmm0.d f- 0.5f
else
    zmm0.d = zmm0.d f+ 0.5f

zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d f* 6.28318548f
arg3.d = arg3.d f- zmm0.d
int128_t zmm9

if (arg3.d f<= 1.57079637f)
    if (not(arg3.d f>= -1.57079637f))
        zmm0 = 0xc0490fdb
        goto label_1420ba587
    
    zmm9 = 0x3f800000
else
    zmm0 = 0x40490fdb
label_1420ba587:
    zmm9 = 0xbf800000
    zmm0.d = zmm0.d f- arg3.d
    arg3 = zmm0

uint128_t zmm4
zmm4.d = arg2.d f* 0.0174532924f
arg2.d = arg3.d f* arg3.d
zmm0.d = arg2.d f* 2.3889859e-08f
int128_t zmm10
zmm10.d = 2.75255616e-06f f- zmm0.d
zmm0.d = arg2.d f* 2.60516146e-07f
zmm10.d = zmm10.d f* arg2.d
zmm10.d = zmm10.d f- 0.000198408743f
zmm10.d = zmm10.d f* arg2.d
zmm10.d = zmm10.d f+ 0.00833333097f
zmm10.d = zmm10.d f* arg2.d
zmm10.d = zmm10.d f- 0.166666672f
zmm10.d = zmm10.d f* arg2.d
zmm10.d = zmm10.d f+ 1f
zmm10.d = zmm10.d f* arg3.d
uint128_t zmm7
zmm7.d = 2.47604949e-05f f- zmm0.d
zmm0.d = zmm4.d f* 0.159154937f
zmm7.d = zmm7.d f* arg2.d
zmm7.d = zmm7.d f- 0.00138883782f
zmm7.d = zmm7.d f* arg2.d
zmm7.d = zmm7.d f+ 0.0416666381f
zmm7.d = zmm7.d f* arg2.d
zmm7.d = zmm7.d f- 0.5f
zmm7.d = zmm7.d f* arg2.d
zmm7.d = zmm7.d f+ 1f
zmm7.d = zmm7.d f* zmm9.d

if (zmm4.d f< 0f)
    zmm0.d = zmm0.d f- 0.5f
else
    zmm0.d = zmm0.d f+ 0.5f

zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d f* 6.28318548f
zmm4.d = zmm4.d f- zmm0.d
uint128_t zmm5

if (zmm4.d f<= 1.57079637f)
    zmm5 = zmm7
    
    if (not(zmm4.d f>= -1.57079637f))
        uint128_t zmm8
        zmm8.d = -3.14159274f f- zmm4.d
        zmm4 = zmm8
        zmm5 ^= data_142d3f780
else
    zmm5.d = 3.14159274f f- zmm4.d
    zmm4 = zmm5
    zmm5 = zmm7 ^ data_142d3f780

arg2.d = zmm4.d f* zmm4.d
zmm0.d = arg2.d f* 2.60516146e-07f
arg3.d = 2.47604949e-05f f- zmm0.d
zmm0.d = arg2.d f* 2.3889859e-08f
arg3.d = arg3.d f* arg2.d
arg3.d = arg3.d f- 0.00138883782f
arg3.d = arg3.d f* arg2.d
arg3.d = arg3.d f+ 0.0416666381f
arg3.d = arg3.d f* arg2.d
arg3.d = arg3.d f- 0.5f
arg3.d = arg3.d f* arg2.d
arg3.d = arg3.d f+ 1f
arg3.d = arg3.d f* zmm5.d
zmm5 = arg4
zmm10.d = zmm10.d f* zmm5.d
arg3.d = arg3.d f* zmm5.d
arg1[2] = zmm10.d
arg4 = ((
    (((2.75255616e-06f f- zmm0.d) f* arg2.d - 0.000198408743f) f* arg2.d + 0.00833333097f) f* arg2.d
    - 0.166666672f) f* arg2.d + 1f) f* zmm4.d f* zmm7.d f* zmm5.d
*arg1 = arg3.d
arg1[1] = arg4
return arg1
