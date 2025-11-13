// 函数: sub_141c1ebd0
// 地址: 0x141c1ebd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
void* rdx_2 = arg_10
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
void** var_98
sub_140693270(arg3, sub_141bb9ad0(&var_98, rdx_2))
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
