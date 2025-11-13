// 函数: sub_141e64b30
// 地址: 0x141e64b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg3
int64_t var_28 = 0
int32_t var_20 = 0

if (arg5 != &var_28 && arg5[1].d != 0)
    int64_t* rcx = *arg5
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &var_28)

uint64_t var_38 = 0
int32_t var_30 = 1
sub_1405a4be0(&var_38, 1, 0)
*var_38 = zmm0
(*(*arg1 + 0x300))(arg1, arg2, &var_38, arg4, &var_28, arg6, var_38, var_30)
uint64_t rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140745b20(arg5)
return arg2
