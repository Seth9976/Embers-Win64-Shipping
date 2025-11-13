// 函数: sub_142bacb00
// 地址: 0x142bacb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    int32_t r8_3 = neg.d((arg3 - arg2 + 0x20) & 0xffffffc0)
    
    if (r8_3 s> 0)
        r8_3 = 0
    
    return zx.q(r8_3)

int32_t rcx_2 = (arg3 + 0x20 + arg2) & 0xffffffc0

if (rcx_2 s>= 0)
    return zx.q(rcx_2)

return 0
