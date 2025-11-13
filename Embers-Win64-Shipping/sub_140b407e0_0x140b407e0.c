// 函数: sub_140b407e0
// 地址: 0x140b407e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5480 != 0)
    uint32_t rax_1
    rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_1.b == 0)
        void* var_18
        sub_140b3a6e0(arg1, &var_18, arg2)
        void* rcx_1 = var_18
        int64_t* var_10
        
        if (rcx_1 == 0)
            if (var_10 != 0)
                var_10[1].d -= 1
                
                if (var_10[1].d == 1)
                    (**var_10)(var_10)
                    int32_t rdi_1 = *(var_10 + 0xc)
                    *(var_10 + 0xc) -= 1
                    
                    if (rdi_1 == 1)
                        (*(*var_10 + 8))(var_10, zx.q(rdi_1))
            
            return 0
        
        int64_t result = 0
        bool z
        
        if (0 == *(rcx_1 + 0x31))
            *(rcx_1 + 0x31) = 0
            z = true
        else
            int64_t rax_6
            rax_6.b = *(rcx_1 + 0x31)
            z = false
        
        uint32_t rax_7
        
        if (z && data_143de5480 != 0)
            rax_7.b = GetCurrentThreadId() == data_143de5470
        
        if (not(z) || data_143de5480 == 0 || rax_7.b != 0)
            result = *(var_18 + 0x28)
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t rdi_2 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    int64_t r8_1 = *var_10
                    (*(r8_1 + 8))(var_10, zx.q(rdi_2), r8_1)
        
        return result

void arg_20
return sub_140b40940(arg1, arg2, &arg_20)
