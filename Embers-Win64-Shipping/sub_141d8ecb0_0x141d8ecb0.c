// 函数: sub_141d8ecb0
// 地址: 0x141d8ecb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_38 = &data_142d5a028
int32_t var_30 = 6
char result = sub_141d90910(arg1, arg2)
int64_t* rbx = nullptr

if (result == 0)
    int16_t* var_28
    sub_141d8fd20(&var_28, arg2)
    int16_t* const rsi_1 = &data_142d40450
    int16_t* const r14_1 = &data_142d40450
    int32_t var_20
    
    if (var_20 != 0)
        r14_1 = var_28
    
    int64_t* rax = sub_140b257f0()
    int16_t* rcx_1
    
    if (rax[1].d == 0)
        rcx_1 = &data_142d40450
    else
        rcx_1 = *rax
    
    int16_t* const var_18 = rcx_1
    wchar16 const* const var_10_1 = u"Demos/"
    uint64_t var_48 = 0
    int32_t var_40_1 = 0
    sub_140b0f5f0(&var_48, &var_18, 2)
    int16_t* const rax_1 = &data_142d40450
    int16_t* const var_10_2 = r14_1
    
    if (var_40_1 != 0)
        rax_1 = var_48
    
    var_18 = rax_1
    uint64_t var_58 = 0
    int32_t var_50_1 = 0
    sub_140b0f5f0(&var_58, &var_18, 2)
    uint64_t rcx_4 = var_48
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int16_t* rcx_5 = var_28
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    result = sub_140b12f50(&var_58)
    
    if (result != 0)
        sub_140a464c0()
        int64_t r9_1
        r9_1.b = 1
        
        if (var_50_1 != 0)
            rsi_1 = var_58
        
        result = (*(data_14399ea08 + 0x60))(&data_14399ea08, rsi_1, 0, r9_1)
        int32_t rcx_7 = var_30
        
        if (result != 0)
            rcx_7 = 0
        
        int32_t var_30_2 = rcx_7
    else
        int32_t var_30_1 = 2
    
    uint64_t rcx_8 = var_58
    
    if (rcx_8 != 0)
        result = sub_140a74f90(rcx_8)

if (arg3[1].d != 0)
    int64_t* rcx_9 = *arg3
    
    if (rcx_9 != 0)
        result = (*(*rcx_9 + 0x28))(rcx_9)
        
        if (result != 0)
            if (arg3[1].d != 0)
                rbx = *arg3
            
            return (*(*rbx + 0x50))(rbx, &var_38)

return result
