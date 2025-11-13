// 函数: sub_142bad3f0
// 地址: 0x142bad3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1] = arg3
uint128_t zmm0
uint128_t zmm1

if (arg3 != 0)
    arg1[0x48].d = *(arg3 + 0x94)
    *(arg1 + 0x244) = *(arg3 + 0x98)
    arg1[0x4a].d = *(arg3 + 0xa8)
    *(arg1 + 0x254) = *(arg3 + 0xac)
    arg1[0x49] = *(arg3 + 0xa0)
    arg1[0x4b] = *(arg3 + 0xb0)
    arg1[0x2f].d = *(arg3 + 0x90)
    *(arg1 + 0x198) = *(arg3 + 0x64)
    *(arg1 + 0x1a8) = *(arg3 + 0x74)
    arg1[0x37] = *(arg3 + 0x84)
    uint128_t* rax_8 = *(arg3 + 0x40)
    *(arg1 + 0x17c) = *rax_8
    *(arg1 + 0x18c) = rax_8[1].q
    *(arg1 + 0x194) = *(rax_8 + 0x18)
    arg1[0x4c].d = *(arg3 + 0xb8)
    *(arg1 + 0x264) = *(arg3 + 0xbc)
    *(arg1 + 0x280) = *(arg3 + 0xc0)
    *(arg1 + 0x290) = *(arg3 + 0xd0)
    *(arg1 + 0x2a0) = *(arg3 + 0xe0)
    *(arg1 + 0x1c0) = *(arg3 + 0xf0)
    *(arg1 + 0x1d0) = *(arg3 + 0x100)
    *(arg1 + 0x1e0) = *(arg3 + 0x110)
    *(arg1 + 0x1f0) = *(arg3 + 0x120)
    arg1[0x40].d = *(arg3 + 0x130)
    *(arg1 + 0x224) = *(arg3 + 0x134)
    arg1[0x45] = *(arg3 + 0x138)
    arg1[0x56].w = *(arg3 + 0x140)
    arg1[0x57] = *(arg3 + 0x148)
    *(arg1 + 0x138) = *(arg3 + 0x150)
    *(arg1 + 0x148) = *(arg3 + 0x160)
    *(arg1 + 0x158) = *(arg3 + 0x170)
    *(arg1 + 0x168) = *(arg3 + 0x180)
    __builtin_memset(&arg1[7], 0, 0x40)
    zmm1 = *(arg1 + 0x48)
    *(arg1 + 0x78) = *(arg1 + 0x38)
    zmm0 = *(arg1 + 0x58)
    *(arg1 + 0x88) = zmm1
    zmm1 = *(arg1 + 0x68)
    *(arg1 + 0x98) = zmm0
    zmm0 = *(arg1 + 0x38)
    *(arg1 + 0xa8) = zmm1
    zmm1 = *(arg1 + 0x48)
    *(arg1 + 0xb8) = zmm0
    zmm0 = *(arg1 + 0x58)
    *(arg1 + 0xc8) = zmm1
    zmm1 = *(arg1 + 0x68)
    *(arg1 + 0xd8) = zmm0
    *(arg1 + 0xe8) = zmm1

uint64_t rsi = zx.q(arg1[4].d)
uint64_t rdi_1 = zx.q(zx.d(*(arg2 + 0x188)) + 0x20)
int32_t result_1
int32_t result

if (rsi.d u>= rdi_1.d)
    result = 0
else
    arg1[5] = sub_142b99a90(arg1[2], 1, (rsi << 2).d, (rdi_1 << 2).d, arg1[5], &result_1)
    result = result_1
    
    if (result == 0)
        rsi = zx.q(rdi_1.d)
        result = 0

arg1[4].d = rsi.d

if (result == 0)
    uint32_t rsi_1 = zx.d(*(arg2 + 0x18a))
    uint32_t rdi_2 = arg1[0x46].d
    
    if (rdi_2 u>= rsi_1)
        result = 0
    else
        arg1[0x47] = sub_142b99a90(arg1[2], 1, rdi_2, rsi_1, arg1[0x47], &result_1)
        result = result_1
        
        if (result == 0)
            rdi_2 = rsi_1
            result = 0
    
    arg1[0x46].d = zx.d(rdi_2.w)
    
    if (result == 0)
        *(arg1 + 0x104) = 0
        zmm0 = *(arg1 + 0xf8)
        *(arg1 + 0x2cc) = 0
        zmm1 = *(arg1 + 0x108)
        *(arg1 + 0x78) = zmm0
        zmm0 = *(arg1 + 0x118)
        *(arg1 + 0x88) = zmm1
        zmm1 = *(arg1 + 0x128)
        *(arg1 + 0x98) = zmm0
        zmm0 = *(arg1 + 0xf8)
        *(arg1 + 0xa8) = zmm1
        zmm1 = *(arg1 + 0x108)
        *(arg1 + 0xb8) = zmm0
        zmm0 = *(arg1 + 0x118)
        *(arg1 + 0xc8) = zmm1
        zmm1 = *(arg1 + 0x128)
        *(arg1 + 0xd8) = zmm0
        zmm0 = *(arg1 + 0xf8)
        *(arg1 + 0xe8) = zmm1
        zmm1 = *(arg1 + 0x108)
        *(arg1 + 0x38) = zmm0
        zmm0 = *(arg1 + 0x118)
        *(arg1 + 0x48) = zmm1
        zmm1 = *(arg1 + 0x128)
        *(arg1 + 0x58) = zmm0
        *(arg1 + 0x68) = zmm1

return result
