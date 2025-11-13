// 函数: sub_142365b00
// 地址: 0x142365b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*(arg1 + 0x50))
int64_t rsi = 0
float result[0x4] = zx.o(0)
int64_t r9 = 0
float zmm0[0x4]

if (r8 s>= 4)
    void* rax_2 = *(arg1 + 0x48) + 0xc
    int64_t i_2 = ((r8 - 4) u>> 2) + 1
    r9 = i_2 << 2
    int64_t i
    
    do
        int32_t zmm1 = *(rax_2 + 0xc)
        float temp0_1[0x4] = _mm_max_ss((*(rax_2 - 8))[0], result[0])
        result = *(rax_2 + 0x34)
        rax_2 += 0x50
        int32_t temp0_3 = _mm_max_ss(zmm1, __maxss_xmmss_memss(temp0_1[0], *(rax_2 - 0x50))[0])
        zmm0 = *(rax_2 - 0x30)
        int32_t temp0_4 = __maxss_xmmss_memss(temp0_3, *(rax_2 - 0x3c))
        float temp0_6[0x4] = __maxss_xmmss_memss(_mm_max_ss(zmm0[0], temp0_4)[0], *(rax_2 - 0x28))
        result = __maxss_xmmss_memss(_mm_max_ss(result[0], temp0_6[0])[0], *(rax_2 - 0x14))
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r9 s< r8)
    int64_t i_3 = r8 - r9
    void* rdx_5 = *(arg1 + 0x48) + ((r9 * 5 + 3) << 2)
    int64_t i_1
    
    do
        zmm0 = *(rdx_5 - 8)
        rdx_5 += 0x14
        result = __maxss_xmmss_memss(_mm_max_ss(zmm0[0], result[0])[0], *(rdx_5 - 0x14))
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

int64_t* rdi = *(arg1 + 0x28)
uint64_t r14_1 = sx.q(*(arg1 + 0x30)) << 3 u>> 3

if (rdi u> &rdi[sx.q(*(arg1 + 0x30))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            zmm0 = sub_140cd85e0(rbx_1)
            (*(*rbx_1 + 0x268))(rbx_1)
            result = _mm_max_ss(zmm0[0], result[0])
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

return result
