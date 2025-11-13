// 函数: sub_140699810
// 地址: 0x140699810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbx = &data_142d40450
int16_t* const rdx = &data_142d40450

if (data_143cddfd8 != 0)
    rdx = data_143cddfd0

sub_140b1f3f0(&data_143cddfe0, rdx, 0)
void* arg_8 = arg1 + 8
sub_140688b80(&data_143cddfe0, &arg_8)

if (data_143cddfd8 != 0)
    rbx = data_143cddfd0

sub_140a464c0()
sub_140b270f0(&data_143cddfe0, rbx, 0, &data_14399ea08, 0)
int64_t* rcx = *(arg1 + 0x18)
void var_18
(*(*rcx + 0x2a8))(rcx, &var_18)
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*arg2 = 1
*(arg2 + 0xb0) = 0x20702
return arg2
