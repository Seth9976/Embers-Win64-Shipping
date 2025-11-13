// 函数: sub_14141d040
// 地址: 0x14141d040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i_2 = arg3
int32_t i_3 = i_2
void* r14 = arg1

if (*(arg1 + 0x54) != 0)
    int64_t* rcx = *(arg1 + 0x28)
    result = (*(*rcx + 8))(rcx)
    uint64_t r11_1 = 0
    void* const* result_1 = result
    void* const* result_3 = result
    uint64_t var_80_1 = 0
    
    if (*(r14 + 0xa8) s> 0)
        int64_t r10_1 = 0
        int128_t var_48_1 = arg6
        int64_t var_78_1 = 0
        
        do
            void* r10_2 = r10_1 + *(r14 + 0xa0)
            void* var_70_1 = r10_2
            
            if (*(r10_2 + 0xad8) != i_2)
                void* const rax_1 = *result_3
                int32_t rcx_1 = *(r10_2 + 0x15a4)
                int32_t r9_1 = *(rax_1 + 0x60)
                int32_t r8 = r9_1
                int32_t rdx = *(rax_1 + 0x64)
                int32_t rax_2 = *(r10_2 + 0x15a0)
                
                if (rax_2 s<= r9_1)
                    r8 = rax_2
                
                int32_t rax_3 = rdx
                
                if (rcx_1 s<= rdx)
                    rax_3 = rcx_1
                
                int32_t rcx_2 = *(r10_2 + 0x159c)
                int32_t var_8c_1 = rax_3
                int32_t rax_4 = *(r10_2 + 0x1598)
                
                if (rax_4 s<= r9_1)
                    r9_1 = rax_4
                
                result = r8.q
                void* const* result_2 = result
                
                if (rcx_2 s<= rdx)
                    rdx = rcx_2
                
                int32_t var_94_1 = rdx
                int64_t rcx_3 = r9_1.q
                
                if (r8 - r9_1 s> 0)
                    result = zx.q((result u>> 0x20).d - (rcx_3 u>> 0x20).d)
                    
                    if (result.d s> 0)
                        int32_t i_1 = i_2
                        
                        if (i_2 != 0)
                            uint64_t rflags_1
                            int32_t temp0_1
                            temp0_1, rflags_1 = _bit_scan_forward(i_2)
                            int32_t r14_1 = temp0_1
                            int32_t i
                            
                            do
                                result = zx.q(*(r10_2 + 0xad8))
                                int32_t rdi_1 = 1 << r14_1.b
                                
                                if ((result.d & rdi_1) == 0)
                                    int32_t r15_1 = 0x20
                                    
                                    if (result.d != 0)
                                        uint64_t rflags_2
                                        int32_t temp0_2
                                        temp0_2, rflags_2 = _bit_scan_forward(result.d)
                                        r15_1 = temp0_2
                                    
                                    int32_t r12_1 = data_143f029c8
                                    void* const r13_1 = *result_1
                                    sub_140b34200("FlushRHIThreadTotal", r12_1)
                                    
                                    if (*(arg2 + 0x14) u> 0)
                                        arg5, arg4 =
                                            j_sub_14196ef60(&data_143f02b88, arg2, arg5, arg4)
                                    
                                    sub_14198b230()
                                    
                                    if (data_143f01c92 != 0)
                                        sub_14198b3f0()
                                    
                                    int64_t rdx_3
                                    rdx_3.b = 1
                                    arg6 = sub_14198b7d0()
                                    sub_140b38680("FlushRHIThreadTotal", r12_1)
                                    int64_t* rcx_9 = data_143f0f180
                                    int128_t var_58 = arg6
                                    result = (*(*rcx_9 + 0x228))(rcx_9, r13_1, &var_58, 
                                        zx.q(r15_1), r14_1, 1, r9_1, r8, result_1, var_80_1, 
                                        var_78_1, var_70_1, rcx_3, result_2, var_58, var_48_1)
                                    r10_2 = var_70_1
                                
                                r14_1 = 0x20
                                i = not.d(rdi_1) & i_1
                                i_1 = i
                                
                                if (i != 0)
                                    uint64_t rflags_3
                                    int32_t temp0_3
                                    temp0_3, rflags_3 = _bit_scan_forward(i)
                                    r14_1 = temp0_3
                            while (i != 0)
                            i_2 = i_3
                            r11_1 = var_80_1
                            result_3 = result_1
                            r14 = arg1
            
            r11_1 = zx.q(r11_1.d + 1)
            r10_1 = var_78_1 + 0x5240
            var_80_1 = r11_1
            var_78_1 = r10_1
        while (r11_1.d s< *(r14 + 0xa8))

return result
