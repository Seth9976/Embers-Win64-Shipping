// 函数: sub_142886030
// 地址: 0x142886030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void* rax_2 = *(arg1 + 0xa8)
int32_t var_38
__builtin_memcpy(&var_38, 
    "\xfd\xe8\x00\x20\x30\x1e\x30\x08\x06\x06\x2a\x85\x03\x02\x02\x09\x30\x08\x06\x06\x2a\x85\x03\x02\x"
"02\x16\x30\x08\x06\x06\x2a\x85\x03\x02\x02\x17", 
    0x24)
int32_t rax_5

if (zx.d(*(*(rax_2 + 0x238) + 0x18)) - 0x80 u<= 1)
    rax_5 = sub_14284fc20(arg1)

int64_t result

if (zx.d(*(*(rax_2 + 0x238) + 0x18)) - 0x80 u> 1 || rax_5 s>= 0)
    result = 2
else if (sub_142873970(arg2, &var_38, 0x24) != 0)
    result = 1
else
    sub_142856580(arg1, 0x50, 0x1c4, 0x44, "ssl\statem\extensions_srvr.c", 0x76e)
    result = 0

__security_check_cookie(rax_1 ^ &var_68)
return result
