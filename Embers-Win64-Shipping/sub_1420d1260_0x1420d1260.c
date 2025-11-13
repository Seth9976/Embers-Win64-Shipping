// 函数: sub_1420d1260
// 地址: 0x1420d1260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = arg3
int128_t zmm7 = arg2[1].d
uint128_t zmm8 = *arg2
uint128_t zmm10 = *(arg2 + 4)
arg3.d = zmm8.d f* zmm8.d
uint128_t zmm0
zmm0.d = zmm10.d f* zmm10.d
arg3.d = arg3.d f+ zmm0.d
arg3.d = arg3.d f+ zmm7.d f* zmm7.d
uint64_t var_78
uint128_t zmm3
uint128_t zmm4

if (not(arg3.d f!= 1f))
    zmm0 = zx.o(*arg2)
    zmm7 = arg2[1].d
    var_78 = zmm0.q
    zmm8 = var_78.d
    zmm4 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
else if (arg3.d f>= 9.99999994e-09f)
    float temp0_2[0x4] = _mm_rsqrt_ss(arg3[0], arg3.d)
    zmm3.d = arg3.d f* 0.5f
    zmm0.d = temp0_2.d f* temp0_2[0]
    arg3.d = 0.5f - zmm3.d f* zmm0.d
    zmm0.d = temp0_2.d f* arg3.d
    temp0_2[0] = temp0_2[0] f+ zmm0.d
    zmm3.d = zmm3.d f* temp0_2[0] * temp0_2[0]
    zmm4.d = 0.5f f- zmm3.d
    zmm0.d = temp0_2.d f* zmm4.d
    temp0_2[0] = temp0_2[0] f+ zmm0.d
    zmm10.d = zmm10.d f* temp0_2[0]
    zmm8.d = zmm8.d f* temp0_2[0]
    zmm4 = zmm10
    zmm7.d = zmm7.d f* temp0_2[0]
else
    zmm8 = data_143dbb1f8
    zmm4 = data_143dbb1fc
    zmm7 = data_143dbb200

zmm6.d = zmm6.d f* 0.00872664619f
float zmm1 = zmm6.d * 0.159154937f

if (zmm6.d f< 0f)
    zmm1 = zmm1 - 0.5f
else
    zmm1 = zmm1 + 0.5f

zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm1))).d f* 6.28318548f
zmm6.d = zmm6.d f- zmm0.d
float zmm5[0x4]

if (not(zmm6.d f<= 1.57079637f))
    zmm5 = 0xbf800000
    zmm0.d = 3.14159274f f- zmm6.d
    zmm6 = zmm0
else if (zmm6.d f>= -1.57079637f)
    zmm5 = 0x3f800000
else
    zmm5 = 0xbf800000
    zmm0.d = -3.14159274f f- zmm6.d
    zmm6 = zmm0

zmm3.d = zmm6.d f* zmm6.d
zmm0.d = zmm3.d f* 2.3889859e-08f
arg3.d = 2.75255616e-06f f- zmm0.d
arg3.d = arg3.d f* zmm3.d
arg3.d = arg3.d f- 0.000198408743f
arg3.d = arg3.d f* zmm3.d
arg3.d = arg3.d f+ 0.00833333097f
arg3.d = arg3.d f* zmm3.d
arg3.d = arg3.d f- 0.166666672f
arg3.d = arg3.d f* zmm3.d
arg3.d = arg3.d f+ 1f
arg3.d = arg3.d f* zmm6.d
zmm7.d = zmm7.d f* arg3.d
zmm0.d = arg3.d f* zmm8.d
var_78.d = zmm0.d
zmm0.d = zmm3.d f* 2.60516146e-07f
var_78:4.d = arg3.d f* zmm4.d
int32_t var_70_2 = zmm7.d
float var_6c = ((
    (((2.47604949e-05f f- zmm0.d) f* zmm3.d - 0.00138883782f) f* zmm3.d + 0.0416666381f) f* zmm3.d
    - 0.5f) f* zmm3.d + 1f) * zmm5[0]
sub_140adf5d0(&var_78, arg1)
return arg1
