// 函数: sub_1403d91b0
// 地址: 0x1403d91b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
char rax_2 = (*(arg1 + 0x154)).b

if ((rax_2 & 1) == 0)
    png_error(arg1, "Missing IHDR before gAMA")
    noreturn

int32_t result

if ((rax_2 & 4) != 0)
    png_warning(arg1, "Invalid gAMA after IDAT")
    result = sub_1403d8880(arg1, arg3)
else
    if ((rax_2 & 2) != 0)
        png_warning(arg1, "Out of place gAMA chunk")
    
    if (arg2 != 0 && (0x801 & *(arg2 + 8)) == 1)
        png_warning(arg1, "Duplicate gAMA chunk")
        result = sub_1403d8880(arg1, arg3)
    else if (arg3 != 4)
        png_warning(arg1, "Incorrect gAMA chunk length")
        result = sub_1403d8880(arg1, arg3)
    else
        int32_t var_24
        sub_1403cc480(arg1, &var_24, 4)
        sub_1403be770(arg1, &var_24, 4)
        result = sub_1403d8880(arg1, 0)
        
        if (result == 0)
            int32_t temp0_1 = _bswap(var_24)
            int32_t rbx_1 = -1
            
            if (temp0_1 s> 0xfffffffe)
                rbx_1 = temp0_1
            
            if (rbx_1 s<= 0)
                result = png_warning(arg1, "Ignoring gAMA chunk with out of range gamma")
            else if (arg2 == 0 || rbx_1 - 0xafc8 u< 0x3e9 || (0x800 & *(arg2 + 8)) == 0)
                *(arg1 + 0x29c) = rbx_1
                result = png_set_gAMA_fixed(arg1, arg2, rbx_1)
            else
                png_warning(arg1, "Ignoring incorrect gAMA value when sRGB is also present")
                result = sub_141528310(__acrt_iob_func(2), "gamma = (%d/100000)", zx.q(rbx_1))

__security_check_cookie(rax_1 ^ &var_48)
return result
