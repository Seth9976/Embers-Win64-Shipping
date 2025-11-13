// 函数: sub_142437b30
// 地址: 0x142437b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2c) == 0)
    *arg4 = *(arg1 + 0x18)
    *(arg3 + 0xc) = *(arg1 + 0xc)
    arg3[5] = *(arg1 + 0x14)
    *arg3 = *(arg1 + 0x1c)
    arg3[1] = arg1[2].d
    arg3[2] = *(arg1 + 0x24)
    int32_t rax_5
    rax_5.b = 1
    return rax_5

float zmm3[0x4] = *arg1
uint128_t zmm4 = *(arg1 + 4)
uint128_t zmm5 = *arg2
int64_t zmm1
zmm1.d = zmm3[0].q.d f- zmm5.d
int128_t zmm6 = *(arg2 + 4)
uint128_t zmm2
zmm2.d = zmm4.d f- zmm6.d
int128_t zmm7 = *(arg2 + 8)
uint128_t zmm0
zmm0.d = (*(arg1 + 8)).d f- zmm7.d
zmm1.d = zmm1.d f* zmm1.d
zmm2.d = zmm2.d f* zmm2.d
zmm0.d = zmm0.d f* zmm0.d
zmm2.d = zmm2.d f+ zmm1.d
zmm2.d = zmm2.d f+ zmm0.d
zmm0 = *(arg1 + 0x28)
float temp0[0x4] = _mm_sqrt_ss(0, zmm2.d)
int32_t rax

if (temp0[0] f> zmm0.d)
    zmm0 = data_142d3f660
    *arg4 = 0
    rax.b = 0
    *arg3 = zmm0
    *(arg3 + 0x10) = (_mm_unpacklo_ps(zx.o(0), (zx.o(0)).q)).q
else
    zmm7.d = zmm7.d f- *(arg1 + 8)
    zmm5.d = zmm5.d f- zmm3[0]
    zmm6.d = zmm6.d f- zmm4.d
    zmm3 = 0x3f800000
    zmm2.d = 1f f/ zmm0.d
    zmm4.d = 1f / temp0[0]
    zmm1.d = zmm2.q.d f* zmm6.d
    zmm0.d = zmm2.d f* zmm5.d
    zmm1.d = zmm1.d f* zmm1.d
    zmm0.d = zmm0.d f* zmm0.d
    zmm2.d = zmm2.d f* zmm7.d
    zmm1.d = zmm1.d f+ zmm0.d
    zmm5.d = zmm5.d f* zmm4.d
    zmm6.d = zmm6.d f* zmm4.d
    zmm2.d = zmm2.d f* zmm2.d
    zmm7.d = zmm7.d f* zmm4.d
    zmm1.d = zmm1.d f+ zmm2.d
    zmm3[0] = 1f f- zmm1.d
    float temp0_1[0x4] = _mm_max_ss(zmm3[0], 0)
    *(arg3 + 0xc) = (_mm_unpacklo_ps(zmm5, zmm6.q)).q
    arg3[5] = zmm7.d
    rax.b = 1
    zmm1 = temp0_1[0].q
    zmm0.d = temp0_1.d f* *(arg1 + 0x1c)
    *arg3 = zmm0.d
    zmm1.d = zmm1.d f* arg1[2].d
    arg3[1] = zmm1.d
    temp0_1[0] = temp0_1[0] f* *(arg1 + 0x24)
    arg3[2] = temp0_1[0]
    zmm0 = *(arg1 + 0x28)
    zmm1.d = zmm0.q.d f- temp0[0]
    zmm1.d = zmm1.d f/ zmm0.d
    zmm1.d = zmm1.d f* *(arg1 + 0x18)
    *arg4 = zmm1.d

return rax
