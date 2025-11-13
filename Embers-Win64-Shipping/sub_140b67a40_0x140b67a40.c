// 函数: sub_140b67a40
// 地址: 0x140b67a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void var_b8
sub_1408f2b40(&var_b8, arg2)
PSTR lpProcName
int64_t result = GetProcAddress(arg1, lpProcName)
int64_t var_38

if (var_38 != 0)
    sub_140a74f90(var_38)

__security_check_cookie(rax_1 ^ &var_d8)
return result
