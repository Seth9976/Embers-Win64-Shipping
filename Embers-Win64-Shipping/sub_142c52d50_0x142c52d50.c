// 函数: sub_142c52d50
// 地址: 0x142c52d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1
void* rdi = *(result + 0xc0)

if (rdi != 0)
    int64_t arg_8 = arg2
    
    if (arg2 != -1)
        result = sub_142c671a0(rdi + 0xb8, &arg_8, 8)
        
        if (result != 0)
            int64_t r10_1 = *(rdi + 0x60)
            
            if (r10_1 != 0)
                r10_1(*arg1, arg2, 4, *(rdi + 0x68), *(result + 0x18))
            
            arg_8 = arg2
            return sub_142c66f30(rdi + 0xb8, &arg_8, 8)

return result
