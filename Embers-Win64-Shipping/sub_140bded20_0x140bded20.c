// 函数: sub_140bded20
// 地址: 0x140bded20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s< 0 || arg3 s>= *(arg1 + 0x48))
    *arg2 = 0
    arg2[1] = 0
else
    bool cond:0_1 = *(arg1 + 0x50) != 0
    int64_t arg_20
    int64_t* rcx = &arg_20
    arg_20 = *(*(arg1 + 0x40) + sx.q(arg3) * 0x10)
    
    if (not(cond:0_1))
        sub_140b63b70(rcx, arg2)
        return arg2
    
    int16_t* var_38
    sub_140b63b70(rcx, &var_38)
    int32_t rax_3 = sub_140a23cf0(&var_38, &data_142d6ad1c, 0, 0, 0xffffffff)
    
    if (rax_3 == 0xffffffff)
        int16_t* rcx_9 = var_38
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        *arg2 = 0
        arg2[1] = 0
    else
        int32_t var_30
        int32_t rsi_1 = var_30 - 1
        *arg2 = 0
        arg2[1] = 0
        
        if (var_30 == 0)
            rsi_1 = 0
        
        int32_t rcx_2
        
        if (rax_3 + 2 s>= 0)
            rcx_2 = rsi_1
            
            if (rax_3 + 2 s< rsi_1)
                rcx_2 = rax_3 + 2
        else
            rcx_2 = 0
        
        int64_t r9_1 = sx.q(rcx_2)
        
        if (sx.q(rax_3 + 2) + 0x7fffffff s< r9_1)
            rsi_1 = rcx_2
        else if (sx.q(rax_3 + 2) + 0x7fffffff s< sx.q(rsi_1))
            rsi_1 = rax_3 - -0x80000001
        
        int64_t var_48 = 0
        int16_t* const rax_6 = &data_142d40450
        int64_t var_40_1 = 0
        
        if (var_30 != 0)
            rax_6 = var_38
        
        int64_t rbp_1 = 0
        int32_t rsi_2 = rsi_1 - rcx_2
        int32_t r14_1 = 0
        int32_t r15_1 = 0
        void* r12_1 = &rax_6[r9_1]
        
        if (r12_1 != 0 && *r12_1 != 0 && rsi_2 s> 0)
            if (rsi_2 + 1 s> 0)
                sub_1405947f0(&var_48, rsi_2 + 1)
                r15_1 = var_40_1:4.d
                r14_1 = var_40_1.d
                rbp_1 = var_48
            
            r14_1 = r14_1 + 1 + rsi_2
            var_40_1.d = r14_1
            
            if (r14_1 s> r15_1)
                sub_140594770(&var_48)
                r15_1 = var_40_1:4.d
                r14_1 = var_40_1.d
                rbp_1 = var_48
            
            UnDecorator::getReferenceType(rbp_1, r12_1, rsi_2 * 2)
            *(rbp_1 + (sx.q(r14_1) << 1) - 2) = 0
        
        if (arg2 != &var_48)
            int64_t rcx_6 = *arg2
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            *arg2 = rbp_1
            arg2[1].d = r14_1
            *(arg2 + 0xc) = r15_1
        else if (rbp_1 != 0)
            sub_140a74f90(rbp_1)
        
        int16_t* rcx_8 = var_38
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)

return arg2
