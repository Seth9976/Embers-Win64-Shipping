// 函数: png_malloc_warn
// 地址: 0x1403cc830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

int32_t rdi_1 = *(arg1 + 0x158)
*(arg1 + 0x158) = rdi_1 | 0x100000
int64_t result

if (arg2 == 0)
    result = 0
else
    int64_t rax_2 = *(arg1 + 0x428)
    
    if (rax_2 == 0)
        result = malloc(arg2)
        
        if (result == 0)
        label_1403cc86c:
            
            if ((*(arg1 + 0x15a) & 0x10) == 0)
                png_error(arg1, "Out of Memory")
                noreturn
            
            result = 0
    else
        result = rax_2(arg1)
        
        if (result == 0)
            goto label_1403cc86c

*(arg1 + 0x158) = rdi_1
return result
