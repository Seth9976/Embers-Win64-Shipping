// 函数: sub_140ae4210
// 地址: 0x140ae4210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0_1[0x4]
float zmm6[0x4]
int512_t zmm7
zmm0_1, zmm6, zmm7 = sub_140a454f0(*arg1, 0x43b40000)
zmm7.o = zmm0_1
uint128_t zmm0_2
uint128_t zmm7_1
zmm0_2, zmm7_1 = sub_140a454f0(*(arg1 + 4), zmm6)
zmm7_1.d = zmm7_1.d f* 0.0174532924f
uint128_t zmm3 = zmm0_2
uint128_t zmm1_2
zmm1_2.d = zmm7_1.d f* 0.159154937f

if (zmm7_1.d f< 0f)
    zmm1_2.d = zmm1_2.d f- 0.5f
else
    zmm1_2.d = zmm1_2.d f+ 0.5f

zmm0_2.d = _mm_cvtepi32_ps(zx.o(int.d(zmm1_2.d))).d f* 6.28318548f
zmm7_1.d = zmm7_1.d f- zmm0_2.d
int32_t zmm9

if (zmm7_1.d f<= 1.57079637f)
    if (not(zmm7_1.d f>= -1.57079637f))
        zmm0_2 = 0xc0490fdb
        goto label_140ae42e1
    
    zmm9 = 0x3f800000
else
    zmm0_2 = 0x40490fdb
label_140ae42e1:
    zmm9 = 0xbf800000
    zmm0_2.d = zmm0_2.d f- zmm7_1.d
    zmm7_1 = zmm0_2

zmm3.d = zmm3.d f* 0.0174532924f
zmm1_2.d = zmm7_1.d f* zmm7_1.d
zmm0_2.d = zmm1_2.d f* 2.3889859e-08f
int128_t zmm14
zmm14.d = 2.75255616e-06f f- zmm0_2.d
zmm0_2.d = zmm1_2.d f* 2.60516146e-07f
zmm14.d = zmm14.d f* zmm1_2.d
zmm14.d = zmm14.d f- 0.000198408743f
zmm14.d = zmm14.d f* zmm1_2.d
zmm14.d = zmm14.d f+ 0.00833333097f
zmm14.d = zmm14.d f* zmm1_2.d
zmm14.d = zmm14.d f- 0.166666672f
zmm14.d = zmm14.d f* zmm1_2.d
zmm14.d = zmm14.d f+ 1f
zmm14.d = zmm14.d f* zmm7_1.d
zmm7_1.d = 2.47604949e-05f f- zmm0_2.d
zmm0_2.d = zmm3.d f* 0.159154937f
zmm7_1.d = zmm7_1.d f* zmm1_2.d
zmm7_1.d = zmm7_1.d f- 0.00138883782f
zmm7_1.d = zmm7_1.d f* zmm1_2.d
zmm7_1.d = zmm7_1.d f+ 0.0416666381f
zmm7_1.d = zmm7_1.d f* zmm1_2.d
zmm7_1.d = zmm7_1.d f- 0.5f
zmm7_1.d = zmm7_1.d f* zmm1_2.d
zmm7_1.d = zmm7_1.d f+ 1f
zmm7_1.d = zmm7_1.d f* zmm9

if (zmm3.d f< 0f)
    zmm0_2.d = zmm0_2.d f- 0.5f
else
    zmm0_2.d = zmm0_2.d f+ 0.5f

zmm0_2.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0_2.d))).d f* 6.28318548f
zmm3.d = zmm3.d f- zmm0_2.d
uint128_t zmm5

if (zmm3.d f<= 1.57079637f)
    zmm5 = zmm7_1
    
    if (not(zmm3.d f>= -1.57079637f))
        uint128_t zmm8
        zmm8.d = -3.14159274f f- zmm3.d
        zmm3 = zmm8
        zmm5 ^= data_142d3f780
else
    zmm5.d = 3.14159274f f- zmm3.d
    zmm3 = zmm5
    zmm5 = zmm7_1 ^ data_142d3f780

arg2[2] = zmm14.d
zmm1_2.d = zmm3.d f* zmm3.d
zmm0_2.d = zmm1_2.d f* 2.60516146e-07f
float zmm4 = 2.47604949e-05f f- zmm0_2.d
zmm0_2.d = zmm1_2.d f* 2.3889859e-08f
*arg2 = ((((zmm4 f* zmm1_2.d - 0.00138883782f) f* zmm1_2.d + 0.0416666381f) f* zmm1_2.d - 0.5f)
    f* zmm1_2.d + 1f) f* zmm5.d
arg2[1] = (((((2.75255616e-06f f- zmm0_2.d) f* zmm1_2.d - 0.000198408743f) f* zmm1_2.d
    + 0.00833333097f) f* zmm1_2.d - 0.166666672f) f* zmm1_2.d + 1f) f* zmm3.d f* zmm7_1.d
return arg2
