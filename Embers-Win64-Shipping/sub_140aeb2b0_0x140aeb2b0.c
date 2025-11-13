// 函数: sub_140aeb2b0
// 地址: 0x140aeb2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2960)
void var_2988
int64_t rax_1 = __security_cookie ^ &var_2988
data_143de5498 = 1
wchar16 _Buffer[0x1000]
__stdio_common_vswprintf(data_143cd5b30, &_Buffer, 0x1000, arg4, nullptr, arg5)
void var_2958
sub_1405eb940(&var_2958, arg1)
int64_t var_2850
wchar16 var_2838[0x400]
sub_140b01a80(&var_2838, u"%s", var_2850)
int64_t var_2858

if (var_2858 != 0)
    sub_140a74f90(var_2858)

sub_1405eb940(&var_2958, arg2)
wchar16 (* var_2960_1)[0x1000] = &_Buffer
_locale_t var_2968
var_2968.d = arg3
wchar16 (* result)[0x200] =
    sub_140b1f700(data_143de5de8, Assertion failed: %s [File:%s] [Line: %i] \n%s\n", &var_2838)

if (var_2858 != 0)
    result = sub_140a74f90(var_2858)

__security_check_cookie(rax_1 ^ &var_2988)
return result
