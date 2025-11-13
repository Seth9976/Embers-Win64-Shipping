// 函数: sub_140cfdce0
// 地址: 0x140cfdce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t result
int64_t var_28
int32_t var_20
int64_t var_18

if (not(test_bit(arg4, 0x1c)))
    int32_t rcx_6 = arg3[1].d
    int32_t rax_3 = rcx_6 - 1
    
    if ((arg4.b & 2) == 0)
        if (rcx_6 == 0)
            rax_3 = 0
        
        return sub_140a20ba0(arg2, *arg3, rax_3) __tailcall
    
    if (rcx_6 == 0)
        rax_3 = 0
    
    if (rax_3 s<= 0)
        return sub_140a20ba0(arg2, &data_142e631fc, 2)
    
    int64_t* rax_5 = sub_140a30480(arg3, &var_18, nullptr)
    int16_t* const r8_5
    
    if (rax_5[1].d == 0)
        r8_5 = &data_142d40450
    else
        r8_5 = *rax_5
    
    sub_140a2e390(&var_28, u""%s"", r8_5)
    
    if (var_20 != 0)
        rbx = var_20 - 1
    
    result = sub_140a20ba0(arg2, var_28, rbx)
    int64_t rcx_12 = var_28
    
    if (rcx_12 != 0)
        result = sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = var_18
    
    if (rcx_13 != 0)
        return sub_140a74f90(rcx_13)
else
    int64_t var_38 = 0
    int64_t var_30_1 = 0
    int64_t* rax = sub_140cfbb40(&var_18, arg3, &var_38)
    int16_t* const r8_1
    
    if (rax[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rax
    
    sub_140a2e390(&var_28, u"FString(%s)", r8_1)
    
    if (var_20 != 0)
        rbx = var_20 - 1
    
    result = sub_140a20ba0(arg2, var_28, rbx)
    int64_t rcx_3 = var_28
    
    if (rcx_3 != 0)
        result = sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        result = sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = var_38
    
    if (rcx_5 != 0)
        return sub_140a74f90(rcx_5)
return result
