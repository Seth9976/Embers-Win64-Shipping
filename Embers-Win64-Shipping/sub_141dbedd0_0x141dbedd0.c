// 函数: sub_141dbedd0
// 地址: 0x141dbedd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(*(arg1 + 0x28) + 0x10)

if (arg3 == 0)
    *arg2 = *(sub_140d21da0(rcx) + 0x18)
else
    int64_t arg_20 = *(rcx + 0x18)
    int16_t* var_30
    sub_140b63b70(&arg_20, &var_30)
    int16_t* const rsi_1 = &data_142d40450
    int64_t var_48 = *(sub_140d21da0(*(*(arg1 + 0x28) + 0x10)) + 0x18)
    int16_t* var_40
    sub_140b63b70(&var_48, &var_40)
    int16_t* const r8 = &data_142d40450
    int32_t var_38
    
    if (var_38 != 0)
        r8 = var_40
    
    int16_t* var_20
    sub_140a2e390(&var_20, u"%s/%s", r8)
    int16_t* rcx_6 = var_40
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int16_t* rcx_7 = var_30
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int32_t var_18
    
    if (var_18 != 0)
        rsi_1 = var_20
    
    sub_140b58260(arg2, rsi_1, 1)
    int16_t* rcx_9 = var_20
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

return arg2
