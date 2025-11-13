// 函数: sub_1417c3550
// 地址: 0x1417c3550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0
uint128_t zmm0 = zx.o(*(arg1 + 0x14))
int32_t zmm3 = *(arg1 + 0x10)
void* result = *arg2
uint128_t zmm4 = *(arg1 + 0x1c)
uint128_t zmm5 = zmm0.q.d
int64_t r10 = sx.q(*(result + 8))
uint128_t zmm2 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
uint64_t var_18

if (r10 s>= 4)
    zmm0.d = zmm5.d f* zmm3
    uint64_t zmm1
    zmm1.d = zmm2.q.d f* zmm3
    var_18.d = zmm0.d
    zmm0.d = zmm4.d f* zmm3
    var_18:4.d = zmm1.d
    int32_t var_10_1 = zmm0.d
    
    do
        int64_t rcx_1 = sx.q(*(**arg2 + (i << 3) + 4)) * 3
        int64_t rax_3 = *arg3
        *(rax_3 + (rcx_1 << 2)) = var_18
        *(rax_3 + (rcx_1 << 2) + 8) = var_10_1
        int64_t rcx_3 = sx.q(*(**arg2 + (i << 3) + 0xc)) * 3
        int64_t rax_6 = *arg3
        *(rax_6 + (rcx_3 << 2)) = var_18
        *(rax_6 + (rcx_3 << 2) + 8) = var_10_1
        int64_t rcx_5 = sx.q(*(**arg2 + (i << 3) + 0x14)) * 3
        int64_t rax_9 = *arg3
        *(rax_9 + (rcx_5 << 2)) = var_18
        *(rax_9 + (rcx_5 << 2) + 8) = var_10_1
        int64_t rax_11 = sx.q(*(**arg2 + (i << 3) + 0x1c))
        i += 4
        int64_t rcx_7 = rax_11 * 3
        result = *arg3
        *(result + (rcx_7 << 2)) = var_18
        *(result + (rcx_7 << 2) + 8) = var_10_1
    while (i s< r10 - 3)

if (i s< r10)
    zmm5.d = zmm5.d f* zmm3
    zmm2.d = zmm2.d f* zmm3
    zmm4.d = zmm4.d f* zmm3
    var_18.d = zmm5.d
    var_18:4.d = zmm2.d
    
    do
        int64_t rax_13 = sx.q(*(**arg2 + (i << 3) + 4))
        i += 1
        int64_t rcx_9 = rax_13 * 3
        result = *arg3
        *(result + (rcx_9 << 2)) = var_18
        *(result + (rcx_9 << 2) + 8) = zmm4.d
    while (i s< r10)

return result
