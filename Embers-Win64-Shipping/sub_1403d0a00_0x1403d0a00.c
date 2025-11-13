// 函数: sub_1403d0a00
// 地址: 0x1403d0a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
uint64_t var_8 = __security_cookie ^ &var_38
int32_t var_10
__builtin_strncpy(&var_10, "sBIT", 5)
int64_t result
char var_14
uint64_t rax_1
int64_t r9_1

if ((arg3.b & 2) != 0)
    uint32_t r9_2 = 8
    
    if (arg3 != 3)
        r9_2 = zx.d(*(arg1 + 0x260))
    
    rax_1 = zx.q(*arg2)
    
    if (rax_1.d == 0 || r9_2 u< rax_1.d)
        result = png_warning(arg1, "Invalid sBIT depth specified")
    else
        uint32_t r10_1 = zx.d(arg2[1])
        
        if (r10_1 == 0 || r9_2 u< r10_1)
            result = png_warning(arg1, "Invalid sBIT depth specified")
        else
            uint32_t r11_1 = zx.d(arg2[2])
            
            if (r11_1 == 0 || r9_2 u< r11_1)
                result = png_warning(arg1, "Invalid sBIT depth specified")
            else
                var_14 = rax_1.b
                char var_13_1 = r10_1.b
                char var_12_1 = r11_1.b
                r9_1 = 3
                
                if ((arg3.b & 4) != 0)
                    goto label_1403d0aa6
                
                result = png_write_chunk(arg1, &var_10, &var_14, r9_1)
else
    rax_1.b = arg2[3]
    
    if (rax_1.b == 0 || rax_1.b u> *(arg1 + 0x260))
        result = png_warning(arg1, "Invalid sBIT depth specified")
    else
        var_14 = rax_1.b
        r9_1 = 1
        
        if ((arg3.b & 4) != 0)
        label_1403d0aa6:
            rax_1.b = arg2[4]
            
            if (rax_1.b == 0 || rax_1.b u> *(arg1 + 0x260))
                result = png_warning(arg1, "Invalid sBIT depth specified")
            else
                (&var_14)[r9_1] = rax_1.b
                result = png_write_chunk(arg1, &var_10, &var_14, r9_1 + 1)
        else
            result = png_write_chunk(arg1, &var_10, &var_14, r9_1)
__security_check_cookie(var_8 ^ &var_38)
return result
