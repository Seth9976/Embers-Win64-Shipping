// 函数: png_malloc
// 地址: 0x1403cc760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0

if (arg1 != 0 && arg2 != 0)
    int64_t rax = *(arg1 + 0x428)
    
    if (rax == 0)
        result = malloc(arg2)
        
        if (result == 0)
        label_1403cc78a:
            
            if ((*(arg1 + 0x15a) & 0x10) != 0)
                return 0
            
            png_error(arg1, "Out of Memory")
            noreturn
    else
        result = rax(arg1)
        
        if (result == 0)
            goto label_1403cc78a

return result
