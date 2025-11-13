// 函数: sub_141eab3b0
// 地址: 0x141eab3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x130))

if (result.d s> 0)
    int64_t r10_1 = 0
    void* result_1 = arg1 + 0x68
    int64_t result_2 = result
    void* rcx = nullptr
    result = *(result_1 + 0xc0)
    
    if (result != 0)
        result_1 = result
    
    while (true)
        if (*(rcx + result_1 + 0x28) == arg3 && *(rcx + result_1 + 0x30) == 0
                && *(rcx + result_1 + 0x38) == arg4)
            result = zx.q(*(rcx + result_1 + 0x20) + 3)
            
            if (result.d s< *(arg1 + 0x60))
                break
        
        r10_1 += 1
        rcx += 0x60
        
        if (r10_1 s>= result_2)
            return result
    
    void* rcx_2 = rcx + 8 + result_1
    
    if (arg2 s> *(rcx_2 + 0x1c))
        return sub_141eaba50(rcx_2, arg2)

return result
