// 函数: sub_140883690
// 地址: 0x140883690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*(arg1 + 0x38) != *(arg2 + 0x38) || *(arg1 + 0x40) != *(arg2 + 0x40) || arg1[0x12] != arg2[0x12]
    || arg1[4] != arg2[4])
labelid_5:
    result.b = 0
else if (((arg2[3] ^ arg1[3]) | (arg2[2] ^ arg1[2]) | (arg2[1] ^ arg1[1]) | (*arg2 ^ *arg1)) != 0
    || arg1[0x1a].b != arg2[0x1a].b || arg1[0x19] != arg2[0x19] || arg1[0x18] != arg2[0x18])
labelid_5:
    result.b = 0
else
    result = zx.q(arg2[0xc])
    
    if (arg1[0xc] != result.d)
    label_14088391b:
        result.b = 0
    else
        int32_t r9_1 = arg1[0x16]
        
        if (r9_1 != arg2[0x16])
        label_14088391b_1:
            result.b = 0
        else
            int32_t rbp_1 = 0
            int32_t arg_8 = 0
            
            if (result.d s<= 0)
            label_140883899:
                
                if (r9_1 s> 0)
                    do
                        void* rdx_7 = *(arg2 + 0x50)
                        
                        if ((arg2[0x14].b & 1) != 0)
                            rdx_7 = (rdx_7 s>> 1) + &arg2[0x14]
                        
                        void* r8_3 = *(arg1 + 0x50)
                        
                        if ((arg1[0x14].b & 1) != 0)
                            r8_3 = (r8_3 s>> 1) + &arg1[0x14]
                        
                        int64_t rcx_15 = sx.q(rbp_1) * 5
                        
                        if (*(r8_3 + (rcx_15 << 2)) != *(rdx_7 + (rcx_15 << 2)))
                            goto label_14088391b_2
                        
                        if (*(r8_3 + (rcx_15 << 2) + 8) != *(rdx_7 + (rcx_15 << 2) + 8))
                            goto label_14088391b_2
                        
                        if (*(r8_3 + (rcx_15 << 2) + 0x10) != *(rdx_7 + (rcx_15 << 2) + 0x10))
                            goto label_14088391b_2
                        
                        rbp_1 += 1
                    while (rbp_1 s< r9_1)
                
                result.b = 1
            else
                void* rcx_5 = &arg2[0xa]
                int64_t r12_1 = 0
                void* rdx = &arg1[0xa]
                
                while (true)
                    void* rax_6 = *rcx_5
                    
                    if ((rax_6.b & 1) != 0)
                        rax_6 = (rax_6 s>> 1) + rcx_5
                    
                    void* rbx_1 = *(rax_6 + r12_1)
                    void* rcx_6 = rax_6 + r12_1
                    
                    if ((rbx_1.b & 1) != 0)
                        rbx_1 = (rbx_1 s>> 1) + rcx_6
                    
                    int32_t rax_7 = *(rcx_6 + 8)
                    int16_t* rdi_1 = nullptr
                    int16_t* var_38 = nullptr
                    int32_t rsi_1 = 0
                    int32_t var_30_1 = 0
                    int32_t r15_1 = rax_7 - 1
                    int32_t rax_8 = 0
                    
                    if (rax_7 == 0)
                        r15_1 = 0
                    
                    int32_t var_2c_1 = 0
                    
                    if (rbx_1 != 0 && *rbx_1 != 0 && r15_1 s> 0)
                        if (r15_1 + 1 s> 0)
                            sub_1405947f0(&var_38, r15_1 + 1)
                            rax_8 = var_2c_1
                            rsi_1 = var_30_1
                            rdi_1 = var_38
                        
                        rsi_1 = rsi_1 + 1 + r15_1
                        
                        if (rsi_1 s> rax_8)
                            sub_140594770(&var_38)
                            rdi_1 = var_38
                        
                        UnDecorator::getReferenceType(rdi_1, rbx_1, r15_1 * 2)
                        rdx = &arg1[0xa]
                        rdi_1[sx.q(rsi_1) - 1] = 0
                    
                    void* rax_11 = *rdx
                    
                    if ((rax_11.b & 1) != 0)
                        rax_11 = (rax_11 s>> 1) + rdx
                    
                    void* rdx_4 = rax_11 + r12_1
                    int16_t* rax_12 = &data_142d40450
                    
                    if (rsi_1 != 0)
                        rax_12 = rdi_1
                    
                    void* rcx_10
                    
                    if (*(rdx_4 + 8) == 0)
                        rcx_10 = &data_142d40450
                    else
                        rcx_10 = *rdx_4
                        
                        if ((rcx_10.b & 1) != 0)
                            rcx_10 = (rcx_10 s>> 1) + rdx_4
                    
                    if (sub_140a54510(rcx_10, rax_12).d != 0)
                        if (rdi_1 != 0)
                            sub_140a74f90(rdi_1)
                        
                        break
                    
                    if (rdi_1 != 0)
                        sub_140a74f90(rdi_1)
                    
                    rdx = &arg1[0xa]
                    r12_1 += 0x10
                    bool cond:2_1 = arg_8 + 1 s< arg2[0xc]
                    arg_8 += 1
                    rcx_5 = &arg2[0xa]
                    
                    if (not(cond:2_1))
                        r9_1 = arg1[0x16]
                        goto label_140883899
                
            label_14088391b_2:
                result.b = 0

return result
