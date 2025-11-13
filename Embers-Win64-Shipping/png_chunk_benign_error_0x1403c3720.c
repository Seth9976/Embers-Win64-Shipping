// 函数: png_chunk_benign_error
// 地址: 0x1403c3720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98

if ((*(arg1 + 0x15a) & 0x80) == 0)
    png_chunk_error(arg1, arg2)
    noreturn

char var_78[0x60]
sub_1403c34f0(arg1, &var_78, arg2)
int64_t result = png_warning(arg1, &var_78)
__security_check_cookie(rax_1 ^ &var_98)
return result
