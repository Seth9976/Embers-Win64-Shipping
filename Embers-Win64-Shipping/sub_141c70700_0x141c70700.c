// 函数: sub_141c70700
// 地址: 0x141c70700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0
bool z

if (0 == *(arg1 + 0x330))
    *(arg1 + 0x330) = 0
    z = true
else
    result = zx.q(*(arg1 + 0x330))
    z = false

if (not(z))
    return result

int64_t i_1 = 8
void* rsi_1 = arg1 + 0x254
int64_t rdi_1 = 0
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(arg2))
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(arg3))
int64_t i

do
    void* rax = *(arg1 + 0x88)
    void* rcx = *(arg1 + 0x278)
    *rsi_1 = 0
    zmm6, zmm7 = sub_141c3ad50(rcx + rdi_1, _mm_cvtepi32_ps(zx.o(*(rax + 0xc))), zmm7.d, zmm6, 2, 1)
    rdi_1 += 0x28
    rsi_1 += 4
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t temp0_4 = *(arg1 + 0x330)
*(arg1 + 0x330) = 1
return zx.q(temp0_4)
