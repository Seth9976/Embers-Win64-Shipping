// 函数: sub_140f987f0
// 地址: 0x140f987f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg2
*arg1 = r8

if (r8 != 0)
    int32_t rax_1 = *(r8 + 8)
    
    if (rax_1 != 0)
        *(r8 + 8) = rax_1 + 1
        return arg1
    
    *arg1 = 0

return arg1
