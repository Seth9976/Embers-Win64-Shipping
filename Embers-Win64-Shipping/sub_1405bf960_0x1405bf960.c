// 函数: sub_1405bf960
// 地址: 0x1405bf960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int64_t var_20 = 0
sub_1405c5510(&var_28, 0x2800)
int32_t result = &var_28

if (arg2 + 0x1510 == &var_28)
    int64_t rcx_2 = var_28
    
    if (rcx_2 != 0)
        result = sub_140a74f90(rcx_2)
else
    int64_t rcx_1 = *(arg2 + 0x1510)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg2 + 0x1510) = var_28
    *(arg2 + 0x1518) = var_20.d
    result = var_20:4.d
    *(arg2 + 0x151c) = result

void* rcx_3 = *(arg1 + 0x28)

if (rcx_3 == 0)
    return result

return (*(*(rcx_3 + 0x28) + 0x10))(rcx_3 + 0x28, arg2, arg3)
