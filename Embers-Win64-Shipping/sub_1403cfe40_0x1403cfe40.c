// 函数: sub_1403cfe40
// 地址: 0x1403cfe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int32_t var_20
__builtin_strncpy(&var_20, "sRGB", 5)

if (arg2 s>= 4)
    png_warning(arg1, "Invalid sRGB rendering intent specified")

char var_21 = arg2.b
int64_t result = png_write_chunk(arg1, &var_20, &var_21, 1)
__security_check_cookie(rax_1 ^ &var_48)
return result
