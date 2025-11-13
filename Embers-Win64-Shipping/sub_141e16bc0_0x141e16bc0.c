// 函数: sub_141e16bc0
// 地址: 0x141e16bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3e110(&arg1[0x21])

if (result.b != 0)
    void* rcx_1 = *arg1
    
    if (rcx_1 != 0 && arg2 != 0)
        result = sx.q(*arg2)
        
        if (result.d s< *(rcx_1 + 0x88))
            int64_t rbx_1 = result * 0xb8
            void* rbx_2 = rbx_1 + *(rcx_1 + 0x80)
            
            if (rbx_1 != neg.q(*(rcx_1 + 0x80)))
                bool rdx
                
                if (*(rbx_2 + 0x90) != 0)
                    rdx = sub_140b5b8a0(*(rbx_2 + 0x40), 0) == 0
                
                int64_t var_38
                
                if (*(rbx_2 + 0x90) == 0 || (*(rbx_2 + 0x44) != 0 | rdx) == 0)
                    if (*(rbx_2 + 0x50) == 0)
                        if (*(rbx_2 + 0x48) == 0)
                            return sub_141e0e9e0(sub_140d3c6e0(&arg1[0x21]), rbx_2)
                        
                        int64_t rcx_27 = *(sub_140d3c6e0(&arg1[0x21]) + 0x20)
                        int64_t rax_21 = *arg1
                        var_38 = rcx_27
                        int64_t* rcx_28 = *(rbx_2 + 0x48)
                        int64_t var_30_3 = rax_21
                        void* var_28_3 = rbx_2
                        int32_t var_20_3 = arg1[0x22].d
                        return (*(*rcx_28 + 0x270))(rcx_28, &var_38)
                    
                    if (arg2[2].b == 0)
                        int64_t rcx_13 = *(sub_140d3c6e0(&arg1[0x21]) + 0x20)
                        int64_t rax_6 = *arg1
                        var_38 = rcx_13
                        int64_t* rcx_14 = *(rbx_2 + 0x50)
                        int64_t var_30_1 = rax_6
                        void* var_28_1 = rbx_2
                        int32_t var_20_1 = arg1[0x22].d
                        (*(*rcx_14 + 0x280))(rcx_14, &var_38)
                        int64_t rdi_3 = sx.q(arg1[0x24].d)
                        int32_t rax_9 = (rdi_3 + 1).d
                        arg1[0x24].d = rax_9
                        
                        if (rax_9 s> *(arg1 + 0x124))
                            sub_14092f900(&arg1[0x23])
                        
                        return sub_141df22d0(rdi_3 * 0xb8 + arg1[0x23], rbx_2)
                    
                    int64_t rcx_18 = *(sub_140d3c6e0(&arg1[0x21]) + 0x20)
                    int64_t rax_11 = *arg1
                    var_38 = rcx_18
                    int64_t* rcx_19 = *(rbx_2 + 0x50)
                    int64_t var_30_2 = rax_11
                    void* var_28_2 = rbx_2
                    int32_t var_20_2 = arg1[0x22].d
                    (*(*rcx_19 + 0x290))(rcx_19, &var_38)
                    void* r9_2 = arg1[0x23]
                    result = sx.q(arg1[0x24].d)
                    void* rcx_20 = r9_2
                    void* r8_3 = result * 0xb8 + r9_2
                    
                    if (r9_2 != r8_3)
                        while (true)
                            result = *(rcx_20 + 0x48)
                            
                            if (result == 0 || result != *(rbx_2 + 0x48))
                                int64_t rdx_10 = *(rcx_20 + 0x50)
                                
                                if (rdx_10 == 0 || rdx_10 != *(rbx_2 + 0x50))
                                    if (result != 0 || rdx_10 != 0)
                                    label_141e16e22:
                                        rcx_20 += 0xb8
                                        
                                        if (rcx_20 == r8_3)
                                            break
                                        
                                        continue
                                    else
                                        result = *(rbx_2 + 0x40)
                                        
                                        if (*(rcx_20 + 0x40) != result)
                                            goto label_141e16e22
                            
                            void* rcx_21 = rcx_20 - r9_2
                            int64_t rax_14
                            void* rdx_11
                            rdx_11:rax_14 = muls.dp.q(-0x4de9bd37a6f4de9b, rcx_21)
                            result = (rdx_11 + rcx_21) s>> 7 u>> 0x3f
                            int32_t rdx_14 = (rcx_21 s/ 0xb8).d
                            
                            if (rdx_14 == 0xffffffff)
                                break
                            
                            void*** r11_1 = sx.q(rdx_14) * 0xb8
                            *(r11_1 + r9_2 + 0x60) = &data_142e0b890
                            *(r11_1 + r9_2) = &data_142e0b890
                            int32_t r10_1 = arg1[0x24].d
                            int32_t rcx_24 = r10_1 - rdx_14 - 1
                            
                            if (rcx_24 s>= 1)
                                rcx_24 = 1
                            
                            if (rcx_24 != 0)
                                int64_t r9_3 = arg1[0x23]
                                memcpy(r11_1 + r9_3, sx.q(r10_1 - rcx_24) * 0xb8 + r9_3, 
                                    rcx_24 * 0xb8)
                                r10_1 = arg1[0x24].d
                            
                            arg1[0x24].d = r10_1 - 1
                            return sub_140aff040(&arg1[0x23])
                else
                    int64_t* rax_1 = sub_140b63b70(rbx_2 + 0x40, &var_38)
                    int16_t* const rdi_1 = &data_142d40450
                    int16_t* const r8_1
                    
                    if (rax_1[1].d == 0)
                        r8_1 = &data_142d40450
                    else
                        r8_1 = *rax_1
                    
                    int16_t* var_48
                    sub_140a2e390(&var_48, u"MontageBranchingPoint_%s", r8_1)
                    int64_t rcx_5 = var_38
                    
                    if (rcx_5 != 0)
                        sub_140a74f90(rcx_5)
                    
                    int32_t var_40
                    
                    if (var_40 != 0)
                        rdi_1 = var_48
                    
                    int64_t arg_8
                    sub_140b58260(&arg_8, rdi_1, 1)
                    int64_t rax_3 = sub_140d1fd20(sub_140d3c6e0(&arg1[0x21]), arg_8)
                    int64_t* rax_4 = sub_140d3c6e0(&arg1[0x21])
                    
                    if (rax_3 == 0)
                        result = sub_141e0e9e0(rax_4, rbx_2)
                    else
                        int64_t r9_1 = *rax_4
                        result = (*(r9_1 + 0x210))(rax_4, rax_3, 0, r9_1)
                    
                    int16_t* rcx_11 = var_48
                    
                    if (rcx_11 != 0)
                        return sub_140a74f90(rcx_11)

return result
