// 函数: sub_1423b6ec0
// 地址: 0x1423b6ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0xffff0000)
    *arg3 = *arg1
    arg3[1].q = arg1[1].q
    int32_t rax = *(arg1 + 0x18)
    *(arg3 + 0x18) = rax
    return rax

if (0f f>= *(arg1 + 0x18))
    *arg3 = data_143dbb1f8.q
    *(arg3 + 8) = data_143dbb200
    *(arg3 + 0xc) = data_143dbb1f8.q
    int32_t rax_19 = data_143dbb200
    *(arg3 + 0x14) = rax_19
    *(arg3 + 0x18) = 0
    return rax_19

float zmm4[0x4] = arg1[1].d
float zmm2[0x4] = *(arg1 + 0xc)
float zmm3 = *arg1 - zmm2[0]
float temp0[0x4] = _mm_max_ss(zmm2[0], 0x38d1b717)
float zmm6[0x4] = zx.o(0)
int128_t zmm8
zmm8.d = (*(arg1 + 4)).d f- zmm4[0]
float zmm9[0x4] = *(arg1 + 0x14)
float temp0_1[0x4] = _mm_max_ss(zmm4[0], 0x38d1b717)
temp0[0] = temp0[0] * 0.0645161271f
temp0_1[0] = temp0_1[0] * 0.0645161271f
int128_t zmm11
zmm11.d = (*(arg1 + 8)).d f- zmm9[0]
float temp0_2[0x4] = _mm_max_ss(zmm9[0], 0x38d1b717)
int128_t zmm12
zmm12.d = float.s(zx.q(arg2) & 0x1f)
temp0_2[0] = temp0_2[0] * 0.0317460336f
int128_t zmm10
zmm10.d = float.s(zx.q(arg2 u>> 5) & 0x1f)
zmm12.d = zmm12.d f* temp0[0]
int128_t zmm7
zmm7.d = float.s(zx.q(arg2 u>> 0xa) & 0x3f)
zmm10.d = zmm10.d f* temp0_1[0]
zmm12.d = zmm12.d f+ zmm3
zmm6[0] = float.s(zx.q(arg2 u>> 0x10) & 0x1f)
zmm7.d = zmm7.d f* temp0_2[0]
zmm10.d = zmm10.d f+ zmm8.d
zmm6[0] = zmm6[0] * temp0[0]
int64_t zmm5
zmm5.d = float.s(zx.q(arg2 u>> 0x15) & 0x1f)
zmm7.d = zmm7.d f+ zmm11.d
zmm6[0] = zmm6[0] + zmm3
zmm5.d = zmm5.d f* temp0_1[0]
zmm4 = zx.o(0)
zmm4[0] = float.s(zx.q(arg2 u>> 0x1a))
zmm5.d = zmm5.d f+ zmm8.d
zmm6[0] = zmm6[0] f+ zmm12.d
zmm4[0] = zmm4[0] * temp0_2[0]
zmm6[0] = zmm6[0] f- zmm12.d
zmm4[0] = zmm4[0] f+ zmm11.d
zmm6[0] = zmm6[0] * 0.5f
int64_t zmm1
zmm1.d = zmm5.d f+ zmm10.d
zmm6[0] = zmm6[0] * 0.5f
zmm4[0] = zmm4[0] f+ zmm7.d
zmm1.d = zmm1.d f* 0.5f
zmm4[0] = zmm4[0] * 0.5f
float var_80 = zmm4[0]
*arg3 = (_mm_unpacklo_ps(zmm6, zmm1)).q
*(arg3 + 8) = var_80
zmm5.d = zmm5.d f- zmm10.d
zmm4[0] = zmm4[0] f- zmm7.d
zmm5.d = zmm5.d f* 0.5f
zmm4[0] = zmm4[0] * 0.5f
*(arg3 + 0xc) = (_mm_unpacklo_ps(zmm6, zmm5)).q
float var_80_1 = zmm4[0]
*(arg3 + 0x14) = var_80_1
float zmm0[0x4] = arg3[1].d
zmm2 = *(arg3 + 0xc)
zmm1 = *(arg3 + 0x14)
zmm0[0] = zmm0[0] * zmm0[0]
zmm2[0] = zmm2[0] * zmm2[0]
zmm1.d = zmm1.d f* zmm1.d
zmm2[0] = zmm2[0] + zmm0[0]
zmm2[0] = zmm2[0] f+ zmm1.d
*(arg3 + 0x18) = _mm_sqrt_ss(0, zmm2[0])[0]
return var_80_1
