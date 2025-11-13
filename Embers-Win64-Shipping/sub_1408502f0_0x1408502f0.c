// 函数: sub_1408502f0
// 地址: 0x1408502f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg2 + 0x788)

if (result != 0)
    void* rbp_1 = *(arg1 + 0x28)
    
    if (rbp_1 != 0)
        rbp_1 = *(rbp_1 + 0x408)
    
    void* r15_1 = *(result + 0x1d0)
    result = sx.q(*(result + 0x1d8))
    void* r13_2 = result * 0x58 + r15_1
    
    if (r15_1 != r13_2)
        int64_t rsi
        int64_t var_18_1 = rsi
        void* r14_1 = r15_1 + 0x3c
        
        do
            result = zx.q(*(r14_1 - 4)) | zx.q(*(r14_1 + 4)) | zx.q(*r14_1) | zx.q(*(r14_1 - 8))
            
            if (result.d != 0)
                int16_t* var_58
                result = sub_140b291e0(r14_1 - 8, &var_58, 0)
                int32_t i = 0
                int64_t rdi_1 = 0
                
                if (*(rbp_1 + 0x70) s> 0)
                    do
                        void arg_10
                        SymBuffer::begin(sx.q(i) * 0x30 + *(rbp_1 + 0x68), &arg_10)
                        int64_t var_48
                        int64_t* rax_4 = sub_140b63b70(&arg_10, &var_48)
                        int16_t* const rdx_3 = &data_142d40450
                        int32_t var_50
                        
                        if (var_50 != 0)
                            rdx_3 = var_58
                        
                        int16_t* const rcx_5
                        
                        if (rax_4[1].d == 0)
                            rcx_5 = &data_142d40450
                        else
                            rcx_5 = *rax_4
                        
                        result = sub_140a54510(rcx_5, rdx_3)
                        int64_t rcx_6 = var_48
                        rsi.b = result.d == 0
                        
                        if (rcx_6 != 0)
                            result = sub_140a74f90(rcx_6)
                        
                        if (rsi.b != 0)
                            int64_t rbx_1 = sx.q(arg3[1].d)
                            int64_t rdi_3 = *(*(arg1 + 0xa0) + rdi_1 * 0x10)
                            int32_t rax_7 = (rbx_1 + 1).d
                            arg3[1].d = rax_7
                            
                            if (rax_7 s> *(arg3 + 0xc))
                                sub_1405a4d70(arg3)
                            
                            result = *arg3
                            *(result + (rbx_1 << 3)) = rdi_3
                            break
                        
                        i += 1
                        rdi_1 += 1
                    while (i s< *(rbp_1 + 0x70))
                
                int16_t* rcx_8 = var_58
                
                if (rcx_8 != 0)
                    result = sub_140a74f90(rcx_8)
            
            r15_1 += 0x58
            r14_1 += 0x58
        while (r15_1 != r13_2)

return result
