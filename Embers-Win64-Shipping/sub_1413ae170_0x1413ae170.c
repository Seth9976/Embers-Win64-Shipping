// 函数: sub_1413ae170
// 地址: 0x1413ae170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
uint64_t result = arg1

if (arg3[1].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void*** (* rdx)() = arg2 + 0xe68
        void* r10_1 = *(rsi_1 + *arg3)
        void*** (* rax_1)() = *(arg2 + 0xe78)
        int32_t rcx = *(r10_1 + 0x110)
        
        if (rax_1 != 0)
            rdx = rax_1
        
        int32_t rax_2 = rcx
        
        if (rcx s< 0)
            rax_2 = rcx + 0x1f
        
        int32_t* rdx_1 = rdx + (sx.q(rax_2 s>> 5) << 2)
        int32_t rax_5 = 1 << (rcx.b & 0x1f)
        int32_t rcx_2 = *rdx_1
        
        if (arg4 != 0)
            *rdx_1 = not.d(rax_5) & rcx_2
            
            if ((*(r10_1 + 0x120) & 1) != 0)
                if (*(arg2 + 0xe90) != *(arg2 + 0xebc))
                    void*** (* r15_1)() = arg2 + 0xec0
                    int64_t rbp_2 = sx.q(*(arg2 + 0xed0)) - 1
                    uint32_t r8_1 = (r10_1 u>> 4).d
                    int32_t rdx_3 = (0x9e3779b9 - r8_1) ^ r8_1 << 8
                    int32_t rcx_5 = neg.d(rdx_3 + r8_1) ^ rdx_3 u>> 0xd
                    int32_t r8_4 = (r8_1 - rdx_3 - rcx_5) ^ rcx_5 u>> 0xc
                    int32_t rdx_6 = (rdx_3 - r8_4 - rcx_5) ^ r8_4 << 0x10
                    int32_t rcx_8 = (rcx_5 - rdx_6 - r8_4) ^ rdx_6 u>> 5
                    int32_t r8_7 = (r8_4 - rdx_6 - rcx_8) ^ rcx_8 u>> 3
                    int32_t rdx_9 = (rdx_6 - r8_7 - rcx_8) ^ r8_7 << 0xa
                    void*** (* rax_24)() = *(arg2 + 0xec8)
                    
                    if (rax_24 != 0)
                        r15_1 = rax_24
                    
                    int32_t j = *(r15_1
                        + (((sx.q(rcx_8 - rdx_9 - r8_7) ^ zx.q(rdx_9) u>> 0xf) & rbp_2) << 2))
                    
                    if (j != 0xffffffff)
                        void* r9 = *(arg2 + 0xe88)
                        
                        do
                            int64_t j_1 = sx.q(j)
                            int64_t rax_28 = j_1 * 2
                            
                            if (*(r9 + (rax_28 << 3)) == r10_1)
                                int64_t r8_8 = j_1 * 2
                                int64_t rax_30 = sx.q(*(r9 + (r8_8 << 3) + 0xc)) & rbp_2
                                void* rcx_14 = r15_1 + (rax_30 << 2)
                                
                                for (int32_t k = *(r15_1 + (rax_30 << 2)); k != 0xffffffff; 
                                        k = *rcx_14)
                                    if (k == j)
                                        *rcx_14 = *(r9 + (r8_8 << 3) + 8)
                                        break
                                    
                                    rcx_14 = r9 + 8 + (sx.q(k) << 4)
                                
                                void* r11_2 = arg2 + 0xe98
                                int32_t r9_1 = rol.d(1, j.b)
                                
                                if (*(arg2 + 0xebc) != 0)
                                    *(*(arg2 + 0xe88) + sx.q(*(arg2 + 0xeb8)) * 0x10) = j
                                
                                int64_t rcx_19 = *(arg2 + 0xe88)
                                *(rcx_19 + (r8_8 << 3)) = 0xffffffff
                                int32_t rax_35
                                
                                if (*(arg2 + 0xebc) s<= 0)
                                    rax_35 = -1
                                else
                                    rax_35 = *(arg2 + 0xeb8)
                                
                                *(rcx_19 + (r8_8 << 3) + 4) = rax_35
                                *(arg2 + 0xebc) += 1
                                *(arg2 + 0xeb8) = j
                                void* rax_36 = *(r11_2 + 0x10)
                                
                                if (rax_36 != 0)
                                    r11_2 = rax_36
                                
                                if (j s< 0)
                                    j += 0x1f
                                
                                int64_t rax_37 = sx.q(j s>> 5)
                                *(r11_2 + (rax_37 << 2)) &= not.d(r9_1)
                                break
                            
                            j = *(r9 + (rax_28 << 3) + 8)
                        while (j != 0xffffffff)
                
                *(r10_1 + 0x120) &= 0xfe
        else
            *rdx_1 = rax_5 | rcx_2
        
        sub_1413a3930(r10_1)
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg3[1].d)
    
    result = arg1

if (arg4 == 0)
    return result

return sub_141396540(result, arg2, arg3)
