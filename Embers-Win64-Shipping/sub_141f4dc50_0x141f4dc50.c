// 函数: sub_141f4dc50
// 地址: 0x141f4dc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = arg1[0xa]

if (result == 0 || (*result & 1) == 0)
    result.b = 0
else
    int64_t arg_8 = 0
    char rax_1 = (*(*arg1 + 0x3e8))(arg2, 0)
    
    if (rax_1 != 0)
        arg_8 = 0
        result = sub_1422aaae0(arg1, 0)
    
    if (rax_1 != 0 && result.b != 0)
        result.b = 1
    else if (sub_142253600(arg1).b == 0)
        result.b = 0
    else
        result.b = 1

char* rcx_2 = arg1[0x13a]

if (rcx_2 == 0 || (*rcx_2 & 1) == 0)
    rcx_2.b = 0
else
    rcx_2.b = 1

if (result.b != rcx_2.b)
    if (result.b == 0)
        return sub_1423cb370(&arg1[0x136])
    
    result = sub_141ef7be0(arg1, &arg1[0x136])
    
    if (result.b != 0)
        result = arg1[0x15]
        arg1[0x13b] = arg1
        
        if (result != 0)
            return sub_1423bc410(&arg1[0x136], result, &result[0x4a8]) __tailcall
        
        result = sub_141ee69e0(arg1)
        
        if (result != 0)
            return sub_1423bc410(&arg1[0x136], result, &result[0x4a8]) __tailcall

return result
