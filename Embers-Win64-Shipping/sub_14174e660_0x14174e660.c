// 函数: sub_14174e660
// 地址: 0x14174e660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t r10 = *(arg3 + 4)

if (r10 != 0xffffffff)
    uint64_t rdx_3 = sx.q(*(arg1 + 0x78))
    int64_t rax_9 = *(arg1 + 0x70)
    int64_t rcx_7 = rdx_3 * 0x58
    uint128_t zmm2 = *(rcx_7 + rax_9 - 0x40)
    int32_t zmm0 = (*(rcx_7 + rax_9 - 0x30)).d
    int64_t rcx_8 = _mm_bsrli_si128(zmm2, 8).q
    int64_t rax_10
    
    if (rcx_8 != 0)
        rax_10 = arg2[1]
    
    bool cond:0
    
    if (rcx_8 == 0 || rax_10 == 0)
        cond:0 = zmm2.q == *arg2
    else
        cond:0 = rcx_8 == rax_10
    
    rax_10.b = cond:0
    
    if (rax_10.b == 0)
        *(*(arg1 + 0x80) + sx.q(zmm0) * 0x24 + 4) = r10
        r10 = *(arg3 + 4)
        rdx_3 = zx.q(*(arg1 + 0x78))
    
    int32_t rcx_12 = rdx_3.d - r10 - 1
    
    if (rcx_12 s>= 1)
        rcx_12 = 1
    
    if (rcx_12 != 0)
        memcpy(sx.q(r10) * 0x58 + *(arg1 + 0x70), sx.q(rdx_3.d - rcx_12) * 0x58 + *(arg1 + 0x70), 
            rcx_12 * 0x58)
        rdx_3 = zx.q(*(arg1 + 0x78))
    
    *(arg1 + 0x78) = (rdx_3 - 1).d
    return sub_14083ac10(arg1 + 0x70) __tailcall

for (int32_t i = *(arg3 + 8); i s<= *(arg3 + 0x14); i += 1)
    for (int32_t j = *(arg3 + 0xc); j s<= *(arg3 + 0x18); j += 1)
        for (int32_t k = *(arg3 + 0x10); k s<= *(arg3 + 0x1c); k += 1)
            int32_t r9_1 = 0
            int64_t* rsi_3 =
                (sx.q((i * *(arg1 + 0x54) + j) * *(arg1 + 0x58) + k) << 4) + *(arg1 + 0x60)
            void** result_1 = *rsi_3
            uint64_t r10_1 = sx.q(rsi_3[1].d)
            result = result_1
            void* r8_1 = r10_1 * 0x58 + result_1
            
            if (result_1 != r8_1)
                do
                    int64_t rdx = result[4]
                    int64_t rcx
                    
                    if (rdx != 0)
                        rcx = arg2[1]
                    
                    bool cond:1_1
                    
                    if (rdx == 0 || rcx == 0)
                        cond:1_1 = result[3] == *arg2
                    else
                        cond:1_1 = rdx == rcx
                    
                    rcx.b = cond:1_1
                    
                    if (rcx.b != 0)
                        int32_t rcx_3 = r10_1.d - r9_1 - 1
                        
                        if (rcx_3 s>= r10 + 2)
                            rcx_3 = r10 + 2
                        
                        if (rcx_3 != 0)
                            memcpy(sx.q(r9_1) * 0x58 + result_1, 
                                sx.q(r10_1.d - rcx_3) * 0x58 + result_1, rcx_3 * 0x58)
                            r10_1 = zx.q(rsi_3[1].d)
                        
                        rsi_3[1].d = (r10_1 - 1).d
                        result = sub_14083ac10(rsi_3)
                        break
                    
                    r9_1 += 1
                    result = &result[0xb]
                while (result != r8_1)

return result
