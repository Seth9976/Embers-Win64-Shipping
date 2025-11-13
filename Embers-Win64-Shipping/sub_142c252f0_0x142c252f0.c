// 函数: sub_142c252f0
// 地址: 0x142c252f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 2) != 0 && sub_142bf7510(arg2, arg1 + 2, 2) != 0)
    uint64_t result = zx.q(*(arg1 + 3))
    void* rdi_1 = arg1 + 4
    uint32_t rbp_1 = zx.d(*(arg1 + 2)) << 8
    int32_t rsi_2 = 0
    int32_t rbp_2 = rbp_1 + result.d
    
    if (rbp_1 == neg.d(result.d))
    label_142c25421:
        result.b = 1
    else
        while (true)
            if (sub_142bf7510(arg2, rdi_1, 6).b != 0)
                void* rdx_3 = nullptr
                void* rax_2 = *(arg2 + 0x28)
                
                if (rsi_2 u< rbp_2 - 1)
                    rdx_3 = rdi_1
                
                int64_t rcx_3 = *(rax_2 + 0x10)
                *(arg2 + 8) = rcx_3
                int64_t r8_2 = zx.q(*(rax_2 + 0x18)) + rcx_3
                *(arg2 + 0x10) = r8_2
                
                if (rdx_3 != 0)
                    if (rdx_3 u< rcx_3 || r8_2 u<= rdx_3)
                        *(arg2 + 0x10) = 0
                        *(arg2 + 8) = 0
                    else
                        *(arg2 + 8) = rdx_3
                        uint64_t rcx_6 = (zx.q(*(rdx_3 + 2)) << 8) + zx.q(*(rdx_3 + 3))
                        uint64_t rax_5 = r8_2 - rdx_3
                        
                        if (rax_5 u>= rcx_6)
                            rax_5 = rcx_6
                        
                        *(arg2 + 0x10) = rax_5 + rdx_3
                
                if (sub_142c24f10(rdi_1, arg2) == 0)
                    void* rax_11 = *(arg2 + 0x28)
                    int64_t rcx_11 = *(rax_11 + 0x10)
                    *(arg2 + 8) = rcx_11
                    *(arg2 + 0x10) = zx.q(*(rax_11 + 0x18)) + rcx_11
                else
                    rsi_2 += 1
                    void* rax_9 = *(arg2 + 0x28)
                    rdi_1 = rdi_1 + zx.q(*(rdi_1 + 3)) + (zx.q(*(rdi_1 + 2)) << 8)
                    int64_t rcx_10 = *(rax_9 + 0x10)
                    *(arg2 + 8) = rcx_10
                    *(arg2 + 0x10) = zx.q(*(rax_9 + 0x18)) + rcx_10
                    
                    if (rsi_2 u>= rbp_2)
                        goto label_142c25421
                    
                    continue
            
            result.b = 0
            break
    
    return result

return 0
