// 函数: sub_141b7c340
// 地址: 0x141b7c340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
__builtin_memset(&arg1[0x21], 0, 0x11)
*arg1 = &data_143073a90
arg1[0x24] = 0
arg1[0x25] = 0
*(arg1 + 0x132) = 1
*(arg1 + 0x134) = 0
arg1[0x27].b = 0
*(arg1 + 0x13c) = 0
void** var_98
sub_14068e310(&arg1[0x28], sub_140ddaa70(&var_98, &data_143dbb1f0))
var_98 = &data_142d8ad18
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp2_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

int64_t* var_58

if (var_58 != 0)
    var_58[1].d -= 1
    
    if (var_58[1].d == 1)
        (**var_58)(var_58)
        int32_t temp3_1 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_58 + 8))(var_58, 1)

arg1[0x39] = 0
arg1[0x3a] = 0
*(arg1 + 0xb4) &= 0xfe
*(arg1 + 0xc3) = 4
return arg1
