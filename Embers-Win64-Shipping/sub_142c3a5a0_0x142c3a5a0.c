// 函数: sub_142c3a5a0
// 地址: 0x142c3a5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u< 0xc8)
    if ((arg1 & 0xffffff00) == 0xe00)
        if (arg2 == 0)
            uint64_t rcx = zx.q(arg1 - 0xe31)
            
            if (rcx.d u<= 0x9c)
                switch (rcx)
                    case 0, 3, 4, 5, 6, 0x16, 0x1b, 0x1c, 0x1d
                        arg2 = 0xe8
                    case 0x80, 0x83, 0x84, 0x85, 0x86, 0x8a, 0x9b, 0x9c
                        arg2 = 0xe6
                    case 0x8b
                        arg2 = 0xdc
        else if (arg1 == 0xe3a)
            arg2 = 0xde
    
    uint64_t rax_4 = zx.q(arg2 - 3)
    
    if (rax_4.d u<= 0x81)
        switch (rax_4)
            case 0
                return 0xde
            case 7, 0x68
                return 0xe8
            case 8, 0xb
                return 0xe4
            case 0xa
                return 0xd6
            case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x1b, 0x1e, 0x73, 
                    0x7e, 0x80
                return 0xdc
            case 0x17, 0x18, 0x19, 0x1a, 0x1c, 0x1d, 0x1f, 0x20, 0x21, 0x77, 0x81
                return 0xe6

return zx.q(arg2)
