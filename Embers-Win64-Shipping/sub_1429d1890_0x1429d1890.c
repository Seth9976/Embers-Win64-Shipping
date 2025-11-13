// 函数: sub_1429d1890
// 地址: 0x1429d1890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int32_t i_1 = 0
int64_t r10 = *(rax + 0x30)
int32_t i_3 = ((*(rax + 0x38) - r10) s>> 2).d

if (i_3 s> 0)
    void* r8_1 = nullptr
    uint64_t i_2 = zx.q(i_3)
    uint64_t i
    
    do
        int64_t rdx_1 = sx.q(*(r8_1 + r10))
        r8_1 += 4
        *(r8_1 + arg1[3] - 4) = *(arg1[0xc] + (rdx_1 << 2))
        i = i_2
        i_2 -= 1
    while (i != 1)

void* result = *arg1

if (*(result + 8) s> 0)
    int16_t* rsi_1 = nullptr
    int64_t r14_1 = 0
    
    do
        if (*(rsi_1 + arg1[9]) u> 1)
            void* r8_2 = *arg1
            int32_t* rdx_2 = *(r8_2 + 0x108)
            int32_t j_2 = *(rdx_2 + r14_1)
            int32_t* rax_5 = *(r8_2 + 0x120) + (sx.q(*(rdx_2 + r14_1 + 4)) << 2)
            int16_t* r9_1 = arg1[0xf] + (sx.q(*(*(r8_2 + 0x108) + r14_1 + 4)) << 1)
            
            if (j_2 s> 0)
                void* rbp_2 = *(r8_2 + 0x138) + (sx.q(*(rdx_2 + r14_1 + 4)) << 1) - r9_1
                uint64_t j_1 = zx.q(j_2)
                uint64_t j
                
                do
                    int16_t r10_1 = *r9_1
                    
                    if (r10_1 != 0)
                        int32_t* r8_6 = arg1[3] + (sx.q(
                            *(*(*arg1 + 0x18) + (sx.q(((zx.q(*rax_5) << 1) + 1).d) << 2))
                            + zx.d(*(r9_1 + rbp_2))) << 2)
                        *r8_6 += zx.d(r10_1)
                    
                    rax_5 = &rax_5[1]
                    r9_1 = &r9_1[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
        
        result = *arg1
        i_1 += 1
        rsi_1 = &rsi_1[1]
        r14_1 += 8
    while (i_1 s< *(result + 8))

return result
