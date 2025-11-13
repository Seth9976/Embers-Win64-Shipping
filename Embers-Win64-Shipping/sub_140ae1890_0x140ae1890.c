// 函数: sub_140ae1890
// 地址: 0x140ae1890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0_1[0x4]
int512_t zmm6
zmm0_1, zmm6 = sub_140a3f4a0(*(arg1 + 4), *arg1)
float zmm1_1[0x4] = *arg1
zmm6.o = zmm0_1
zmm0_1 = *(arg1 + 4)
zmm0_1[0] = zmm0_1[0] f* zmm0_1[0]
zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
zmm1_1[0] = zmm1_1[0] f+ zmm0_1[0]
uint128_t zmm0_2
uint128_t zmm6_1
zmm0_2, zmm6_1 = sub_140a3f4a0(*(arg1 + 8), _mm_sqrt_ss(zmm1_1[0], zmm1_1[0]))
uint128_t zmm2
zmm2.d = zmm0_2.d f* 0.5f
uint128_t zmm1_2
zmm1_2.d = zmm2.d f* 0.159154937f

if (zmm2.d f< 0f)
    zmm1_2.d = zmm1_2.d f- 0.5f
else
    zmm1_2.d = zmm1_2.d f+ 0.5f

int32_t zmm5 = 0xbf800000
zmm0_2.d = _mm_cvtepi32_ps(zx.o(int.d(zmm1_2.d))).d f* 6.28318548f
zmm2.d = zmm2.d f- zmm0_2.d
int128_t zmm10

if (not(zmm2.d f<= 1.57079637f))
    zmm10 = 0xbf800000
    zmm0_2.d = 3.14159274f f- zmm2.d
    zmm2 = zmm0_2
else if (zmm2.d f>= -1.57079637f)
    zmm10 = 0x3f800000
else
    zmm10 = 0xbf800000
    zmm0_2.d = -3.14159274f f- zmm2.d
    zmm2 = zmm0_2

zmm1_2.d = zmm2.d f* zmm2.d
zmm6_1.d = zmm6_1.d f* 0.5f
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
zmm14.d = zmm14.d f* zmm2.d
int128_t zmm15
zmm15.d = 2.47604949e-05f f- zmm0_2.d
zmm0_2.d = zmm6_1.d f* 0.159154937f
zmm15.d = zmm15.d f* zmm1_2.d
zmm15.d = zmm15.d f- 0.00138883782f
zmm15.d = zmm15.d f* zmm1_2.d
zmm15.d = zmm15.d f+ 0.0416666381f
zmm15.d = zmm15.d f* zmm1_2.d
zmm15.d = zmm15.d f- 0.5f
zmm15.d = zmm15.d f* zmm1_2.d
zmm15.d = zmm15.d f+ 1f
zmm15.d = zmm15.d f* zmm10.d

if (zmm6_1.d f< 0f)
    zmm0_2.d = zmm0_2.d f- 0.5f
else
    zmm0_2.d = zmm0_2.d f+ 0.5f

zmm0_2.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0_2.d))).d f* 6.28318548f
zmm6_1.d = zmm6_1.d f- zmm0_2.d

if (not(zmm6_1.d f<= 1.57079637f))
    uint128_t zmm7
    zmm7.d = 3.14159274f f- zmm6_1.d
    zmm6_1 = zmm7
else if (zmm6_1.d f>= -1.57079637f)
    zmm5 = 0x3f800000
else
    uint128_t zmm8
    zmm8.d = -3.14159274f f- zmm6_1.d
    zmm6_1 = zmm8

zmm1_2.d = zmm6_1.d f* zmm6_1.d
zmm0_2.d = zmm1_2.d f* 2.3889859e-08f
uint128_t zmm3
zmm3.d = 2.75255616e-06f f- zmm0_2.d
zmm0_2.d = zmm1_2.d f* 2.60516146e-07f
zmm2.d = 2.47604949e-05f f- zmm0_2.d
zmm3.d = zmm3.d f* zmm1_2.d
zmm3.d = zmm3.d f- 0.000198408743f
zmm2.d = zmm2.d f* zmm1_2.d
zmm2.d = zmm2.d f- 0.00138883782f
zmm3.d = zmm3.d f* zmm1_2.d
zmm3.d = zmm3.d f+ 0.00833333097f
zmm2.d = zmm2.d f* zmm1_2.d
zmm2.d = zmm2.d f+ 0.0416666381f
zmm3.d = zmm3.d f* zmm1_2.d
zmm3.d = zmm3.d f- 0.166666672f
zmm2.d = zmm2.d f* zmm1_2.d
zmm3.d = zmm3.d f* zmm1_2.d
zmm2.d = zmm2.d f- 0.5f
zmm3.d = zmm3.d f+ 1f
zmm2.d = zmm2.d f* zmm1_2.d
zmm2.d = zmm2.d f+ 1f
zmm3.d = zmm3.d f* zmm6_1.d
zmm0_2 = zmm3
zmm3.d = zmm3.d f* zmm15.d
zmm2.d = zmm2.d f* zmm5
zmm0_2.d = zmm0_2.d f* zmm14.d
arg2[2] = zmm3.d
zmm1_2.d = zmm2.d f* zmm14.d
zmm2.d = zmm2.d f* zmm15.d
arg2[1] = (zmm1_2 ^ data_142d3f780).d
*arg2 = zmm0_2.d
arg2[3] = zmm2.d
return arg2
