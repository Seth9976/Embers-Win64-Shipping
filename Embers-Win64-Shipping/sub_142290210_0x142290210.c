// 函数: sub_142290210
// 地址: 0x142290210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg2
uint128_t zmm4 = *(arg2 + 8)
uint128_t zmm1
zmm1.d = zmm5.d f+ arg1[0x18].d
int128_t zmm3 = *(arg2 + 4)
uint128_t zmm0
zmm0.d = zmm4.d f+ arg1[0x19].d
int64_t zmm2
zmm2.d = zmm3.q.d f+ *(arg1 + 0xc4)
int128_t zmm6
zmm6.d = zmm3.d f+ *(arg1 + 0xfc)
int32_t var_a0 = zmm0.d
zmm5[0] = zmm5[0] f+ arg1[0x1f].d
uint64_t var_8c = *(arg1 + 0xcc)
int32_t var_80 = arg1[0x1b].d.d
zmm0.d = zmm4.d f+ arg1[0x20].d
int32_t var_90 = var_a0
int32_t rax_1 = *(arg1 + 0xd4)
int32_t var_a0_1 = zmm0.d
_mm_unpacklo_ps(zmm1, zmm2)
int32_t var_84 = rax_1
zmm5[0] = zmm5[0] f+ arg1[0x16].d
zmm0 = *(arg1 + 0x80)
zmm3.d = zmm3.d f+ *(arg1 + 0xb4)
zmm4.d = zmm4.d f+ arg1[0x17].d
zmm2 = *(arg1 + 0xbc)
float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
uint128_t var_78 = zmm0
zmm0 = *(arg1 + 0x90)
temp0_1[0] = zmm3.d
uint128_t var_68 = zmm0
zmm0 = *(arg1 + 0xa0)
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_2[0] = zmm4.d
*(arg1 + 0x80) = var_78
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
*(arg1 + 0x90) = var_68
temp0_3[0] = zmm2.d
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
*(arg1 + 0xa0) = zmm0
*(arg1 + 0xb0) = temp0_4
uint128_t zmm0_1
int64_t zmm6_1
uint128_t zmm7_1
int64_t zmm8_1
zmm0_1, zmm6_1, zmm7_1, zmm8_1 = sub_14062b8d0(arg1 + 0x80)
zmm0_1.d f- 0f
void* rcx
rcx.b = zmm0_1.d f< 0f
rcx.b |= *(arg1 + 0x35) & 0xfe
zmm0_1.q = zmm8_1
*(arg1 + 0xc0) = zmm0_1
*(arg1 + 0x35) = rcx.b
arg1[0x1a] = var_8c
arg1[0x1b].d = var_80
arg1[0x1f] = (_mm_unpacklo_ps(zmm7_1, zmm6_1)).q
arg1[0x20].d = var_a0_1
void* rax_5 = arg1[0x22]

if (rax_5 != 0)
    *(rax_5 + 0xa0) |= 1

sub_1422af6f0(arg1)
jump(*(*arg1 + 0xc0))
