// 函数: sub_1424fe900
// 地址: 0x1424fe900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

void* rax_2 = *(arg2 + 0x38)
void* rdi = &var_88
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rdi = rax_2

void var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_98, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

void* rax_4 = *(arg2 + 0x38)
void* rcx_2 = &var_98

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_5 != 0
*(arg2 + 0x20) = rsi + rax_5
float zmm12[0x4] = *(rdi + 4) ^ 0x80000000
uint128_t zmm1 = zx.o(*rcx_2)
float zmm8[0x4] = *(rdi + 8) ^ 0x80000000
uint128_t zmm5 = *(rdi + 0xc)
float zmm13[0x4] = *rdi ^ 0x80000000
int32_t rax_6 = *(rcx_2 + 8)
uint128_t zmm7 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm8[0] = zmm8[0] f* zmm7.d
zmm12[0] = zmm12[0] f* rax_6
zmm13[0] = zmm13[0] f* zmm7.d
zmm12[0] = zmm12[0] - zmm8[0]
int64_t zmm2 = zmm1.d
zmm8[0] = zmm8[0] f* zmm2.d
zmm13[0] = zmm13[0] f* rax_6
zmm12[0] = zmm12[0] + zmm12[0]
zmm8[0] = zmm8[0] - zmm13[0]
zmm12[0] = zmm12[0] f* zmm2.d
zmm1.d = zmm5.d f* zmm12[0]
zmm13[0] = zmm13[0] - zmm12[0]
zmm8[0] = zmm8[0] + zmm8[0]
zmm1.d = zmm1.d f+ zmm2.d
zmm2.d = zmm12[0].q.d f* zmm8[0]
zmm13[0] = zmm13[0] + zmm13[0]
zmm12[0] = zmm12[0] * zmm12[0]
float zmm3 = zmm5.d * zmm8[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm13[0] = zmm13[0] * zmm12[0]
zmm5.d = zmm5.d f* zmm13[0]
zmm13[0] = zmm13[0] - zmm8[0]
zmm8[0] = zmm8[0] * zmm13[0]
zmm5.d = zmm5.d f+ rax_6
zmm13[0] = zmm13[0] * zmm13[0]
zmm13[0] = zmm13[0] f+ zmm1.d
zmm8[0] = zmm8[0] - zmm12[0]
zmm2.d = zmm2.d f- zmm13[0]
zmm8[0] = zmm8[0] f+ zmm5.d
zmm2.d = zmm2.d f+ zmm3 f+ zmm7.d
float result = zmm8[0]
*arg3 = (_mm_unpacklo_ps(zmm13, zmm2)).q
arg3[1].d = result
return result
