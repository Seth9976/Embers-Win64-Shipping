// 函数: sub_1403cfd80
// 地址: 0x1403cfd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
int32_t var_18
__builtin_strncpy(&var_18, "IEND", 5)
int64_t result = png_write_chunk(arg1, &var_18, nullptr, 0)
*(arg1 + 0x154) |= 0x10
__security_check_cookie(rax_1 ^ &var_38)
return result
