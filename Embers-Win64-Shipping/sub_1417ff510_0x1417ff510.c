// 函数: sub_1417ff510
// 地址: 0x1417ff510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2[1].d
int32_t r9 = result - 1

if (result == 0)
    r9 = 0

if (r9 s> 0)
    result = arg3[1].d
    int32_t rcx = result - 1
    
    if (result == 0)
        rcx = 0
    
    if (rcx s> 0)
        int32_t arg_10
        sub_14062d6e0(&arg1[0x12], &arg_10, arg2)
        int64_t rax = sx.q(arg_10)
        void* const rcx_2
        
        if (rax.d == 0xffffffff)
            rcx_2 = nullptr
        else
            rcx_2 = arg1[0x12] + rax * 0x28
        
        int64_t var_38 = 0
        int64_t* rbx_1 = rcx_2 + 0x10
        int64_t var_30_1 = 0
        
        if (rcx_2 == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rdi_1 = rbx_1[1].d
            int32_t rax_2 = rdi_1 - 1
            
            if (rdi_1 == 0)
                rax_2 = 0
            
            if (rax_2 s> 0)
                int64_t rbx_2 = *rbx_1
                int64_t var_48 = 0
                sub_1405a4c70(&var_48, sbb.d(rcx_2.d, rcx_2.d, rdi_1 != 0) + 3 + rdi_1, 0)
                memcpy(var_48, rbx_2, rdi_1 * 2)
                sub_140a20ba0(&var_48, &data_142d8adc4, 2)
                int64_t rcx_7 = var_38
                int64_t rbx_3 = var_48
                var_48 = 0
                int32_t var_40_1
                var_40_1.q = 0
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                int32_t var_3c
                var_30_1:4.d = var_3c
                var_38 = rbx_3
                var_30_1.d = rdi_1
        
        int32_t rax_5 = arg3[1].d
        int32_t r8_3 = rax_5 - 1
        
        if (rax_5 == 0)
            r8_3 = 0
        
        sub_140a20ba0(&var_38, *arg3, r8_3)
        result = (*(*arg1 + 0x78))(arg1, arg2, &var_38)
        int64_t rcx_10 = var_38
        
        if (rcx_10 != 0)
            return sub_140a74f90(rcx_10)

return result
