// 函数: sub_142b0cb20
// 地址: 0x142b0cb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s< 0x50)
    if (arg1 s>= 0x25)
        return zx.q((arg1 * 0xf3 - 0x4c30) << 2) | 1
    
    if (arg1 s<= 0x21)
        return 0xfc88c227
    
    return zx.q((arg1 * 0xe6a9 - 0x217f7e) << 2) | 2

if (arg1 s< 0xfb)
    return zx.q((arg1 * 0xf3 - 0xc530) << 2) | 1

if (arg1 s>= 0xfe)
    return 0xb7433

return zx.q((arg1 * 0xe6a9 - 0xe1fea2) << 2) | 2
