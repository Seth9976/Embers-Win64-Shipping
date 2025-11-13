// 函数: sub_1427c3d20
// 地址: 0x1427c3d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint128_t zmm0 = zx.o(*(arg1 + 0x4c))
int32_t rax_2 = *(arg1 + 0x54)
*(arg1 + 0x40) = arg2[0]
*(arg1 + 0x48) = arg2[0]
uint128_t zmm3
zmm3.d = arg2.d f- *(arg1 + 0x44)
uint64_t var_e8 = zmm0.q
zmm3.d = zmm3.d f* 0.5f
zmm0.d = zmm3.d f* 0.159154937f

if (zmm3.d f< 0f)
    zmm0.d = zmm0.d f- 0.5f
else
    zmm0.d = zmm0.d f+ 0.5f

zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d f* 6.28318548f
zmm3.d = zmm3.d f- zmm0.d
uint128_t zmm5

if (not(zmm3.d f<= 1.57079637f))
    zmm5 = 0xbf800000
    zmm0.d = 3.14159274f f- zmm3.d
    zmm3 = zmm0
else if (zmm3.d f>= -1.57079637f)
    zmm5 = 0x3f800000
else
    zmm5 = 0xbf800000
    zmm0.d = -3.14159274f f- zmm3.d
    zmm3 = zmm0

uint128_t zmm9 = *(arg1 + 0x78)
arg2 = 0x3638b88e
uint128_t zmm2
zmm2.d = zmm3.d f* zmm3.d
zmm0.d = zmm2.d f* 2.3889859e-08f
arg2[0] = 2.75255616e-06f f- zmm0.d
zmm0.d = zmm2.d f* 2.60516146e-07f
int128_t zmm14
zmm14.d = 2.47604949e-05f f- zmm0.d
arg2[0] = arg2[0] f* zmm2.d
arg2[0] = arg2[0] - 0.000198408743f
zmm14.d = zmm14.d f* zmm2.d
zmm14.d = zmm14.d f- 0.00138883782f
arg2[0] = arg2[0] f* zmm2.d
arg2[0] = arg2[0] + 0.00833333097f
zmm14.d = zmm14.d f* zmm2.d
zmm14.d = zmm14.d f+ 0.0416666381f
arg2[0] = arg2[0] f* zmm2.d
arg2[0] = arg2[0] - 0.166666672f
zmm14.d = zmm14.d f* zmm2.d
arg2[0] = arg2[0] f* zmm2.d
zmm14.d = zmm14.d f- 0.5f
arg2[0] = arg2[0] + 1f
zmm14.d = zmm14.d f* zmm2.d
zmm2.d = zmm9.d f- *(arg1 + 0x58)
arg2[0] = arg2[0] f* zmm3.d
zmm14.d = zmm14.d f+ 1f
uint128_t zmm6
zmm6.d = _mm_shuffle_ps(zmm9, zmm9, 0x55).d f- *(arg1 + 0x5c)
uint128_t zmm10
zmm10.d = var_e8.d.d f* arg2[0]
int128_t zmm13
zmm13.d = rax_2.d f* arg2[0]
int128_t zmm12
zmm12.d = var_e8:4.d.d f* arg2[0]
zmm3.d = zmm6.d f* zmm10.d
zmm0.d = zmm6.d f* zmm13.d
zmm14.d = zmm14.d f* zmm5.d
uint128_t var_d8 = zmm10
uint128_t zmm15
zmm15.d = zmm2.d f* zmm13.d
zmm9.d = _mm_shuffle_ps(zmm9, zmm9, 0xaa).d f- *(arg1 + 0x60)
zmm5.d = zmm9.d f* zmm12.d
zmm5.d = zmm5.d f- zmm0.d
zmm0.d = zmm9.d f* zmm10.d
zmm15.d = zmm15.d f- zmm0.d
zmm0.d = zmm2.d f* zmm12.d
zmm5.d = zmm5.d f+ zmm5.d
zmm3.d = zmm3.d f- zmm0.d
zmm15.d = zmm15.d f+ zmm15.d
arg2 = zmm5
arg2[0] = arg2[0] f* zmm14.d
zmm10.d = zmm5.d f* zmm13.d
arg2[0] = arg2[0] f+ zmm2.d
zmm0.d = zmm15.d f* zmm13.d
zmm3.d = zmm3.d f+ zmm3.d
uint128_t zmm11
zmm11.d = zmm3.d f* zmm12.d
zmm11.d = zmm11.d f- zmm0.d
zmm0.d = zmm3.d f* var_d8.d
zmm11.d = zmm11.d f+ arg2[0]
arg2 = zmm15
zmm10.d = zmm10.d f- zmm0.d
arg2[0] = arg2[0] f* zmm14.d
zmm11.d = zmm11.d f+ *(arg1 + 0x58)
arg2[0] = arg2[0] f+ zmm6.d
zmm10.d = zmm10.d f+ arg2[0]
zmm10.d = zmm10.d f+ *(arg1 + 0x5c)
zmm2 = *(arg1 + 0x68)
zmm15.d = zmm15.d f* var_d8.d
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
_mm_shuffle_ps(var_d8, var_d8, 0xe1)
zmm6.d = zmm12.d
float temp0_5[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
_mm_shuffle_ps(zmm6, zmm6, 0xc6)
zmm6.d = zmm13.d
zmm3.d = zmm3.d f* zmm14.d
_mm_shuffle_ps(zmm6, zmm6, 0x27)
zmm6.d = zmm14.d
zmm5.d = zmm5.d f* zmm12.d
zmm3.d = zmm3.d f+ zmm9.d
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x39)
zmm15.d = zmm15.d f- zmm5.d
float temp0_10[0x4] = _mm_mul_ps(temp0_3, _mm_shuffle_ps(zmm6, zmm6, 0))
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), zmm2)
zmm15.d = zmm15.d f+ zmm3.d
float temp0_13[0x4] = __mulps_xmmps_memps(temp0_10, data_143f89070)
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
float temp0_15[0x4] = _mm_add_ps(temp0_13, zmm0)
zmm15.d = zmm15.d f+ *(arg1 + 0x60)
float temp0_17[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(zmm6, zmm6, 0x55))
zmm0 = *(arg1 + 0x88)
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
float temp0_19[0x4] = __mulps_xmmps_memps(temp0_17, data_143f89060)
zmm2 = _mm_mul_ps(zmm2, zmm6)
uint128_t var_a8 = zmm0
float temp0_21[0x4] = _mm_add_ps(temp0_15, temp0_19)
zmm3 = _mm_unpacklo_ps(zmm11, zmm15.q)
float temp0_24[0x4] = _mm_add_ps(temp0_21, __mulps_xmmps_memps(zmm2, data_143f89050))
uint128_t var_b8 = _mm_unpacklo_ps(zmm3, _mm_unpacklo_ps(zmm10, 0).q)
float var_c8[0x4] = temp0_24
int64_t* rcx

if (*(arg1 + 0x30) == 0)
    rcx = nullptr
else
    rcx = *(arg1 + 0x38)

(*(*rcx + 0x18))(rcx, &var_c8)
void* const rdx_1 = arg1

if (arg1 == 0x28)
    rdx_1 = nullptr

int64_t result = sub_1427c31b0(arg1 + 8, rdx_1, *(arg1 + 0x44))
__security_check_cookie(rax_1 ^ &var_108)
return result
