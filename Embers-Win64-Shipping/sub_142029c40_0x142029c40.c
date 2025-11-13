// 函数: sub_142029c40
// 地址: 0x142029c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140a23cf0(arg1, &data_142e1462c, 0, 0, 0xffffffff)
uint64_t* result

if (rax == 0xffffffff)
    sub_140597df0(arg2, arg1)
    result = &data_142d40450
    
    if (*arg3 != &data_142d40450)
        int32_t rbx_1 = 0
        arg3[1].d = 0
        
        if (*(arg3 + 0xc) != 0)
            result = sub_1405947f0(arg3, 0)
            rbx_1 = arg3[1].d
        
        arg3[1].d = rbx_1
        
        if (rbx_1 s> *(arg3 + 0xc))
            return sub_140594770(arg3) __tailcall
else
    int32_t rcx = arg1[1].d
    int16_t* rdx
    
    if (rcx == 0)
        rdx = &data_142d40450
    else
        rdx = *arg1
    
    int32_t rsi_1 = rcx - 1
    
    if (rcx == 0)
        rsi_1 = 0
    
    if (rax s< 0)
        rsi_1 = 0
    else if (rax s< rsi_1)
        rsi_1 = rax
    
    uint64_t var_40 = 0
    uint64_t r14_1 = 0
    int64_t var_38_1 = 0
    int32_t r15_1 = 0
    int32_t rax_1 = 0
    
    if (rdx != 0 && *rdx != 0 && rsi_1 s> 0)
        if (rsi_1 + 1 s> 0)
            sub_1405947f0(&var_40, rsi_1 + 1)
            rax_1 = var_38_1:4.d
            r15_1 = var_38_1.d
            r14_1 = var_40
        
        r15_1 = r15_1 + 1 + rsi_1
        var_38_1.d = r15_1
        
        if (r15_1 s> rax_1)
            sub_140594770(&var_40)
            r15_1 = var_38_1.d
            r14_1 = var_40
        
        UnDecorator::getReferenceType(r14_1, rdx, rsi_1 * 2)
        *(r14_1 + (sx.q(r15_1) << 1) - 2) = 0
    
    if (arg2 != &var_40)
        uint64_t rcx_4 = *arg2
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        *arg2 = r14_1
        arg2[1].d = r15_1
        *(arg2 + 0xc) = var_38_1:4.d
    else if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    int32_t r8_2 = arg1[1].d
    int32_t rsi_2 = r8_2 - 1
    
    if (r8_2 == 0)
        rsi_2 = 0
    
    int32_t rcx_6
    
    if (rax + 1 s>= 0)
        rcx_6 = rsi_2
        
        if (rax + 1 s< rsi_2)
            rcx_6 = rax + 1
    else
        rcx_6 = 0
    
    int64_t r9_1 = sx.q(rcx_6)
    
    if (sx.q(rax + 1) + 0x7fffffff s< r9_1)
        rsi_2 = rcx_6
    else if (sx.q(rax + 1) + 0x7fffffff s< sx.q(rsi_2))
        rsi_2 = rax - -0x80000000
    
    int16_t* const rax_7
    
    if (r8_2 == 0)
        rax_7 = &data_142d40450
    else
        rax_7 = *arg1
    
    int16_t* r13_1 = &rax_7[r9_1]
    var_40 = 0
    int32_t rsi_3 = rsi_2 - rcx_6
    int64_t var_38_2 = 0
    uint64_t r14_2 = 0
    int32_t r15_3 = 0
    int32_t r12_1 = 0
    
    if (r13_1 != 0 && *r13_1 != 0 && rsi_3 s> 0)
        if (rsi_3 + 1 s> 0)
            sub_1405947f0(&var_40, rsi_3 + 1)
            r12_1 = var_38_2:4.d
            r15_3 = var_38_2.d
            r14_2 = var_40
        
        r15_3 = r15_3 + 1 + rsi_3
        var_38_2.d = r15_3
        
        if (r15_3 s> r12_1)
            sub_140594770(&var_40)
            r12_1 = var_38_2:4.d
            r15_3 = var_38_2.d
            r14_2 = var_40
        
        UnDecorator::getReferenceType(r14_2, r13_1, rsi_3 * 2)
        *(r14_2 + (sx.q(r15_3) << 1) - 2) = 0
    
    result = &var_40
    
    if (arg3 != &var_40)
        uint64_t rcx_10 = *arg3
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        *arg3 = r14_2
        arg3[1].d = r15_3
        *(arg3 + 0xc) = r12_1
    else if (r14_2 != 0)
        return sub_140a74f90(r14_2)

return result
