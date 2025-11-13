// 函数: sub_1429d6770
// 地址: 0x1429d6770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *(arg1 + 8)
int32_t i = 0

if (*rdi s<= 0)
    return 

int64_t r15_1 = 0

do
    char* rsi_2 = *(arg1 + 0x198) + r15_1
    int64_t r11_1 = *(arg1 + 0x78) + (sx.q(*(*(arg1 + 0x58) + (r15_1 << 3) + 4)) << 2)
    int64_t r14_1 = *(arg1 + 0x90) + (sx.q(*(*(arg1 + 0x68) + (r15_1 << 3) + 4)) << 2)
    int64_t rax_4 = *(rdi + 0x18)
    int32_t r9_1 = *(rax_4 + (r15_1 << 3))
    int64_t r10_1 = *(rdi + 0x30) + (sx.q(*(rax_4 + (r15_1 << 3) + 4)) << 2)
    
    if ((*rsi_2 & 1) == 0)
        int32_t r8_1 = 0
        int32_t rdi_5 = 0
        int64_t rdx_8 = 0
        
        if (r9_1 s> 0)
            do
                if ((*(sx.q(*(r10_1 + (rdx_8 << 2))) + *(arg1 + 0x1c8)) & 1) != 0)
                    int32_t rax_17 = rdi_5 - 1
                    
                    if (rdx_8 == 0)
                        rax_17 = r9_1 - 1
                    
                    *(r11_1 + (rdx_8 << 2)) = 1
                    r8_1 = 1
                    *(r14_1 + (rdx_8 << 2)) = 1
                    *(r14_1 + (sx.q(rax_17) << 2)) = 1
                
                rdi_5 += 1
                rdx_8 += 1
            while (rdi_5 s< r9_1)
            
            if (r8_1 != 0)
                *(*(arg1 + 0xa8) + (r15_1 << 2)) = 1
                void* rdx_9 = *(arg1 + 8)
                int64_t rax_19 = *(rdx_9 + 0x18)
                void* r8_2 = *(rdx_9 + 0x48) + (sx.q(*(rax_19 + (r15_1 << 3) + 4)) << 2)
                uint64_t j_5 = zx.q(*(rax_19 + (r15_1 << 3)))
                
                if (j_5.d == 4)
                    int64_t rdx_10 = *(arg1 + 0x1b0)
                    j_5.b = *rsi_2 & 0xe1
                    *rsi_2 = (((*(sx.q(*(r8_2 + 0xc)) + rdx_10) & 2) * 2)
                        | (*(sx.q(*(r8_2 + 8)) + rdx_10) & 6)) << 2 | ((((*(sx.q(*(r8_2 + 4)) + rdx_10)
                        & 0xfe) * 2) | *(sx.q(*r8_2) + rdx_10)) & 0x1e) | j_5.b
                else if (j_5.d != 3)
                    *rsi_2 &= 0xe1
                    
                    if (j_5.d s> 0)
                        uint64_t j_4 = j_5
                        uint64_t j
                        
                        do
                            char rdi_8 = *rsi_2
                            int64_t rcx_17 = sx.q(*r8_2)
                            r8_2 += 4
                            *rsi_2 =
                                (((*(rcx_17 + *(arg1 + 0x1b0)) | rdi_8) ^ rdi_8) & 0x1e) ^ rdi_8
                            j = j_4
                            j_4 -= 1
                        while (j != 1)
                else
                    int64_t rcx_15 = *(arg1 + 0x1b0)
                    j_5.b = *rsi_2 & 0xe1
                    *rsi_2 = ((((*(sx.q(*(r8_2 + 4)) + rcx_15) & 0xfe) * 2)
                        | *(sx.q(*r8_2) + rcx_15)) & 0x1e) | (*(sx.q(*(r8_2 + 8)) + rcx_15) & 6) << 2
                        | j_5.b
    else
        int32_t r10_2 = 0
        int64_t j_1 = 0
        
        if (r9_1 s> 0)
            if (r9_1 u>= 4)
                int64_t rcx_3 = sx.q(r9_1 - 1)
                
                if (r14_1 u> r11_1 + (rcx_3 << 2) || r14_1 + (rcx_3 << 2) u< r11_1)
                    int32_t rax_8 = r9_1 & 0x80000003
                    
                    if (rax_8 s< 0)
                        rax_8 = ((rax_8 - 1) | 0xfffffffc) + 1
                    
                    int32_t rcx_5 = r9_1 - rax_8
                    
                    do
                        r10_2 += 4
                        j_1 += 4
                    while (j_1 s< sx.q(rcx_5))
                    
                    int32_t temp1_1
                    int32_t temp2_1
                    temp1_1:temp2_1 = sx.q(rcx_5 + 3)
                    int64_t rdx_6 = sx.q((temp2_1 + (temp1_1 & 3)) s>> 2) << 4
                    int64_t rcx_8
                    int64_t rdi_2
                    rdi_2, rcx_8 = __memfill_u32(r11_1, 2, rdx_6 u>> 2)
                    int64_t rcx_10
                    int64_t rdi_4
                    rdi_4, rcx_10 = __memfill_u32(r14_1, 2, rdx_6 u>> 2)
            
            if (r10_2 s< r9_1)
                int32_t* rax_16 = r14_1 + (j_1 << 2)
                uint64_t j_3 = zx.q(r9_1 - r10_2)
                uint64_t j_2
                
                do
                    *(r11_1 - r14_1 + rax_16) = 2
                    *rax_16 = 2
                    rax_16 = &rax_16[1]
                    j_2 = j_3
                    j_3 -= 1
                while (j_2 != 1)
        
        *(*(arg1 + 0xa8) + (r15_1 << 2)) = 2
        *rsi_2 &= 0xe1
    
    rdi = *(arg1 + 8)
    i += 1
    r15_1 += 1
while (i s< *rdi)
