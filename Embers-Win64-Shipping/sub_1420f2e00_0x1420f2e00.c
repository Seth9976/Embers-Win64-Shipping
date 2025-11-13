// 函数: sub_1420f2e00
// 地址: 0x1420f2e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_98
sub_1420f5ef0(arg1, &var_98)
int128_t zmm1 = data_14399f6f0
int128_t var_78 = data_14399f6e0
int128_t var_58 = data_14399f700
int128_t zmm0 = *arg3
int32_t var_88 = 0xffffffff
int128_t var_68 = zmm1
zmm1 = data_14399f710
int32_t* var_90
*var_90 = zmm0
int64_t var_38
__builtin_memset(&var_38, 0, 0x18)
int128_t var_48 = zmm1
sub_1420f3300(&var_90[4], &var_88)
int64_t var_30

if (var_30 != 0)
    sub_140a74f90(var_30)

int32_t rax = var_98
var_90[0x20] = 0xffffffff
int32_t arg_8
sub_1420f7770(arg1, &arg_8, arg2, var_90, rax, nullptr)
return *arg1 + 0x10 + sx.q(arg_8) * 0x90
