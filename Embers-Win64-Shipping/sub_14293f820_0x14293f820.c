// 函数: sub_14293f820
// 地址: 0x14293f820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = _mm_shuffle_epi32(zx.o(arg3), 0)

if (arg2 u<= arg1 + 0x3c && &arg2[0xf] u>= arg1)
    void* r9 = arg1 - arg2
    int64_t i_3 = 0x10
    int32_t rax_3
    int64_t i
    
    do
        int32_t rcx_1 = *(arg2 + r9)
        arg2 = &arg2[1]
        rax_3 = (rcx_1 ^ arg2[-1]) & arg3
        *(arg2 + r9 - 4) = rcx_1 ^ rax_3
        arg2[-1] ^= rax_3
        i = i_3
        i_3 -= 1
    while (i != 1)
    return rax_3

void* r9_1 = arg1 - arg2
int64_t i_2 = 4
int64_t i_1

do
    int128_t zmm1 = *(r9_1 + arg2)
    int128_t zmm2 = *arg2
    arg2 = &arg2[4]
    int128_t zmm3 = (zmm1 ^ zmm2) & zmm4
    *(r9_1 + arg2 - 0x10) = zmm3 ^ zmm1
    *(arg2 - 0x10) = zmm3 ^ zmm2
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return i_2
