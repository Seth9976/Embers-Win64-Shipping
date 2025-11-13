// 函数: sub_141d148b0
// 地址: 0x141d148b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    int64_t var_48 = 0
    int32_t rdx = 0
    int32_t var_40_1 = 0
    int32_t r9_1 = 0
    int32_t var_3c_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_48, rbx_1.d + 1)
            r9_1 = var_3c_1
            rdx = var_40_1
        
        int32_t rax_1 = rbx_1.d + 1 + rdx
        var_40_1 = rax_1
        
        if (rax_1 s> r9_1)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48, arg2, (rbx_1.d + 1) * 2)
    
    sub_140b20c40(&var_48)
    void arg_18
    
    if (*sub_140960120(*(arg1 + 0x10), &arg_18, &var_48) != 0xffffffff)
        int64_t rcx_5 = var_48
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int32_t* result
        result.b = 1
        return result
    
    if (sub_141d02340(*(arg1 + 0x18), arg2, nullptr, nullptr) != 0)
        int64_t* r15_1 = *(arg1 + 0x10)
        int32_t var_38
        sub_140598750(r15_1, &var_38)
        int64_t* var_30
        *var_30 = 0
        int64_t r12_1 = var_48
        var_30[1].d = var_40_1
        
        if (var_40_1 != 0)
            sub_1405a4c70(var_30, var_40_1, 0)
            memcpy(*var_30, r12_1, var_40_1 * 2)
        else
            *(var_30 + 0xc) = 0
        
        var_30[2].d = 0xffffffff
        int32_t rax_3 = var_30[1].d
        int16_t* rdx_8
        
        if (rax_3 == 0)
            rdx_8 = &data_142d40450
        else
            rdx_8 = *var_30
        
        int32_t rcx_10 = rax_3 - 1
        
        if (rax_3 == 0)
            rcx_10 = 0
        
        sub_14059a6d0(r15_1, &arg_18, sub_1405969c0(rcx_10, rdx_8), var_30, var_38, nullptr)
    
    int64_t rcx_12 = var_48
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)

jump(*(**(arg1 + 8) + 8))
