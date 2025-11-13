// 函数: sub_140e65240
// 地址: 0x140e65240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
void* r8 = *(arg1 + 0x1a8)
arg2[1] = r8

if (r8 != 0)
    int32_t rax_1 = *(r8 + 8)
    int64_t r8_1
    
    if (rax_1 == 0)
        arg2[1] = 0
        r8_1 = 0
    else
        *(r8 + 8) = rax_1 + 1
        r8_1 = arg2[1]
    
    if (r8_1 != 0)
        *arg2 = *(arg1 + 0x1a0)

return arg2
