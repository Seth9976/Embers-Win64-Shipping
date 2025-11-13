// 函数: png_chunk_warning
// 地址: 0x1403c3690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t result

if (arg1 == 0)
    sub_141528310(__acrt_iob_func(2), "libpng warning: %s", arg2)
    result = fputc(0xa, __acrt_iob_func(2))
else
    char var_78[0x58]
    sub_1403c34f0(arg1, &var_78, arg2)
    result = png_warning(arg1, &var_78)

__security_check_cookie(rax_1 ^ &var_98)
return result
