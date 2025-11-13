// 函数: sub_140adf070
// 地址: 0x140adf070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3.d = arg3.d f* 0.0174532924f
uint128_t zmm1
zmm1.d = arg3.d f* 0.159154937f

if (arg3.d f< 0f)
    zmm1.d = zmm1.d f- 0.5f
else
    zmm1.d = zmm1.d f+ 0.5f

uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm1.d))).d f* 6.28318548f
arg3.d = arg3.d f- zmm0.d
int32_t zmm5

if (not(arg3.d f<= 1.57079637f))
    zmm5 = 0xbf800000
    zmm0.d = 3.14159274f f- arg3.d
    arg3 = zmm0
else if (arg3.d f>= -1.57079637f)
    zmm5 = 0x3f800000
else
    zmm5 = 0xbf800000
    zmm0.d = -3.14159274f f- arg3.d
    arg3 = zmm0

int128_t zmm11 = *(arg4 + 4)
uint128_t zmm12 = *(arg4 + 8)
zmm1.d = arg3.d f* arg3.d
zmm0.d = zmm1.d f* 2.3889859e-08f
uint128_t zmm3
zmm3.d = 2.75255616e-06f f- zmm0.d
zmm0.d = zmm1.d f* 2.60516146e-07f
zmm3.d = zmm3.d f* zmm1.d
int128_t zmm13
zmm13.d = 2.47604949e-05f f- zmm0.d
zmm3.d = zmm3.d f- 0.000198408743f
zmm13.d = zmm13.d f* zmm1.d
zmm13.d = zmm13.d f- 0.00138883782f
zmm3.d = zmm3.d f* zmm1.d
zmm3.d = zmm3.d f+ 0.00833333097f
zmm13.d = zmm13.d f* zmm1.d
zmm13.d = zmm13.d f+ 0.0416666381f
zmm3.d = zmm3.d f* zmm1.d
zmm3.d = zmm3.d f- 0.166666672f
zmm13.d = zmm13.d f* zmm1.d
zmm3.d = zmm3.d f* zmm1.d
zmm13.d = zmm13.d f- 0.5f
zmm3.d = zmm3.d f+ 1f
zmm13.d = zmm13.d f* zmm1.d
zmm3.d = zmm3.d f* arg3.d
zmm13.d = zmm13.d f+ 1f
arg3 = *arg4
uint128_t zmm7
zmm7.d = zmm12.d f* arg3.d
uint128_t zmm9
zmm9.d = arg3.d f* zmm3.d
int128_t zmm10
zmm10.d = zmm11.d f* zmm3.d
float zmm4 = zmm12.d f* zmm3.d
zmm3 = arg3
arg3.d = arg3.d f* arg3.d
zmm3.d = zmm3.d f* zmm11.d
zmm13.d = zmm13.d f* zmm5
zmm5 = arg1[1]
int128_t zmm14
zmm14.d = 1f f- zmm13.d
arg3.d = arg3.d f* zmm14.d
zmm3.d = zmm3.d f* zmm14.d
arg3.d = arg3.d f+ zmm13.d
zmm7.d = zmm7.d f* zmm14.d
zmm0 = zmm3
zmm3.d = zmm3.d f+ zmm4
zmm0.d = zmm0.d f- zmm4
zmm1 = zmm7
zmm7.d = zmm7.d f- zmm10.d
arg3.d = arg3.d f* *arg1
zmm1.d = zmm1.d f+ zmm10.d
zmm3.d = zmm3.d f* *arg1
zmm7.d = zmm7.d f* *arg1
zmm1.d = zmm1.d f* arg1[2]
zmm0.d = zmm0.d f* zmm5
arg3.d = arg3.d f+ zmm0.d
arg3.d = arg3.d f+ zmm1.d
*arg2 = arg3.d
arg3.d = zmm12.d f* zmm11.d
zmm11.d = zmm11.d f* zmm11.d
arg3.d = arg3.d f* zmm14.d
zmm11.d = zmm11.d f* zmm14.d
zmm0 = arg3
zmm12.d = zmm12.d f* zmm12.d
zmm11.d = zmm11.d f+ zmm13.d
arg3.d = arg3.d f+ zmm9.d
zmm0.d = zmm0.d f- zmm9.d
zmm12.d = zmm12.d f* zmm14.d
zmm11.d = zmm11.d f* zmm5
arg3.d = arg3.d f* zmm5
zmm12.d = zmm12.d f+ zmm13.d
zmm0.d = zmm0.d f* arg1[2]
zmm11.d = zmm11.d f+ zmm3.d
arg3.d = arg3.d f+ zmm7.d
zmm11.d = zmm11.d f+ zmm0.d
arg2[1] = zmm11.d
zmm12.d = zmm12.d f* arg1[2]
arg3.d = arg3.d f+ zmm12.d
arg2[2] = arg3.d
return arg2
