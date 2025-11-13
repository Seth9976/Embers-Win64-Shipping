// 函数: sub_141d9e000
// 地址: 0x141d9e000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x170))()
int32_t r8 = arg2[1].d
int32_t rcx = r8 - 1

if (r8 == 0)
    rcx = 0

int64_t* result
int64_t var_28

if (rcx u>= rax_1)
    int16_t* r15_1
    
    if (r8 == 0)
        r15_1 = &data_142d40450
    else
        r15_1 = *arg2
    
    int32_t rdi = r8 - 1
    
    if (r8 == 0)
        rdi = 0
    
    if (rax_1 s< 0)
        rdi = 0
    else if (rax_1 s< rdi)
        rdi = rax_1
    
    var_28 = 0
    int64_t rsi_1 = 0
    int64_t var_20_1 = 0
    int32_t rbp_1 = 0
    int32_t r14_1 = 0
    
    if (r15_1 != 0 && *r15_1 != 0 && rdi s> 0)
        if (rdi + 1 s> 0)
            sub_1405947f0(&var_28, rdi + 1)
            r14_1 = var_20_1:4.d
            rbp_1 = var_20_1.d
            rsi_1 = var_28
        
        rbp_1 = rbp_1 + 1 + rdi
        var_20_1.d = rbp_1
        
        if (rbp_1 s> r14_1)
            sub_140594770(&var_28)
            r14_1 = var_20_1:4.d
            rbp_1 = var_20_1.d
            rsi_1 = var_28
        
        UnDecorator::getReferenceType(rsi_1, r15_1, rdi * 2)
        *(rsi_1 + (sx.q(rbp_1) << 1) - 2) = 0
    
    result = &var_28
    
    if (arg3 != &var_28)
        int64_t rcx_8 = *arg3
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        *arg3 = rsi_1
        arg3[1].d = rbp_1
        *(arg3 + 0xc) = r14_1
    else if (rsi_1 != 0)
        return sub_140a74f90(rsi_1)
else
    result = sub_140a310f0(arg2, &var_28, rax_1)
    int64_t* result_1 = result
    
    if (arg3 != result)
        int64_t rcx_2 = *arg3
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        *arg3 = *result_1
        *result_1 = 0
        arg3[1].d = result_1[1].d
        result = zx.q(*(result_1 + 0xc))
        *(arg3 + 0xc) = result.d
        result_1[1] = 0
    
    int64_t rcx_4 = var_28
    
    if (rcx_4 != 0)
        return sub_140a74f90(rcx_4)
return result
