// 函数: sub_1403da610
// 地址: 0x1403da610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
char rax_2 = (*(arg1 + 0x154)).b

if ((rax_2 & 1) == 0)
    png_error(arg1, "Missing IHDR before pHYs")
    noreturn

int32_t result

if ((rax_2 & 4) != 0)
    png_warning(arg1, "Invalid pHYs after IDAT")
    result = sub_1403d8880(arg1, arg3)
else if (arg2 != 0 && *(arg2 + 8) s< 0)
    png_warning(arg1, "Duplicate pHYs chunk")
    result = sub_1403d8880(arg1, arg3)
else if (arg3 != 9)
    png_warning(arg1, "Incorrect pHYs chunk length")
    result = sub_1403d8880(arg1, arg3)
else
    int32_t var_29
    sub_1403cc480(arg1, &var_29, 9)
    sub_1403be770(arg1, &var_29, 9)
    result = sub_1403d8880(arg1, 0)
    int32_t var_25
    char var_21
    
    if (result == 0)
        result = png_set_pHYs(arg1, arg2, _bswap(var_29), _bswap(var_25), var_21)

__security_check_cookie(rax_1 ^ &var_58)
return result
