// 函数: sub_141bca720
// 地址: 0x141bca720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = *arg2

if (*(arg1 + 0x718) != 0)
    int64_t* rcx = *(arg1 + 0x710)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t i_1 = 0
        
        if (*(arg1 + 0x638) - *(arg1 + 0x664) == 1)
            void* r10_1 = arg1 + 0x640
            int32_t var_18_1 = 0xffffffff
            int32_t r11_1 = *(r10_1 + 0x18)
            int32_t r8_1 = 0
            int32_t r9_1 = 0
            int32_t var_14_1 = 0
            
            if (r11_1 != 0)
                void* rax_5 = *(r10_1 + 0x10)
                
                if (rax_5 != 0)
                    r10_1 = rax_5
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r11_1 - 1)
                int32_t rcx_1 = *r10_1
                int32_t var_14_3
                
                if (rcx_1 != 0)
                label_141bca7e5:
                    int32_t rax_12 = neg.d(rcx_1) & rcx_1
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
                    int32_t rax_13
                    
                    if (rax_12 == 0)
                        rax_13 = 0x20
                    else
                        rax_13 = 0x1f - temp0_2
                    
                    int32_t var_14_2 = r9_1 - rax_13 + 0x1f
                    
                    if (r9_1 - rax_13 + 0x1f s> r11_1)
                        var_14_3 = r11_1
                else
                    while (true)
                        int64_t rcx_2 = sx.q(r8_1)
                        r9_1 += 0x20
                        r8_1 += 1
                        
                        if (rcx_2.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rcx_1 = *(r10_1 + (rcx_2 << 2) + 4)
                        int32_t var_18_2 = 0xffffffff
                        
                        if (rcx_1 != 0)
                            goto label_141bca7e5
                    
                    var_14_3 = r11_1
            
            i_1 = **(arg1 + 0x630)
        
        int64_t rbp
        rbp.b = 1
        
        while (true)
            int64_t* rcx_4
            
            if (*(arg1 + 0x718) == 0)
                rcx_4 = nullptr
            else
                rcx_4 = *(arg1 + 0x710)
            
            if ((*(*rcx_4 + 0x48))(rcx_4, i) != 0)
                return i
            
            int64_t* r9_3 = *(arg1 + 0x6e0)
            int64_t* r8_2 = *r9_3
            int64_t r10_2 = sx.q(r9_3[1].d)
            int64_t* rcx_5 = r8_2
            void* rdx_3 = &r8_2[r10_2]
            int32_t rcx_6
            
            if (r8_2 == rdx_3)
            label_141bca87f:
                rcx_6 = -1
            else
                while (*rcx_5 != i)
                    rcx_5 = &rcx_5[1]
                    
                    if (rcx_5 == rdx_3)
                        goto label_141bca87f
                
                rcx_6 = ((rcx_5 - r8_2) s>> 3).d
            
            if (i_1 != 0 && rcx_6 s> 0)
                int64_t* rax_18 = r8_2
                int32_t rax_19
                
                if (r8_2 == rdx_3)
                label_141bca8a3:
                    rax_19 = -1
                else
                    while (*rax_18 != i_1)
                        rax_18 = &rax_18[1]
                        
                        if (rax_18 == rdx_3)
                            goto label_141bca8a3
                    
                    rax_19 = ((rax_18 - r8_2) s>> 3).d
                
                rbp.b = rax_19 s< rcx_6
            
            int32_t rax_20 = -1
            
            if (rbp.b != 0)
                rax_20 = 1
            
            int32_t rax_21 = rax_20 + rcx_6
            
            if (rax_20 + rcx_6 s< 0 || rax_21 s>= r10_2.d)
                return i
            
            i = r8_2[sx.q(rax_21)]

return i
