// 函数: src_callback_new
// 地址: 0x141c2c0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    if (arg4 != 0)
        *arg4 = 0
    
    void* result = src_new(arg2, arg3, arg4)
    
    if (result != 0)
        int64_t rax_3 = *(result + 0x38)
        
        if (rax_3 != 0)
            rax_3(result)
        
        *(result + 0x48) = arg5
        __builtin_memset(result, 0, 0x14)
        *(result + 0x58) = 0
        *(result + 0x50) = 0
        *(result + 0x18) = 0x22c
        *(result + 0x40) = arg1
        return result
else if (arg4 != 0)
    *arg4 = 0x11

return 0
