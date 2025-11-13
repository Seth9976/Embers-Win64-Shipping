// 函数: sub_142876640
// 地址: 0x142876640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t r14 = 1

if (sub_142870050(arg1) != 0)
    void* rdi_1 = *(arg1 + 0xb0)
    int64_t rax_1 = sub_14286ff00(arg1)
    
    if (*(rdi_1 + 0x130) u>= rax_1
            && (*(arg1 + 0xa0) != 0 || arg2 != 0x16 || *(arg1 + 0x98) == *(rdi_1 + 0x140) + 0xc))
        int64_t* rcx_1
        bool c_1
        
        if (*(arg1 + 0x478) != 0)
            rcx_1 = *(arg1 + 0x460)
            
            if (rcx_1 != 0)
                c_1 = test_bit(sub_142890eb0(sub_140687ad0(rcx_1)), 0x15)
        
        int64_t r15_1
        
        if (*(arg1 + 0x478) == 0 || (rcx_1 != 0 && c_1))
            r15_1 = 0
        else
            r15_1 = sx.q(sub_1428916c0(sub_142891580(*(arg1 + 0x478))))
        
        int64_t* rcx_5 = *(arg1 + 0x460)
        int32_t rax_10
        
        if (rcx_5 != 0)
            rax_10 = sub_142890eb0(sub_140687ad0(rcx_5)) & 0xf0007
        
        int64_t r12_1
        
        if (rcx_5 == 0 || rax_10 != 2)
            r12_1 = 0
        else
            r12_1 = sx.q(sub_142890e90(*(arg1 + 0x460)) * 2)
        
        int64_t rsi_1 = 0
        arg1[0xa] = 1
        
        if (*(arg1 + 0x98) u<= 0)
            return 0
        
        while (true)
            if (arg2 == 0x16)
                int64_t rax_13 = *(arg1 + 0xa0)
                
                if (rax_13 != 0)
                    if (rsi_1 == 0)
                        rsi_1 = *(*(arg1 + 0xb0) + 0x150)
                    else
                        if (rax_13 u<= 0xc)
                            return -1
                        
                        *(arg1 + 0x98) += 0xc
                        *(arg1 + 0xa0) = rax_13 - 0xc
            
            int32_t rax_16 = sub_142899cf0(*(arg1 + 0x18), 0xd, 0, 0)
            void* r8_1 = *(arg1 + 0xb0)
            int64_t rcx_11 = sx.q(rax_16 + 0xd) + r12_1 + r15_1
            int64_t rax_18 = *(r8_1 + 0x130)
            void* rdx_1 = rax_18 - rcx_11
            
            if (rax_18 u<= rcx_11)
                rdx_1 = nullptr
            
            int32_t result
            
            if (rdx_1 u> 0xc)
            label_14287681e:
                
                if (zx.q(arg1[0x26]) u<= rdx_1)
                    rdx_1 = *(arg1 + 0x98)
                
                void* rdi_2 = *(arg1 + 0x5f0)
                
                if (rdx_1 u<= rdi_2)
                    rdi_2 = rdx_1
                
                if (arg2 == 0x16)
                    if (rdi_2 u< 0xc)
                        return -1
                    
                    *(r8_1 + 0x150) = rsi_1
                    *(r8_1 + 0x158) = rdi_2 - 0xc
                    char* rdx_4 = *(*(arg1 + 0x88) + 8) + *(arg1 + 0xa0)
                    char* rcx_16 = *(arg1 + 0xb0) + 0x138
                    *rdx_4 = *rcx_16
                    rdx_4[1] = rcx_16[0xa]
                    rdx_4[2] = rcx_16[9]
                    rdx_4[3] = rcx_16[8]
                    rdx_4[4] = rcx_16[0x11]
                    rdx_4[5] = rcx_16[0x10]
                    rdx_4[6] = rcx_16[0x1a]
                    rdx_4[7] = rcx_16[0x19]
                    rdx_4[8] = rcx_16[0x18]
                    rdx_4[9] = rcx_16[0x22]
                    rdx_4[0xa] = rcx_16[0x21]
                    rdx_4[0xb] = rcx_16[0x20]
                
                int64_t arg_18
                
                if (sub_14286f530(arg1, arg2, *(*(arg1 + 0x88) + 8) + *(arg1 + 0xa0), rdi_2, 
                        &arg_18) s< 0)
                    if (r14 == 0)
                        return -1
                    
                    if (sub_142899cf0(sub_14284fce0(arg1), 0x2b, 0, 0) s<= 0)
                        return -1
                    
                    if (test_bit(sub_14284fc20(arg1), 0xc))
                        return -1
                    
                    if (sub_142870050(arg1) == 0)
                        return -1
                    
                    r14 = 0
                    goto label_142876a74
                
                int64_t rcx_22 = arg_18
                
                if (rdi_2 != rcx_22)
                    return -1
                
                if (arg2 == 0x16)
                    void* r8_4 = *(arg1 + 0xb0)
                    
                    if (*(r8_4 + 0x200) == 0)
                        char* rdx_7 = *(*(arg1 + 0x88) + 8) + *(arg1 + 0xa0)
                        int64_t r8_5
                        
                        if (rsi_1 != 0 || *arg1 == 0x100)
                            rdx_7 = &rdx_7[0xc]
                            r8_5 = rcx_22 - 0xc
                        else
                            *rdx_7 = *(r8_4 + 0x138)
                            rdx_7[1] = *(r8_4 + 0x142)
                            rdx_7[2] = *(r8_4 + 0x141)
                            rdx_7[3] = *(r8_4 + 0x140)
                            rdx_7[4] = *(r8_4 + 0x149)
                            rdx_7[5] = *(r8_4 + 0x148)
                            *(rdx_7 + 6) = 0
                            rdx_7[8] = 0
                            rdx_7[9] = *(r8_4 + 0x142)
                            rdx_7[0xa] = *(r8_4 + 0x141)
                            rdx_7[0xb] = *(r8_4 + 0x140)
                            r8_5 = arg_18
                        
                        if (sub_142882640(arg1, rdx_7, r8_5) == 0)
                            return -1
                        
                        rcx_22 = arg_18
                
                int64_t rdx_8 = *(arg1 + 0x98)
                
                if (rcx_22 == rdx_8)
                    int64_t r10_1 = *(arg1 + 0xb8)
                    
                    if (r10_1 != 0)
                        r10_1(1, zx.q(*arg1), zx.q(arg2), *(*(arg1 + 0x88) + 8), 
                            rdx_8 + *(arg1 + 0xa0), arg1, *(arg1 + 0xc0))
                    
                    *(arg1 + 0xa0) = 0
                    result = 1
                    *(arg1 + 0x98) = 0
                else
                    *(arg1 + 0xa0) += rcx_22
                    void* rax_52 = *(arg1 + 0xb0)
                    *(arg1 + 0x98) = rdx_8 - rcx_22
                    rsi_1 += rcx_22 - 0xc
                    arg_18 = rcx_22 - 0xc
                    *(rax_52 + 0x150) = rsi_1
                    *(rax_52 + 0x158) = 0
                label_142876a74:
                    
                    if (*(arg1 + 0x98) u<= 0)
                        return 0
                    
                    continue
            else
                result = sub_142899cf0(*(arg1 + 0x18), 0xb, 0, 0)
                
                if (result s> 0)
                    r8_1 = *(arg1 + 0xb0)
                    int64_t rcx_14 = r15_1 + 0xd + r12_1
                    int64_t rdx_2 = *(r8_1 + 0x130)
                    
                    if (rdx_2 u<= rcx_14 + 0xc)
                        return -1
                    
                    rdx_1 = rdx_2 - rcx_14
                    goto label_14287681e
                
                arg1[0xa] = 2
            
            return result

return -1
