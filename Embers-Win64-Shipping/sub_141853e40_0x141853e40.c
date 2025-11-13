// 函数: sub_141853e40
// 地址: 0x141853e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t var_78 = 0xffffffff
int64_t var_88 = 0
int32_t var_74
__builtin_memset(&var_74, 0, 0x30)
int128_t* rax_2 = *arg1
int64_t var_80 = 0
int32_t var_44 = 0x80
int32_t var_40 = 0xffffffff
int32_t var_3c
__builtin_memset(&var_3c, 0, 0x24)
*arg2 = *rax_2
arg2[1].q = 0
*(arg2 + 0x18) = 0
arg2[2].d = 0xffffffff
int64_t var_70
sub_1409f5d90(arg2 + 0x28, &var_70)
int64_t var_20
*(arg2 + 0x78) = var_20
int64_t var_28
var_28.d = 0
int64_t var_30

if (var_30 != 0)
    sub_140a74f90(var_30)

sub_14059ad90(&var_70, 0)
int64_t var_50

if (var_50 != 0)
    sub_140a74f90(var_50)

int64_t rcx_4 = var_70

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

if (var_88 != 0)
    sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_a8)
return arg2
