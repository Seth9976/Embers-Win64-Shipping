// 函数: sub_140bada40
// 地址: 0x140bada40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg1 + 0x50)
int64_t rdi = sx.q(arg2)
int64_t r8 = *(result + 8)
int32_t* result_1 = rdi * 0x38 + r8

if (*(result_1 + 0x20) == 0 && *(result_1 + 0x36) == 0)
    void* rax = *(result_1 + 0x28)
    
    if (rax == 0)
        int32_t rdi_1 = not.d(rdi.d)
        result = result_1
        
        while (true)
            int32_t rax_1 = result[2]
            
            if (rax_1 == 0)
                result = sx.q(not.d(rdi_1))
                void* rcx_4 = result * 0x38 + r8
                void* r12_1 = *(rcx_4 + 0x20)
                
                if (r12_1 == 0)
                    *(result_1 + 0x36) = 1
                else if (rcx_4 != result_1)
                    int32_t var_78_1 = 0
                    result = sub_140b92fc0(0, *(result_1 + 0xc), 0, 0, 0)
                    
                    if (result != 0)
                        int32_t var_68_1 = 0
                        int32_t var_70_1 = 0
                        var_78_1.b = 0
                        result = sub_140d2f0c0(sub_140bdf2e0(), result, *(result_1 + 0x14), 0, 0, 0)
                        int32_t* result_2 = result
                        
                        if (result != 0)
                            int32_t rdx_2 = result_1[2]
                            int16_t* const rbx_2 = &data_142d40450
                            void* r15_1 = r12_1
                            int64_t var_58
                            int64_t var_48
                            int64_t var_38
                            
                            if (rdi_1 == rdx_2)
                            label_140badc61:
                                int32_t var_68_2 = 0
                                int32_t var_70_2 = 0
                                var_78_1.b = 0
                                result = sub_140d2f0c0(result_2, r15_1, *result_1, 0, 0, 0)
                                *(result_1 + 0x20) = result
                                
                                if (result == 0)
                                    int64_t* rax_11 = sub_140d21830(r12_1, &var_58, 0, 0)
                                    int16_t* const rbp_3
                                    
                                    if (rax_11[1].d == 0)
                                        rbp_3 = &data_142d40450
                                    else
                                        rbp_3 = *rax_11
                                    
                                    int64_t* rax_12 = sub_140b63b70(result_1, &var_48)
                                    int16_t* const rdi_5
                                    
                                    if (rax_12[1].d == 0)
                                        rdi_5 = &data_142d40450
                                    else
                                        rdi_5 = *rax_12
                                    
                                    int16_t** rax_13 = sub_140b63b70(arg1 + 0x1c, &var_38)
                                    
                                    if (rax_13[1].d != 0)
                                        rbx_2 = *rax_13
                                    
                                    var_70_2.q = rbp_3
                                    var_78_1.q = rdi_5
                                    sub_140af98a0("Unknown", 0xa1e, 
                                        Missing import of (%s): %s in %s was not found, but the package "
                                    "exists.", rbx_2)
                                    int64_t rcx_18 = var_38
                                    
                                    if (rcx_18 != 0)
                                        sub_140a74f90(rcx_18)
                                    
                                    int64_t rcx_19 = var_48
                                    
                                    if (rcx_19 != 0)
                                        sub_140a74f90(rcx_19)
                                    
                                    int64_t rcx_20 = var_58
                                    
                                    if (rcx_20 != 0)
                                        sub_140a74f90(rcx_20)
                                    
                                    result = sub_140afbb40()
                            else
                                result = *(arg1 + 0x50)
                                int32_t* rdi_3 = sx.q(not.d(rdx_2)) * 0x38 + *(result + 8)
                                
                                if (*(rdi_3 + 0x20) != 0)
                                    goto label_140badb94
                                
                                if (*(rdi_3 + 0x36) != 0)
                                    *(result_1 + 0x36) = 1
                                else
                                    result = sub_140bada40(arg1)
                                label_140badb94:
                                    
                                    if (*(rdi_3 + 0x36) == 0)
                                        r15_1 = *(rdi_3 + 0x20)
                                        
                                        if (r15_1 == 0)
                                            int64_t* rax_8 = sub_140d21830(r12_1, &var_38, 0, 0)
                                            int16_t* const rbp_2
                                            
                                            if (rax_8[1].d == r15_1.d)
                                                rbp_2 = &data_142d40450
                                            else
                                                rbp_2 = *rax_8
                                            
                                            int64_t* rax_9 = sub_140b63b70(rdi_3, &var_48)
                                            int16_t* const rdi_4
                                            
                                            if (rax_9[1].d == 0)
                                                rdi_4 = &data_142d40450
                                            else
                                                rdi_4 = *rax_9
                                            
                                            int64_t* rax_10 = sub_140b63b70(arg1 + 0x1c, &var_58)
                                            int16_t* const r9_1
                                            
                                            if (rax_10[1].d == 0)
                                                r9_1 = &data_142d40450
                                            else
                                                r9_1 = *rax_10
                                            
                                            var_70_1.q = rbp_2
                                            var_78_1.q = rdi_4
                                            sub_140af98a0("Unknown", 0xa1b, 
                                                Missing outer for import of (%s): %s in %s was not "
                                            "found, but the package exists.", r9_1)
                                            int64_t rcx_11 = var_58
                                            
                                            if (rcx_11 != 0)
                                                sub_140a74f90(rcx_11)
                                            
                                            int64_t rcx_12 = var_48
                                            
                                            if (rcx_12 != 0)
                                                sub_140a74f90(rcx_12)
                                            
                                            int64_t rcx_13 = var_38
                                            
                                            if (rcx_13 != 0)
                                                sub_140a74f90(rcx_13)
                                            
                                            sub_140afbb40()
                                        
                                        goto label_140badc61
                                    
                                    *(result_1 + 0x36) = 1
                
                break
            
            rdi_1 = rax_1
            result = sx.q(not.d(rax_1)) * 0x38 + r8
            
            if (*(result + 0x36) != 0)
                *(result_1 + 0x36) = 1
                break
    else
        result = *(rax + 0x18)
        *(result_1 + 0x20) = *((sx.q(result_1[0xc]) << 7) + result + 0x40)
    
    void* rdx_11 = *(result_1 + 0x20)
    
    if (rdx_11 != 0)
        return sub_140b9aae0(arg1, rdx_11)

return result
