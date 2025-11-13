// 函数: png_set_sCAL_fixed
// 地址: 0x1403cd420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char const* const rdi_1

if (arg4 s<= 0)
    rdi_1 = "Invalid sCAL width ignored"
else
    if (arg5 s> 0)
        char var_58[0x20]
        sub_1403bfea0(arg1, &var_58, 0x12, arg4)
        char var_78[0x20]
        sub_1403bfea0(arg1, &var_78, 0x12, arg5)
        int64_t result = png_set_sCAL_s(arg1, arg2, arg3, &var_58, &var_78)
        __security_check_cookie(rax_1 ^ &var_a8)
        return result
    
    rdi_1 = "Invalid sCAL height ignored"

__security_check_cookie(rax_1 ^ &var_a8)
return png_warning(arg1, rdi_1) __tailcall
