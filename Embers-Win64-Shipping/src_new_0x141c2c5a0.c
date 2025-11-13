// 函数: src_new
// 地址: 0x141c2c5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    *arg3 = 0

if (arg2 s>= 1)
    void* result = sub_140a82f30(0x60, 0)
    
    if (result != 0)
        memset(result, 0, 0x60)
        *(result + 0x14) = arg2
        *(result + 0x18) = 0x22b
        
        if (sub_141c2a560(result, arg1) != 0)
            if (arg3 != 0)
                *arg3 = 0xa
            
            sub_140a74f90(result)
            return nullptr
        
        int64_t rax_3 = *(result + 0x38)
        
        if (rax_3 != 0)
            rax_3(result)
        
        __builtin_memset(result, 0, 0x14)
        *(result + 0x58) = 0
        *(result + 0x50) = 0
        return result
    
    if (arg3 != 0)
        *arg3 = 1
else if (arg3 != 0)
    *arg3 = 0xb

return nullptr
