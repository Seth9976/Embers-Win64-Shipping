// 函数: sub_141137eb0
// 地址: 0x141137eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int32_t* rax = sub_1405ba560(arg1 + 8, &arg_8, arg2)
int64_t rdx_1 = sx.q(arg_8)

if (rdx_1.d != 0xffffffff)
    uint128_t zmm0 = *((rdx_1 << 5) + *(arg1 + 8) + 8)
    sub_1405c3390(arg1 + 8, rdx_1.d)
    int32_t r8_3 = 0
    int32_t r10_1 = zmm0.d
    uint128_t temp0_1 = _mm_bsrli_si128(zmm0, 0xc)
    int32_t rax_2 = _mm_bsrli_si128(zmm0, 8).d
    arg_8 = r10_1
    int32_t rsi_2 = temp0_1.d * rax_2
    int64_t rax_3 = sx.q(*(arg1 + 0x60))
    int32_t arg_c = rsi_2
    
    if (rax_3.d s> 0)
        int32_t* r9_1 = *(arg1 + 0x58)
        int64_t rax_4 = 0
        
        do
            int32_t rdx_2 = r9_1[rax_4 * 2]
            
            if (rdx_2 == rsi_2 + r10_1)
                int64_t rcx_4 = sx.q(r8_3) << 3
                r9_1[sx.q(r8_3) * 2] = r10_1
                int64_t rax_8 = *(arg1 + 0x58)
                *(rax_8 + rcx_4 + 4) += rsi_2
                return rax_8
            
            if (rdx_2 + r9_1[rax_4 * 2 + 1] == r10_1)
                int64_t rax_6 = sx.q(r8_3)
                r9_1[rax_6 * 2 + 1] += rsi_2
                return rax_6
            
            r8_3 += 1
            rax_4 += 1
        while (rax_4 s< rax_3)
    
    int64_t rdi_2 = sx.q(*(arg1 + 0x60))
    int32_t rax_5 = (rdi_2 + 1).d
    *(arg1 + 0x60) = rax_5
    
    if (rax_5 s> *(arg1 + 0x64))
        sub_1405a4d70(arg1 + 0x58)
    
    rax = arg_8.q
    *(*(arg1 + 0x58) + (rdi_2 << 3)) = rax

return rax
