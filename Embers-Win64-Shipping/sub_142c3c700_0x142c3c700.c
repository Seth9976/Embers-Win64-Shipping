// 函数: sub_142c3c700
// 地址: 0x142c3c700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(arg1 u>> 0xc)

if (rax.d u<= 0x1e)
    switch (rax)
        case 0
            uint64_t rcx = zx.q(arg1 - 0x600)
            
            if (rcx.d u<= 0x2e2)
                return zx.q(*(rcx + 0x1436a1390))
        case 1
            if (arg1 - 0x1806 u<= 0xa4)
                return zx.q(*(zx.q(arg1 - 0x1523) + 0x1436a1390))
        case 2
            if (arg1 - 0x200c u<= 0x5d)
                return zx.q(*(zx.q(arg1 - 0x1c84) + 0x1436a1390))
        case 0xa
            if (arg1 - 0xa840 u<= 0x33)
                return zx.q(*(zx.q(arg1 - 0xa45a) + 0x1436a1390))
        case 0x10
            if (arg1 - 0x10ac0 u<= 0x2f)
                return zx.q(*(zx.q(arg1 - 0x106a6) + 0x1436a1390))
            
            if (arg1 - 0x10b80 u<= 0x2f)
                return zx.q(*(zx.q(arg1 - 0x10736) + 0x1436a1390))
            
            if (arg1 - 0x10d00 u<= 0x23)
                return zx.q(*(zx.q(arg1 - 0x10886) + 0x1436a1390))
            
            if (arg1 - 0x10f30 u<= 0x24)
                return zx.q(*(zx.q(arg1 - 0x10a92) + 0x1436a1390))
        case 0x11
            if (arg1 - 0x110bd u<= 0x10)
                return zx.q(*(zx.q(arg1 - 0x10bfa) + 0x1436a1390))
        case 0x1e
            if (arg1 - 0x1e900 u<= 0x4b)
                return zx.q(*(zx.q(arg1 - 0x1e42c) + 0x1436a1390))

return 8
