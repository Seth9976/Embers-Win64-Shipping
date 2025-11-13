// 函数: sub_141c1f000
// 地址: 0x141c1f000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t rcx
rcx.b = rax != 0
*(arg2 + 0x20) = rcx + rax
void** var_98
sub_140693270(arg3, sub_141bbbe30(&var_98))
void** const result = &data_142d8ad18
var_98 = &data_142d8ad18
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        result = (**var_20)(var_20)
        int32_t temp2_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_20 + 8))(var_20, 1)

int64_t* var_58

if (var_58 != 0)
    var_58[1].d -= 1
    
    if (var_58[1].d == 1)
        result = (**var_58)(var_58)
        int32_t temp3_1 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*var_58 + 8))(var_58, 1)

return result
