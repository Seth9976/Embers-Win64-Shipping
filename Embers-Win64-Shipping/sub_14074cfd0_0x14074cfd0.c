// 函数: sub_14074cfd0
// 地址: 0x14074cfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg2
int64_t result = sx.q(arg2[1].d)

for (void* r12 = &i[result]; i != r12; i = &i[1])
    void* rax = *i
    int64_t* rbx_1 = *(rax + 0x510)
    result = sx.q(*(rax + 0x518))
    void* r14_2 = result * 0x38 + rbx_1
    
    if (rbx_1 != r14_2)
        int16_t* rdi_1 = &rbx_1[4]
        
        do
            int32_t rcx
            rcx.b = sub_140b5b8a0(*(rdi_1 + 0x10), 0).b == 0
            result.b = *(rdi_1 + 0x14) != 0
            result.b |= rcx.b
            
            if (result.b != 0)
                int64_t var_58 = *(rdi_1 + 0x10)
                int64_t var_50_1 = *(rdi_1 - 8)
                int16_t var_48_1 = *rdi_1
                int32_t var_46_1 = 0xffffffff
                int64_t var_40_1 = 0
                int64_t var_38_1 = 0
                result = (*(*arg3 + 8))(arg3, &var_58, 0, 0, 0)
                
                if (result.b != 0)
                    int64_t rbp_2 = *rbx_1
                    result = (*(*arg3 + 0x30))(arg3, &var_58)
                    
                    if (result != 0)
                        result = sx.q(*result)
                        
                        if (result.d != 0xffffffff)
                            int64_t result_1 = result
                            result = arg3[6]
                            *(result + (result_1 << 3)) = rbp_2
                            arg3[0x16].d |= 2
                
                if (var_40_1 != 0)
                    result = sub_140a74f90(var_40_1)
            
            rbx_1 = &rbx_1[7]
            rdi_1 = &rdi_1[0x1c]
        while (rbx_1 != r14_2)

return result
