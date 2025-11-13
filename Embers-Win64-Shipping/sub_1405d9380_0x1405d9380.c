// 函数: sub_1405d9380
// 地址: 0x1405d9380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x50)

if (rcx == 0)
    sub_140a2e390(arg2, u"%s [none]", &data_142d40450)
else
    int64_t var_18
    int64_t* rax_2 = (*(*rcx + 0x140))(rcx, &var_18)
    
    if (rax_2[1].d != 0)
        *rax_2
    
    sub_140a2e390(arg2, u"%s [%s]", &data_142d40450)
    int64_t rcx_2 = var_18
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

return arg2
