// 函数: sub_1405f2030
// 地址: 0x1405f2030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int64_t* rcx_1 = *(arg1 + 0x38) + 8
int32_t result = (*(*rcx_1 + 0x18))(rcx_1)

if (result == 0)
    return result

sub_1405ffa80(*(arg1 + 0x38))
*(arg1 + 0x18) = 0
int64_t var_20 = 0
int64_t var_18_1 = 0

if (arg1 + 0x28 != &var_20)
    int64_t rcx_3 = *(arg1 + 0x28)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *(arg1 + 0x28) = 0
    *(arg1 + 0x30) = 0

sub_1405ffd50(*(arg1 + 0x40))
int64_t* rcx_5 = *(arg1 + 0x20)
(**rcx_5)(rcx_5, 9)
int64_t* rcx_6 = *(arg1 + 0x20)
return (**rcx_6)(rcx_6, 1)
