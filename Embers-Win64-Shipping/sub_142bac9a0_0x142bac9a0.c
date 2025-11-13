// 函数: sub_142bac9a0
// 地址: 0x142bac9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    int32_t r8_2 = neg.d((arg3 - arg2) & 0xffffffc0)
    
    if (r8_2 s> 0)
        r8_2 = 0
    
    return zx.q(r8_2)

int32_t rcx_1 = (arg2 + arg3) & 0xffffffc0

if (rcx_1 s>= 0)
    return zx.q(rcx_1)

return 0
