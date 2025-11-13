// 函数: sub_142b174f0
// 地址: 0x142b174f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r9 = *arg2

if (0x2800 + r9 u<= 0x3ff && arg3 s>= 2)
    arg3 = zx.d(arg2[1])
    
    if ((arg3 & 0xfffffc00) == 0xdc00)
        int32_t rcx = -2
        
        if (sub_142a9f280(arg1, zx.q(((zx.d(r9) - 0xd7f7) << 0xa) + arg3)) != 0)
            rcx = 2
        
        return zx.q(rcx)

int32_t rcx_1 = -1

if (sub_142a9f280(arg1, zx.q(r9), arg3) != 0)
    rcx_1 = 1

return zx.q(rcx_1)
