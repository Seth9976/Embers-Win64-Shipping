// 函数: png_write_sig
// 地址: 0x1403cf370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
int64_t var_18 = 0xa1a0a0d474e5089
*(arg1 + 0x4a8) = 0x12
uint64_t rax_2 = zx.q(*(arg1 + 0x264))
int64_t result = sub_1403cc370(arg1, &var_38 + rax_2 + 0x20, 8 - rax_2)

if (*(arg1 + 0x264) u<= 2)
    *(arg1 + 0x155) |= 0x10

__security_check_cookie(rax_1 ^ &var_38)
return result
