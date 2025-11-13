// 函数: sub_14227fb50
// 地址: 0x14227fb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_608
int64_t rax_1 = __security_cookie ^ &var_608
void var_5e8
sub_142259c20(&var_5e8, &arg1[0x1cc])
char rax_3 = (*(*arg1 + 0x720))(arg1, &var_5e8)
arg1[0x4e2].d &= 0xfffffbff
arg1[0x4e2].d |= (zx.d(rax_3) & 1) << 0xa
int64_t result = sub_14226a8c0(arg1, &var_5e8)
char var_28 = 0
int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_608)
return result
