// 函数: sub_1418084f0
// 地址: 0x1418084f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_28
int64_t* result = sub_1418042f0(&var_28, arg1 + 0x140)
int32_t var_20

if (var_20 s> 1)
    int16_t* const r8_1 = &data_142d40450
    int64_t* rdx_3 = (sx.q(*(arg1 + 0x138)) << 4) + **(arg1 + 0x128)
    int16_t* const r9_1
    
    if (rdx_3[1].d == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = *rdx_3
    
    if (var_20 != 0)
        r8_1 = var_28
    
    int64_t var_18
    sub_140a300d0(arg1 + 0x140, &var_18, r8_1, r9_1, 1)
    int64_t* rcx_3 = *(arg1 + 0x58)
    result = (*(*rcx_3 + 0x50))(rcx_3, &var_18)
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        result = sub_140a74f90(rcx_4)

int16_t* rcx_5 = var_28

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
