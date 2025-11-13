// 函数: sub_142a421d0
// 地址: 0x142a421d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8

if (arg1 u< 0x80000)
    r8 = data_143cc8280
else if (arg1 u< 0x200000)
    r8 = 0x10000
else if (arg1 u>= 0x800000)
    r8 = 0x400000
    
    if (arg1 u< 0x2000000)
        r8 = 0x100000
else
    r8 = 0x40000

if (arg1 u>= not.q(r8))
    return arg1

int64_t r9 = r8 - 1 + arg1

if ((r8 & (r8 - 1)) != 0)
    return r9 - modu.dp.q(0:r9, r8)

return not.q(r8 - 1) & r9
