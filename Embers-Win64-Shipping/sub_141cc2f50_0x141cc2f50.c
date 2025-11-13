// 函数: sub_141cc2f50
// 地址: 0x141cc2f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0)
    int64_t* rcx = *(arg1 + 8)
    
    if (rcx != 0)
        int64_t* var_28 = nullptr
        int32_t var_20 = 0
        int64_t* var_18 = nullptr
        int32_t var_10 = 0
        (*(*rcx + 0x10))(rcx, &var_28)
        int64_t rax_1 = sx.q(arg2[1].d)
        int64_t* r10 = var_28
        int64_t* r8_1
        void* r11_1
        
        if (rax_1.d != 0)
            r8_1 = *arg2
            r11_1 = &r8_1[rax_1]
        
        int64_t* rbx
        
        if (rax_1.d == 0 || r8_1 == r11_1)
        label_141cc300b:
            rbx.b = 1
        else
            void* r9_1 = &r10[sx.q(var_20)]
            
            while (true)
                int64_t* rax_3 = r10
                
                if (r10 == r9_1)
                label_141cc2fde:
                    void* rdx_1 = &var_18[sx.q(var_10)]
                    int64_t* rcx_2 = var_18
                    
                    if (var_18 == rdx_1)
                    label_141cc2ffe:
                        rbx.b = 0
                        break
                    
                    while (*rcx_2 != *r8_1)
                        rcx_2 = &rcx_2[1]
                        
                        if (rcx_2 == rdx_1)
                            goto label_141cc2ffe
                else
                    while (*rax_3 != *r8_1)
                        rax_3 = &rax_3[1]
                        
                        if (rax_3 == r9_1)
                            goto label_141cc2fde
                
                r8_1 = &r8_1[1]
                
                if (r8_1 == r11_1)
                    goto label_141cc300b
        
        if (var_18 != 0)
            sub_140a74f90(var_18)
            r10 = var_28
        
        if (r10 != 0)
            sub_140a74f90(r10)
        
        return zx.q(rbx.b)

int64_t result
result.b = arg2[1].d == 0
return result
