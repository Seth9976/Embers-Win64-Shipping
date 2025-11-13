// 函数: sub_141819690
// 地址: 0x141819690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
CRITICAL_SECTION* rdi = *arg1
int64_t var_b8
sub_1409f5d90(&var_b8, arg2)
int64_t var_68
sub_1409f5d90(&var_68, &arg2[0xa])
sub_141823570(rdi + 0x80, &var_b8)
sub_141823570(rdi + 0xd0, &var_68)
int32_t var_20 = 0
int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

sub_14059ad90(&var_68, 0)
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t rcx_7 = var_68

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int32_t var_70 = 0
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int128_t zmm1 = sub_14059ad90(&var_b8, 0)
int64_t var_98

if (var_98 != 0)
    zmm1 = sub_140a74f90(var_98)

int64_t rcx_11 = var_b8

if (rcx_11 != 0)
    zmm1 = sub_140a74f90(rcx_11)

int64_t result = sub_1405fc0f0(rdi, zmm1, arg3, arg4)
__security_check_cookie(rax_1 ^ &var_d8)
return result
