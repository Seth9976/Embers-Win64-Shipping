// 函数: sub_14093ccd0
// 地址: 0x14093ccd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t rax_1 = *arg2
    
    if (rax_1 == 6)
        sub_140943f20(arg1, *(arg2 + 8))
        return arg1
    
    if (rax_1 == 0xa)
        int16_t* rbp = *(arg2 + 8)
        int16_t* rsi = nullptr
        int16_t* var_18 = nullptr
        int32_t rdx_1 = 0
        int32_t var_10 = 0
        int32_t rax_3 = 0
        int32_t var_c = 0
        int16_t* rdx_4
        int32_t r14_1
        
        if (rbp != 0 && *rbp != 0)
            int64_t rdi_1 = -1
            
            do
                rdi_1 += 1
            while (rbp[rdi_1] != 0)
            
            if (rdi_1.d + 1 s> 0)
                sub_1405947f0(&var_18, rdi_1.d + 1)
                rax_3 = var_c
                rdx_1 = var_10
                rsi = var_18
            
            r14_1 = rdx_1 + rdi_1.d + 1
            
            if (r14_1 s> rax_3)
                sub_140594770(&var_18)
                rsi = var_18
            
            UnDecorator::getReferenceType(rsi, rbp, (rdi_1.d + 1) * 2)
            rdx_4 = rsi
        
        if (rbp == 0 || *rbp == 0 || r14_1 == 0)
            rdx_4 = &data_142d40450
        
        sub_140943f20(arg1, rdx_4)
        *arg1 = 0xa
        
        if (rsi != 0)
            sub_140a74f90(rsi)
        
        return arg1
    
    if (rax_1 != 8)
        sub_14093ee40(arg1)
        *arg1 = *arg2
        *(arg1 + 0x10) = *(arg2 + 0x10)
        return arg1
    
    sub_140943e00(arg1, arg2[4], *(arg2 + 8))

return arg1
