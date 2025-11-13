// 函数: sub_1424fe240
// 地址: 0x1424fe240
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
float zmm11[0x4] = *(rdi + 4)
float zmm7[0x4] = *(rdi + 8)
float zmm10[0x4] = *rdi
uint128_t zmm1 = zx.o(*rcx_2)
uint128_t zmm5 = *(rdi + 0xc)
int32_t rax_6 = *(rcx_2 + 8)
uint128_t zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm7[0] = zmm7[0] f* zmm8.d
zmm11[0] = zmm11[0] f* rax_6
zmm10[0] = zmm10[0] f* zmm8.d
zmm11[0] = zmm11[0] - zmm7[0]
int64_t zmm2 = zmm1.d
zmm7[0] = zmm7[0] f* zmm2.d
zmm10[0] = zmm10[0] f* rax_6
zmm11[0] = zmm11[0] + zmm11[0]
zmm7[0] = zmm7[0] - zmm10[0]
zmm11[0] = zmm11[0] f* zmm2.d
zmm1.d = zmm5.d f* zmm11[0]
zmm10[0] = zmm10[0] - zmm11[0]
zmm7[0] = zmm7[0] + zmm7[0]
zmm1.d = zmm1.d f+ zmm2.d
zmm2.d = zmm11[0].q.d f* zmm7[0]
zmm10[0] = zmm10[0] + zmm10[0]
zmm11[0] = zmm11[0] * zmm11[0]
float zmm3 = zmm5.d * zmm7[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm10[0] = zmm10[0] * zmm11[0]
zmm7[0] = zmm7[0] * zmm10[0]
zmm10[0] = zmm10[0] - zmm7[0]
zmm5.d = zmm5.d f* zmm10[0]
zmm10[0] = zmm10[0] * zmm10[0]
zmm7[0] = zmm7[0] - zmm11[0]
zmm10[0] = zmm10[0] f+ zmm1.d
zmm5.d = zmm5.d f+ rax_6
zmm2.d = zmm2.d f- zmm10[0]
zmm7[0] = zmm7[0] f+ zmm5.d
zmm2.d = zmm2.d f+ zmm3 f+ zmm8.d
float result = zmm7[0]
*arg3 = (_mm_unpacklo_ps(zmm10, zmm2)).q
arg3[1].d = result
return result
