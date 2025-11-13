// 函数: sub_1418198c0
// 地址: 0x1418198c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
char rax_2 = *arg2
CRITICAL_SECTION* rbx = *arg1
int64_t rax_3 = *(arg2 + 8)
int64_t var_68
sub_1409f5d90(&var_68, &arg2[0x10])
rbx->__offset(0x80).b = rax_2
rbx->__offset(0x88).q = rax_3
sub_141823570(rbx + 0x90, &var_68)
int32_t var_20 = 0
int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

int128_t zmm1 = sub_14059ad90(&var_68, 0)
int64_t var_48

if (var_48 != 0)
    zmm1 = sub_140a74f90(var_48)

int64_t rcx_5 = var_68

if (rcx_5 != 0)
    zmm1 = sub_140a74f90(rcx_5)

int64_t result = sub_1405fc0f0(rbx, zmm1, arg3, arg4)
__security_check_cookie(rax_1 ^ &var_98)
return result
