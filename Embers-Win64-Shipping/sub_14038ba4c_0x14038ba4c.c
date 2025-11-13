// 函数: sub_14038ba4c
// 地址: 0x14038ba4c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1
uint128_t* rdi = arg2
int64_t i_1 = sx.q(arg4)
int64_t result = sx.q(arg3)
int64_t i

do
    uint128_t zmm1 = zx.o(*rsi)
    uint128_t zmm3 = _mm_unpacklo_epi8(zx.o(rsi[1]), 0)
    *rdi = _mm_unpacklo_epi8(zmm1, 0)
    rdi[1] = zmm3
    rsi += result
    rdi += sx.q(arg5)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
