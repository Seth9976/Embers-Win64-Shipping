// 函数: sub_14296dba0
// 地址: 0x14296dba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
uint128_t zmm0
int32_t zmm2[0x4]

if ((arg1 u> &arg3[0xf] || arg1 + 0x3c u< arg3) && (arg1 u> &(*arg2)[0xf] || arg1 + 0x3c u< arg2))
    zmm2 = arg2[1]
    int32_t temp0_1[0x4] = _mm_sub_epi32(*arg2, *arg3)
    zmm0 = *(arg3 + 0x10)
    *arg1 = temp0_1
    int32_t zmm1[0x4] = arg2[2]
    int32_t temp0_2[0x4] = _mm_sub_epi32(zmm2, zmm0)
    zmm0 = *(arg3 + 0x20)
    *(arg1 + 0x10) = temp0_2
    zmm2 = arg2[3]
    int32_t temp0_3[0x4] = _mm_sub_epi32(zmm1, zmm0)
    zmm0 = *(arg3 + 0x30)
    *(arg1 + 0x20) = temp0_3
    *(arg1 + 0x30) = _mm_sub_epi32(zmm2, zmm0)
else
    int32_t* rdx = arg2 - arg3
    int32_t* r10_2 = arg1 - arg3
    int64_t i_2 = 0x10
    int64_t i
    
    do
        *(r10_2 + arg3) = *(rdx + arg3) - *arg3
        arg3 = &arg3[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

zmm2 = data_14353e020
int32_t i_1 = 0
int128_t zmm3 = data_14353e010
void* rcx_1 = arg1
int32_t zmm4[0x4] = data_142e11d00
int32_t zmm5[0x4] = data_142fc95f0

do
    int32_t rax_4 = i_1 + 4
    rcx_1 += 0x20
    zmm0 = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i_1), 0), zmm4)
    i_1 += 8
    zmm0 = _mm_cmpeq_epi32(zmm0, zmm5)
    int32_t temp0_8[0x4] = _mm_add_epi32((zmm0 & not.o(zmm2)) | (zmm0 & zmm3), *(rcx_1 - 0x20))
    zmm0 = _mm_cmpeq_epi32(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_4), 0), zmm4), zmm5)
    *(rcx_1 - 0x20) = temp0_8
    *(rcx_1 - 0x10) = _mm_add_epi32((zmm0 & not.o(zmm2)) | (zmm0 & zmm3), *(rcx_1 - 0x10))
while (i_1 u< 0x10)

return sub_14293f960(arg1) __tailcall
