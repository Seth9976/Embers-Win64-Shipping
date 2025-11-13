// 函数: sub_1411038f0
// 地址: 0x1411038f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("RenderPrePass")

if (*(*(arg1 + 8) + 0xf68) == 4)
    int32_t i = 0
    
    if (*(arg1 + 0xa8) s> 0)
        int64_t r12_1 = 0
        
        do
            int64_t* rsi_2 = *(arg1 + 0xa0) + r12_1
            int32_t rax_2
            
            if (sub_1422eb5d0(rsi_2) != 0)
                void* rax_3 = *(arg1 + 0xa0)
                rax_2 = *(rax_3 + 0xad8) | *(rax_3 + 0x5d18)
            else
                rax_2 = rsi_2[0x15b].d
            
            int32_t rbx_1 = *(arg2 + 0x8c)
            
            if (rbx_1 != rax_2)
                *(arg2 + 0x8c) = rax_2
                
                if (*(arg2 + 0x14) u> 0)
                    void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_5 = &rdx_2[3]
                    
                    if (rax_5 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_5 = &rdx_2[3]
                    
                    *(arg2 + 0x30) = rax_5
                    int64_t* rax_6 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_6 = rdx_2
                    int32_t rax_7 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_2[1]
                    rdx_2[1] = 0
                    *rdx_2 = &data_142f11588
                    rdx_2[2].d = rax_7
                else
                    *(arg2 + 0x90) = rax_2
            
            if ((*(rsi_2 + 0x497c) & 2) != 0)
            label_141103b3c:
                
                if (*(arg2 + 0x8c) != rbx_1)
                    *(arg2 + 0x8c) = rbx_1
                    
                    if (*(arg2 + 0x14) u> 0)
                        void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_15 = &rcx_15[3]
                        
                        if (rax_15 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_15 = &rcx_15[3]
                        
                        *(arg2 + 0x30) = rax_15
                        int64_t* rax_16 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_16 = rcx_15
                        int32_t rax_17 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rcx_15[1]
                        rcx_15[1] = 0
                        *rcx_15 = &data_142f11588
                        rcx_15[2].d = rax_17
                    else
                        *(arg2 + 0x90) = rbx_1
            else
                if (*(rsi_2 + 0xd7a) == 0)
                    if (*(rsi_2 + 0xd7c) == 0)
                        goto label_141103a85
                    
                label_141103a54:
                    
                    if (sub_142391c90(zx.q(rsi_2[0x15a].d)) != 0)
                        goto label_141103b3c
                    
                    void* rax_10 = *rsi_2
                    
                    if (rax_10 == 0 || *(rax_10 + 8) s<= 1)
                        goto label_141103b3c
                    
                    goto label_141103a85
                
                if (sub_142391c90(zx.q(rsi_2[0x15a].d)) != 0)
                    if (*(rsi_2 + 0xd7c) == 0)
                        goto label_141103b3c
                    
                    goto label_141103a54
                
            label_141103a85:
                
                if (sub_141405870(*(arg1 + 8) + 0x20, rsi_2, 1) != 0)
                    sub_1412e5370(arg1, arg2, rsi_2)
                
                sub_141108550(arg2, rsi_2, arg1, 0)
                sub_141267530(&rsi_2[0x4e8], nullptr, arg2)
                
                if (*(arg2 + 0x8c) != rbx_1)
                    *(arg2 + 0x8c) = rbx_1
                    
                    if (*(arg2 + 0x14) u> 0)
                        void*** rdx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_12 = &rdx_10[3]
                        
                        if (rax_12 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_12 = &rdx_10[3]
                        
                        *(arg2 + 0x30) = rax_12
                        int64_t* rax_13 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_13 = rdx_10
                        int32_t rax_14 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_10[1]
                        rdx_10[1] = 0
                        *rdx_10 = &data_142f11588
                        rdx_10[2].d = rax_14
                    else
                        *(arg2 + 0x90) = rbx_1
            
            i += 1
            r12_1 += 0x5240
        while (i s< *(arg1 + 0xa8))

return sub_140b37f60("RenderPrePass") __tailcall
