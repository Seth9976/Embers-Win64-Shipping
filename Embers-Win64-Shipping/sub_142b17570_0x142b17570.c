// 函数: sub_142b17570
// 地址: 0x142b17570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r10 = *(arg2 + (sx.q(arg3 - 1) << 1))

if (0x2400 + r10 u<= 0x3ff && arg3 s>= 2)
    uint32_t rdx = zx.d(*(arg2 + (sx.q(arg3 - 2) << 1)))
    
    if ((rdx & 0xfffffc00) == 0xd800)
        int32_t rcx_2 = -2
        
        if (sub_142a9f280(arg1, zx.q(((rdx - 0xd7f7) << 0xa) + zx.d(r10))) != 0)
            rcx_2 = 2
        
        return zx.q(rcx_2)

int32_t rcx_4 = -1

if (sub_142a9f280(arg1, zx.q(r10)) != 0)
    rcx_4 = 1

return zx.q(rcx_4)
