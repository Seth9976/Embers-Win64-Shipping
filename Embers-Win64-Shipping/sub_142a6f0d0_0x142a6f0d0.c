// 函数: sub_142a6f0d0
// 地址: 0x142a6f0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 - 0x30 u<= 9)
    return 1

if (arg1 - 0x61 u<= 0x19)
    return 0xa

uint32_t rax_3 = zx.d(arg1)

if (rax_3 u<= 0x2026)
    if (rax_3 == 0x2026)
        return 9
    
    if (rax_3 - 0x20 u<= 0x5e)
        switch (rax_3)
            case 0x20
                return 4
            case 0x21
                return 0x11
            case 0x25
                return 0xd
            case 0x2c
                return 2
            case 0x2e
                return 7
            case 0x3a
                return 5
            case 0x3b
                return 3
            case 0x3d
                return 0x10
            case 0x40
                return 6
            case 0x7e
                return 0x12

return 0
