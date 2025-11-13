// 函数: sub_141f3c750
// 地址: 0x141f3c750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg1 + 0x180)
float zmm5[0x4] = *(arg1 + 0x30)
int128_t zmm2 = *(arg1 + 0xb4)
zmm0[0] = zmm0[0] * 0.5f
float zmm1[0x4] = 0x3f800000
int96_t var_18 = zmm5[0].12
zmm0[0] = zmm0[0] f* *(arg1 + 0x184)
float zmm3[0x4] = var_18:8.d
zmm1[0] = 1f / zmm0[0]
zmm0 = *(arg1 + 0xb8)
zmm3[0] = zmm3[0] * zmm1[0]
zmm5[0] = zmm5[0] * zmm1[0]
int64_t zmm4
zmm4.d = var_18:4.d.d f* zmm1[0]
*arg2 = (_mm_unpacklo_ps(*(arg1 + 0xb0), zmm2.q)).q
var_18:8.d = zmm0[0]
arg2[1].d = var_18:8.d
*(arg2 + 0xc) = *(arg1 + 0x174)
*(arg2 + 0x1c) = 0
arg2[2] = (_mm_unpacklo_ps(zmm5, zmm4)).q
var_18:8.d = zmm3[0]
arg2[3].d = var_18:8.d
zmm0 = *(arg1 + 0x60) ^ 0x80000000
arg2[4] = (_mm_unpacklo_ps(*(arg1 + 0x40) ^ 0x80000000, (*(arg1 + 0x50) ^ 0x80000000).q)).q
var_18:8.d = zmm0[0]
arg2[5].d = var_18:8.d
zmm1 = *(arg1 + 0x48)
zmm0 = *(arg1 + 0x68)
zmm2 = *(arg1 + 0x58)
arg2[8].d = 0xc0000000
*(arg2 + 0x44) = 0x3f800000
arg2[6] = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
var_18:8.d = zmm0[0]
arg2[7].d = var_18:8.d
*(arg2 + 0x2c) = *(arg1 + 0xe4)
zmm0 = *(arg1 + 0x180)
zmm0[0] = zmm0[0] * 0.5f
arg2[9].d = 0
*(arg2 + 0x3c) = zmm0[0]
zmm1 = *(arg1 + 0x184)
zmm1[0] = zmm1[0] * 0.5f
*(arg2 + 0x4c) = zmm1[0]
void* rax_6 = *(arg1 + 0x198)
void* rax_7

if (rax_6 == 0)
    rax_7 = data_143f10dc8
else
    rax_7 = *(rax_6 + 0x78)

arg2[0xb] = *(rax_7 + 0x10)
zmm0 = *(arg1 + 0x188)
zmm0[0] = zmm0[0] * 0.0174532924f
arg2[0xa].d = cosf(zmm0[0])
int32_t result = *(arg1 + 0x18c)
*(arg2 + 0x54) = result
return result
