// 函数: sub_141f4b550
// 地址: 0x141f4b550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_2 = ((sx.q(*(arg1 + 0x490)) + 0x45) << 4) + arg1
uint128_t zmm1

if (arg1 + 0xa08 != rax_2)
    zmm1 = *(arg1 + 0xa08)
    *(arg1 + 0xa08) = *rax_2
    *rax_2 = zmm1

if (arg1 + 0xa28 != arg1 + 0x6e0)
    zmm1 = *(arg1 + 0xa28)
    *(arg1 + 0xa28) = *(arg1 + 0x6e0)
    *(arg1 + 0x6e0) = zmm1

if (arg1 + 0xa18 != arg1 + 0x678)
    zmm1 = *(arg1 + 0xa18)
    *(arg1 + 0xa18) = *(arg1 + 0x678)
    *(arg1 + 0x678) = zmm1

if (arg1 + 0xa38 != arg1 + 0x6d0)
    zmm1 = *(arg1 + 0xa38)
    *(arg1 + 0xa38) = *(arg1 + 0x6d0)
    *(arg1 + 0x6d0) = zmm1

int128_t zmm2
int128_t zmm3

if (arg1 + 0xa58 != arg1 + 0x6a0)
    zmm2 = *(arg1 + 0xa58)
    zmm3 = *(arg1 + 0xa68)
    *(arg1 + 0xa58) = *(arg1 + 0x6a0)
    *(arg1 + 0xa68) = *(arg1 + 0x6b0)
    *(arg1 + 0x6a0) = zmm2
    *(arg1 + 0x6b0) = zmm3

uint64_t result = arg1 + 0x6f0

if (arg1 + 0xa78 != result)
    zmm2 = *(arg1 + 0xa78)
    zmm3 = *(arg1 + 0xa88)
    *(arg1 + 0xa78) = *result
    *(arg1 + 0xa88) = *(result + 0x10)
    *result = zmm2
    *(result + 0x10) = zmm3

if (arg1 + 0xa48 != arg1 + 0x688)
    zmm1 = zx.o(*(arg1 + 0xa48))
    int32_t rcx = *(arg1 + 0xa50)
    *(arg1 + 0xa48) = *(arg1 + 0x688)
    result = zx.q(*(arg1 + 0x690))
    *(arg1 + 0xa50) = result.d
    *(arg1 + 0x688) = zmm1.q
    *(arg1 + 0x690) = rcx

return result
