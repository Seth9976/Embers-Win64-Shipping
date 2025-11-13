// 函数: sub_140b60a50
// 地址: 0x140b60a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i = 0
*arg1 = arg2
arg1[1].d = arg3
int32_t i_2 = 0

if (arg3 s> 0 && arg3 u>= 8)
    uint128_t zmm3 = zx.o(0)
    uint128_t zmm2 = zx.o(0)
    int32_t rcx_1 = arg3 & 0x80000007
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffff8) + 1
    
    do
        uint128_t zmm0 = zx.o(0)
        i_2 += 8
        zmm3 |= _mm_unpacklo_epi16(zx.o(*(arg2 + (i << 1))), zmm0.q)
        uint128_t zmm1 = _mm_unpacklo_epi16(zx.o(*(arg2 + (i << 1) + 8)), zmm0.q)
        i += 8
        zmm2 |= zmm1
    while (i s< sx.q(arg3 - rcx_1))
    
    zmm2 |= zmm3
    zmm2 |= _mm_bsrli_si128(zmm2, 8)
    i = zx.q((zmm2 | _mm_bsrli_si128(zmm2, 4)).d)

int64_t i_1 = sx.q(i_2)

while (i_1 s< sx.q(arg3))
    uint32_t rcx_5 = zx.d(*(arg2 + (i_1 << 1)))
    i_1 += 1
    i = zx.q(i.d) | zx.q(rcx_5)

i_1.b = (i.d & 0xffffff80) != 0
*(arg1 + 0xc) = i_1.b
return arg1
