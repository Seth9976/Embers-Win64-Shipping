// 函数: sub_141cc1a40
// 地址: 0x141cc1a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0)
    int64_t* rcx = *(arg1 + 8)
    
    if (rcx != 0)
        int64_t* var_28 = nullptr
        int32_t var_20 = 0
        int64_t* var_18 = nullptr
        int32_t var_10 = 0
        (*(*rcx + 0x10))(rcx, &var_28)
        bool cond:1 = sub_140b5b8a0(arg2.d, 0) == 0
        int64_t* r8 = var_28
        int32_t rcx_1
        rcx_1.b = cond:1
        rcx_1.b |= arg2:4.d != 0
        int64_t rbx
        
        if (rcx_1.b == 0)
        label_141cc1aee:
            rbx.b = 0
        else
            int64_t* rcx_2 = r8
            void* rdx_1 = &r8[sx.q(var_20)]
            
            if (r8 == rdx_1)
            label_141cc1ad3:
                int64_t* rax_3 = var_18
                void* rdx_2 = &var_18[sx.q(var_10)]
                
                if (var_18 == rdx_2)
                label_141cc1aee_1:
                    rbx.b = 0
                else
                    while (*rax_3 != arg2)
                        rax_3 = &rax_3[1]
                        
                        if (rax_3 == rdx_2)
                            goto label_141cc1aee_1
                    
                    rbx.b = 1
            else
                while (*rcx_2 != arg2)
                    rcx_2 = &rcx_2[1]
                    
                    if (rcx_2 == rdx_1)
                        goto label_141cc1ad3
                
                rbx.b = 1
        
        if (var_18 != 0)
            sub_140a74f90(var_18)
            r8 = var_28
        
        if (r8 != 0)
            sub_140a74f90(r8)
        
        return zx.q(rbx.b)

int64_t result
result.b = 0
return result
