// 函数: sub_1403d1dc0
// 地址: 0x1403d1dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
int32_t var_10
__builtin_strncpy(&var_10, "tIME", 5)
char r11 = arg2[1].b
int64_t result

if (r11 - 1 u> 0xb)
    result = png_warning(arg1, "Invalid time specified for tIME chunk", arg3, arg4)
else
    arg3 = *(arg2 + 3)
    
    if (arg3 - 1 u> 0x1e)
        result = png_warning(arg1, "Invalid time specified for tIME chunk", arg3, arg4)
    else
        arg4 = arg2[2].b
        
        if (arg4 u> 0x17)
            result = png_warning(arg1, "Invalid time specified for tIME chunk", arg3, arg4)
        else
            char r10 = arg2[3].b
            
            if (r10 u< 0x3d)
                int16_t rax_4 = *arg2
                char var_17 = rax_4:1.b
                char var_16_1 = rax_4.b
                char var_15_1 = r11
                char var_14_1 = arg3
                char var_13_1 = arg4
                rax_4.b = *(arg2 + 5)
                char var_12_1 = rax_4.b
                char var_11_1 = r10
                result = png_write_chunk(arg1, &var_10, &var_17, 7)
            else
                result = png_warning(arg1, "Invalid time specified for tIME chunk", arg3, arg4)

__security_check_cookie(rax_1 ^ &var_38)
return result
