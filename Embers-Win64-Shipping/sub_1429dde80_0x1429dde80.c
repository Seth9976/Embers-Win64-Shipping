// 函数: sub_1429dde80
// 地址: 0x1429dde80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr

if (arg1 + 0x17 u<= 0x10000000000)
    int64_t rax_1 = malloc(arg1 + 0x17)
    
    if (rax_1 != 0)
        result = (rax_1 + 0x17) & 0xfffffffffffffff0
        *(result - 8) = rax_1

return result
