// 函数: sub_1428c8f90
// 地址: 0x1428c8f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x110)
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t var_24 = 0x40
void* result = &data_143fecbd0
int64_t var_f8 = 0x6a09e667f3bcc908

if (arg3 != 0)
    result = arg3

int64_t var_f0
__builtin_memcpy(&var_f0, 
    "\x3b\xa7\xca\x84\x85\xae\x67\xbb\x2b\xf8\x94\xfe\x72\xf3\x6e\x3c\xf1\x36\x1d\x5f\x3a\xf5\x4f\xa5\x"
"d1\x82\xe6\xad\x7f\x52\x0e\x51\x1f\x6c\x3e\x2b\x8c\x68\x05\x9b\x6b\xbd\x41\xfb\xab\xd9\x83\x1f\x79"
"21\x7e\x13\x19\xcd\xe0\x5b", 
    0x38)
int64_t var_b8 = 0
int64_t var_b0 = 0
int32_t var_28 = 0
sub_1428c9950(&var_f8, arg1, arg2)
sub_1428c90a0(result, &var_f8)
sub_1428b8960(&var_f8, 0xd8)
__security_check_cookie(rax_1 ^ &var_118)
return result
