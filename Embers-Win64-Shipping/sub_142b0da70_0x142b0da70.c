// 函数: sub_142b0da70
// 地址: 0x142b0da70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = -1

if (arg1 == 0 || arg1 - 9 u<= 1 || arg1 - 0x20 u<= 0x5f || arg1 - 0xa0 u<= 0x5f)
    rdx = 0
else
    uint64_t rax_4 = zx.q(arg1 - 0x102)
    
    if (rax_4.d u<= 0x3c && test_bit(0x1980000003c0fc3f, rax_4))
        return 0x10
    
    uint64_t rax_5 = zx.q(arg1 - 0x141)
    
    if (rax_5.d u<= 0x3d && test_bit(0x3f01e01fe799804f, rax_5))
        return 0x10
    
    if (arg1 - 0x2c7 u<= 0x16 && test_bit(0x560001, arg1 - 0x2c7))
        return 0x10
    
    if (arg1 - 0x108 u<= 0x1f && test_bit(0xf330000f, arg1 - 0x108))
        return 0x11
    
    uint64_t rax_9 = zx.q(arg1 - 0x134)
    
    if (rax_9.d u<= 0x39 && test_bit(0x300030000000003, rax_9))
        return 0x11
    
    if (arg1 - 0x174 u<= 3)
        return 0x12
    
    uint64_t rax_12 = zx.q(arg1 - 0x1e0a)
    
    if (rax_12.d u<= 0x37 && test_bit(0xc0000000300003, rax_12))
        return 0x12
    
    uint64_t rax_13 = zx.q(arg1 - 0x1e56)
    
    if (rax_13.d u> 0x2f)
        if (arg1 - 0x1ef2 u<= 1)
            return 0x12
    else if (test_bit(0xfc0000300c03, rax_13) || arg1 - 0x1ef2 u<= 1)
        return 0x12
    
    if (arg1 - 0x152 u<= 1 || arg1 == 0x178 || arg1 == 0x20ac)
        return 0x13
    
    if (arg1 - 0xe01 u<= 0x39 || arg1 - 0xe3f u<= 0x1c)
        return 0xf
    
    uint64_t rax_18 = zx.q(arg1 - 0x100)
    
    if (rax_18.d u<= 0x2f && test_bit(0xcf0c00cc0003, rax_18))
        return 0xe
    
    uint64_t rax_19 = zx.q(arg1 - 0x136)
    
    if (rax_19.d u<= 0x3d && test_bit(0x303f000300f18067, rax_19))
        return 0xe
    
    if (arg1 - 0x2bc u<= 1 || arg1 - 0x384 u<= 0x4a || arg1 == 0x2015)
        return 2
    
    if (arg1 == 0x60c)
        return 3
    
    uint64_t rax_23 = zx.q(arg1 - 0x61b)
    
    if (rax_23.d u> 0x37)
        if (arg1 - 0x660 u<= 0xd || arg1 == 0x200b || arg1 - 0xfe70 u<= 2 || arg1 == 0xfe74
                || arg1 - 0xfe76 u<= 0x48)
            return 3
    else if (test_bit(0xffffe0ffffffd1, rax_23) || arg1 - 0x660 u<= 0xd || arg1 == 0x200b
            || arg1 - 0xfe70 u<= 2 || arg1 == 0xfe74 || arg1 - 0xfe76 u<= 0x48)
        return 3
    
    if (arg1 - 0x5d0 u<= 0x1a || arg1 == 0x2017 || arg1 == 0x203e)
        return 0xd
    
    if (arg1 - 0x401 u<= 0x5e || arg1 == 0x2116)
        return 0xc
    
    if (arg1 - 0x11e u> 0x13)
        if (arg1 - 0x218 u<= 3)
            return 1
    else if (test_bit(0xc0003, arg1 - 0x11e) || arg1 - 0x218 u<= 3)
        return 1

return zx.q(rdx)
