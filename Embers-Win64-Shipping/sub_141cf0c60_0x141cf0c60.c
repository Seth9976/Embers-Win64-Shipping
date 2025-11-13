// 函数: sub_141cf0c60
// 地址: 0x141cf0c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int128_t zmm0 = data_14321e0e0
*arg2 = 0
int32_t var_18 = 0
int64_t var_48
__builtin_memset(&var_48, 0, 0x18)
int128_t var_30 = zmm0
int64_t var_20 = 0
sub_140a2c970(arg2, rbx)
arg2[1].d = rbx[1].d
*(arg2 + 0xc) = *(rbx + 0xc)
rbx[1] = 0
__builtin_memset(&arg2[2], 0, 0x20)
arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
arg2[7] = 0
arg2[8].d = 0
sub_141cf8f80(&arg2[2], &var_48)
sub_140a2c970(&arg2[7], &var_20)
arg2[8].d = var_18
var_18 = 0
sub_140a1d5c0(&var_20)
sub_141cf8580(&var_48)
return arg2
