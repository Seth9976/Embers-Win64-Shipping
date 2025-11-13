// 函数: sub_142125280
// 地址: 0x142125280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[6]

if (rcx == 0)
    (*(*arg1 + 0x388))(arg1)
else
    int64_t var_18
    int64_t* rax = sub_140d21e10(rcx, &var_18, 0)
    int16_t* const rsi_1 = &data_142d40450
    
    if (rax[1].d != 0)
        *rax
    
    int64_t var_28
    int16_t** rax_2 = (*(*arg1 + 0x388))(arg1, &var_28)
    
    if (rax_2[1].d != 0)
        rsi_1 = *rax_2
    
    sub_140a2e390(arg2, u"%s (MI:%s)", rsi_1)
    int64_t rcx_3 = var_28
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

return arg2
