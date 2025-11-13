// 函数: sub_1425edbe0
// 地址: 0x1425edbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8_2 = zx.q(arg2) * 0x60 + arg1
uint64_t result = 0

if (0 == *(r8_2 + 0xa4))
    *(r8_2 + 0xa4) = 0
else
    result = zx.q(*(r8_2 + 0xa4))

*(r8_2 + 0xa4)
*(r8_2 + 0xa4) = 0
return result
