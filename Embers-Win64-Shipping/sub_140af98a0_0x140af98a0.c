// 函数: sub_140af98a0
// 地址: 0x140af98a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* arg_18 = arg3
int64_t _ArgList = arg4
__chkstk(0x2048)
void var_2068
int64_t rax_1 = __security_cookie ^ &var_2068
wchar16 _Buffer[0x1000]
__stdio_common_vswprintf(data_143cd5b30, &_Buffer, 0x1000, arg3, nullptr, &_ArgList)
int64_t* var_2040
var_2040.d = 1
_locale_t var_2048
var_2048.b = 0
int64_t result = sub_140b01f80(u"LowLevelFatalError", arg1, arg2, &_Buffer)
__security_check_cookie(rax_1 ^ &var_2068)
return result
