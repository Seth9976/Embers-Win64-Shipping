// 函数: sub_142c47040
// 地址: 0x142c47040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = arg1 u>> 0xc

if (rax == 0)
    if (arg1 == 0xa0)
        return 0xf0b
    
    uint64_t rax_28 = zx.q(arg1 - 0x28)
    
    if (rax_28.d u<= 0x17)
        return zx.q(*(&data_1436aad60 + (rax_28 << 1)))
    
    if (arg1 - 0xb0 u<= 0x27)
        return zx.q(*(&data_1436aad60 + (zx.q(arg1 - 0x98) << 1)))
    
    if (arg1 - 0x900 u<= 0x4f7)
        return zx.q(*(&data_1436aad60 + (zx.q(arg1 - 0x8c0) << 1)))
else if (rax == 1)
    if (arg1 - 0x1000 u<= 0x9f)
        return zx.q(*(&data_1436aad60 + (zx.q(arg1 - 0xac8) << 1)))
    
    if (arg1 - 0x1780 u<= 0x6f)
        return zx.q(*(&data_1436aad60 + (zx.q(arg1 - 0x11a8) << 1)))
    
    if (arg1 - 0x1cd0 u<= 0x2f)
        return zx.q(*(&data_1436aad60 + (zx.q(arg1 - 0x1688) << 1)))
else if (rax == 2)
    if (arg1 == 0x25cc)
        return 0xf0b
    
    if (arg1 - 0x2008 u<= 0xf)
        return zx.q(*(&data_1436aad60 + (zx.q(arg1 - 0x1990) << 1)))
    
    if (arg1 - 0x2070 u<= 0x17)
        return zx.q(*(&data_1436aad60 + (zx.q(arg1 - 0x19e8) << 1)))
else if (rax == 0xa)
    if (arg1 - 0xa8e0 u<= 0x1f)
        return zx.q(*(&data_1436aad60 + (zx.q(arg1 - 0xa240) << 1)))
    
    if (arg1 - 0xa9e0 u<= 0x1f)
        return zx.q(*(&data_1436aad60 + (zx.q(arg1 - 0xa320) << 1)))
    
    if (arg1 - 0xaa60 u<= 0x1f)
        return zx.q(*(&data_1436aad60 + (zx.q(arg1 - 0xa380) << 1)))

return 0xf00
