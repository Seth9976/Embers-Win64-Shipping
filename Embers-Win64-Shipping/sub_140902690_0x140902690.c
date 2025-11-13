// 函数: sub_140902690
// 地址: 0x140902690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140b1d530(arg1 + 0xa0) == 0)
    sub_140596d10(arg2, arg1 + 0xa0)
    return arg2

if (sub_140a32ae0(arg1 + 0xa0, &data_142e1ac80, 1) == 0)
    sub_140b11c80(arg2, arg1 + 0xa0)
else
    int32_t rax_3 = *(arg1 + 0xa8)
    int32_t rdx_1 = 0
    int32_t rcx_3 = rax_3 - 1
    
    if (rax_3 == 0)
        rcx_3 = 0
    
    uint64_t r9_1
    
    if (rax_3 == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = *(arg1 + 0xa0)
    
    int32_t rax_4
    
    if (rcx_3 - 2 s>= 0)
        rax_4 = rcx_3
        
        if (rcx_3 - 2 s< rcx_3)
            rax_4 = rcx_3 - 2
    else
        rax_4 = 0
    
    int64_t var_28 = 0
    int64_t var_20_1 = 0
    int64_t rsi_1 = r9_1 + ((sx.q(rcx_3) - sx.q(rax_4)) << 1)
    int32_t rcx_6 = 0
    
    if (rsi_1 != 0 && *rsi_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (*(rsi_1 + (rbx_1 << 1)) != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_28, rbx_1.d + 1)
            rcx_6 = var_20_1:4.d
            rdx_1 = var_20_1.d
        
        int32_t rax_6 = rbx_1.d + 1 + rdx_1
        var_20_1.d = rax_6
        
        if (rax_6 s> rcx_6)
            sub_140594770(&var_28)
        
        UnDecorator::getReferenceType(var_28, rsi_1, (rbx_1.d + 1) * 2)
    
    int64_t var_18
    sub_140b11a10(arg2, sub_140b25050(&var_18), &var_28)
    int64_t rcx_12 = var_18
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = var_28
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)

return arg2
