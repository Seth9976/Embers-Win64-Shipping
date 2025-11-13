// 函数: sub_142337b80
// 地址: 0x142337b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
*arg3 = 0
int32_t result = 0
*arg4 = 0

if (arg1[1].d s> 0)
    int64_t r11_1 = 0
    
    while (true)
        int64_t rcx = *arg1
        *arg3 = result
        int32_t rdx_1 = *(r11_1 + rcx + 0x38) + r10
        
        if (arg2 s< rdx_1)
            *arg4 = arg2 - r10
            break
        
        result += 1
        r11_1 += 0xe8
        r10 = rdx_1
        
        if (result s>= arg1[1].d)
            return result

return result
