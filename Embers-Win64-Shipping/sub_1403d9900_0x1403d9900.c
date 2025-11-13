// 函数: sub_1403d9900
// 地址: 0x1403d9900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
char rax_2 = (*(arg1 + 0x154)).b

if ((rax_2 & 1) == 0)
    png_error(arg1, "Missing IHDR before sRGB")
    noreturn

int32_t result

if ((rax_2 & 4) != 0)
    png_warning(arg1, "Invalid sRGB after IDAT")
    result = sub_1403d8880(arg1, arg3)
else
    if ((rax_2 & 2) != 0)
        png_warning(arg1, "Out of place sRGB chunk")
    
    if (arg2 != 0 && (*(arg2 + 9) & 8) != 0)
        png_warning(arg1, "Duplicate sRGB chunk")
        result = sub_1403d8880(arg1, arg3)
    else if (arg3 != 1)
        png_warning(arg1, "Incorrect sRGB chunk length")
        result = sub_1403d8880(arg1, arg3)
    else
        char var_29
        sub_1403cc480(arg1, &var_29, 1)
        sub_1403be770(arg1, &var_29, 1)
        result = sub_1403d8880(arg1, 0)
        
        if (result == 0)
            uint32_t rbx_1 = zx.d(var_29)
            
            if (rbx_1 u< 4)
                if (arg2 != 0)
                    char rax_3 = (*(arg2 + 8)).b
                    
                    if ((rax_3 & 1) != 0 && 0xffff5038 + *(arg2 + 0x34) u>= 0x3e9)
                        png_warning(arg1, "Ignoring incorrect gAMA value when sRGB is also present")
                        sub_141528310(__acrt_iob_func(2), "incorrect gamma=(%d/100000)\n", 
                            zx.q(*(arg2 + 0x34)))
                        rax_3 = (*(arg2 + 8)).b
                    
                    if ((rax_3 & 4) != 0 && (0xffff89c2 + *(arg2 + 0xa8) u> 0x7d0
                            || 0xffff8364 + *(arg2 + 0xac) u> 0x7d0
                            || 0xffff09e8 + *(arg2 + 0xb0) u> 0x7d0
                            || 0xffff8300 + *(arg2 + 0xb4) u> 0x7d0
                            || 0xffff8eb8 + *(arg2 + 0xb8) u> 0x7d0
                            || 0xffff1988 + *(arg2 + 0xbc) u> 0x7d0
                            || 0xffffc950 + *(arg2 + 0xc0) u> 0x7d0
                            || 0xffffec78 + *(arg2 + 0xc4) u>= 0x7d1))
                        png_warning(arg1, "Ignoring incorrect cHRM value when sRGB is also present")
                
                result = png_set_sRGB_gAMA_and_cHRM(arg1, arg2, rbx_1.b)
            else
                result = png_warning(arg1, "Unknown sRGB intent")

__security_check_cookie(rax_1 ^ &var_58)
return result
