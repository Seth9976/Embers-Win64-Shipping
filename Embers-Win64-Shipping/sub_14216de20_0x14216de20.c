// 函数: sub_14216de20
// 地址: 0x14216de20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_142167460(arg1, arg2, arg4, nullptr)

if (result == 0)
    result.b = 0
else
    void* rdi_1 = *result
    int64_t var_28
    
    if (sub_142174690(&arg1[0x14], arg2) s> 0)
        sub_1421599e0(&arg1[0xa], &var_28, result, nullptr)
    
    sub_140d3a3a0(&var_28, arg3)
    
    if (sub_1421744f0(rdi_1 + 0x30, var_28).d s<= 0)
        result.b = 0
    else
        int64_t var_20
        sub_140d3a3a0(&var_20, arg3)
        sub_142159da0(rdi_1 + 0x80, &var_28, &var_20, nullptr)
        sub_140d3a3a0(&var_28, arg3)
        int64_t rax_2 = var_28
        int32_t rbp_3 = (rax_2 u>> 0x20).d ^ rax_2.d
        
        if (arg1[0x1f].d == *(arg1 + 0x124))
        label_14216df94:
            result = sub_14215b1f0(&arg1[0x1e], rbp_3, &var_28)
            *result -= 1
            result.b = 1
        else
            void* rdx_7 = arg1[0x26]
            void* r9 = &arg1[0x25]
            
            if (rdx_7 != 0)
                r9 = rdx_7
            
            int32_t rbx_1 = *(r9 + (((sx.q(arg1[0x27].d) - 1) & sx.q(rbp_3)) << 2))
            
            if (rbx_1 == 0xffffffff)
                goto label_14216df94
            
            int64_t rdx_8 = arg1[0x1e]
            int64_t rdi_2
            
            while (true)
                var_20 = rax_2
                rdi_2 = sx.q(rbx_1) * 0x14
                int64_t var_18 = *(rdi_2 + rdx_8)
                
                if (sub_14077a170(&var_18, &var_20) != 0)
                    break
                
                rdx_8 = arg1[0x1e]
                rbx_1 = *(rdi_2 + rdx_8 + 0xc)
                
                if (rbx_1 == 0xffffffff)
                    goto label_14216df94
                
                rax_2 = var_28
            
            if (rbx_1 == 0xffffffff)
                goto label_14216df94
            
            void* rax_6 = arg1[0x1e]
            
            if (rax_6 == neg.q(rdi_2))
                goto label_14216df94
            
            *(rax_6 + rdi_2 + 8) -= 1
            result.b = 1

return result
