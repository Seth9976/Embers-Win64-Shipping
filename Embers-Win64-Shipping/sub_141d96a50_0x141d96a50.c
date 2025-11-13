// 函数: sub_141d96a50
// 地址: 0x141d96a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_28
sub_141d9ef80(*arg1, &var_28, &arg1[1])
int32_t result = sub_140b16090(&var_28)

if (result.b != 0)
    int16_t* var_38
    sub_141d9ef80(*arg1, &var_38, &arg1[3])
    int16_t* var_48
    sub_140b18720(&var_48, &var_38, 1)
    int64_t var_18
    sub_140a2f8e0(&var_48, sub_141d157d0(&var_18), 1)
    int64_t rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int16_t* const rbx_1 = &data_142d40450
    int16_t* const rdx_4 = &data_142d40450
    int32_t var_40
    
    if (var_40 != 0)
        rdx_4 = var_48
    
    int16_t* const rcx_7
    
    if (arg1[4].d == 0)
        rcx_7 = &data_142d40450
    else
        rcx_7 = arg1[3]
    
    result = sub_140a54510(rcx_7, rdx_4)
    
    if (result == 0)
        sub_140a464c0()
        int16_t* const r8_3 = &data_142d40450
        int32_t var_20
        
        if (var_20 != 0)
            r8_3 = var_28
        
        int32_t var_30
        
        if (var_30 != 0)
            rbx_1 = var_38
        
        result = (*(data_14399ea08 + 0x40))(&data_14399ea08, rbx_1, r8_3, 0, 0, 0, 0)
        
        if (result.b != 0)
            *(arg2 + 8) = 0
    
    int16_t* rcx_8 = var_48
    
    if (rcx_8 != 0)
        result = sub_140a74f90(rcx_8)
    
    int16_t* rcx_9 = var_38
    
    if (rcx_9 != 0)
        result = sub_140a74f90(rcx_9)
else
    *(arg2 + 8) = 2

int16_t* rcx_10 = var_28

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
