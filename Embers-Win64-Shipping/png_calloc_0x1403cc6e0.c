// 函数: png_calloc
// 地址: 0x1403cc6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0

if (arg1 != 0 && arg2 != 0)
    int64_t rax_1 = *(arg1 + 0x428)
    int64_t result_1
    
    if (rax_1 == 0)
        result_1 = malloc(arg2)
    else
        result_1 = rax_1(arg1, arg2)
    
    result = result_1
    
    if (result_1 == 0)
        if ((*(arg1 + 0x15a) & 0x10) != 0)
            return 0
        
        png_error(arg1, "Out of Memory")
        noreturn
    
    memset(result, 0, arg2)

return result
