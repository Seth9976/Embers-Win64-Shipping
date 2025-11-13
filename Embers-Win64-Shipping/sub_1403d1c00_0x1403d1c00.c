// 函数: sub_1403d1c00
// 地址: 0x1403d1c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t var_90
__builtin_strncpy(&var_90, "sCAL", 5)
int64_t rdi = sx.q(MultiByteToWideChar(0, 0, arg3, 0xffffffff, nullptr, 0))
int64_t rsi = sx.q(MultiByteToWideChar(0, 0, arg4, 0xffffffff, nullptr, 0))
int64_t result

if (rdi + rsi + 2 u< 0x41)
    char var_88 = arg2
    void var_87
    memcpy(&var_87, arg3, rdi.d + 1)
    memcpy(&var_c8 + rdi + 0x42, arg4, rsi.d)
    result = png_write_chunk(arg1, &var_90, &var_88, rdi + rsi + 2)
else
    result = png_warning(arg1, "Can't write sCAL (buffer too small)")

__security_check_cookie(rax_1 ^ &var_c8)
return result
