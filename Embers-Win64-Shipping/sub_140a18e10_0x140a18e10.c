// 函数: sub_140a18e10
// 地址: 0x140a18e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t var_38
__builtin_memcpy(&var_38, 
    "\x86\xba\xbd\xd6\xd5\x15\x15\x39\x44\x5c\x30\xb6\x70\x99\x99\x36\x2e\xa5\x1c\x91\xb6\xd4\x84\x5d\x"
"c3\x02\xc2\x7d\xf9\x2e\x6e\xea", 
    0x20)
int32_t var_1c

if (arg1 u<= &var_1c:3 && arg1 + 0x1f u>= &var_38)
    int64_t result = memcpy(arg1, &var_38, 0x20)
    __security_check_cookie(rax_1 ^ &var_58)
    return result

*arg1 = var_38.o
int32_t var_28
arg1[1] = var_28.o
__security_check_cookie(rax_1 ^ &var_58)
return arg1 + 0x1f
