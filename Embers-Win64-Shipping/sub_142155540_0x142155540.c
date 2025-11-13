// 函数: sub_142155540
// 地址: 0x142155540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x150) = *arg2
*(arg1 + 0x160) = arg2[1]
*(arg1 + 0x170) = arg2[2]

if (&arg1[0x30] != &arg2[3])
    int32_t r8_1 = *(arg1 + 0x1c4)
    int64_t rbp_1 = sx.q(arg2[7].d)
    arg1[0x38].d = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_14088f7d0(&arg1[0x30], rbp_1.d, r8_1)
        memcpy(&arg1[0x30], &arg2[3], (rbp_1 << 4).d)
    else
        *(arg1 + 0x1c4) = 4

*(arg1 + 0x1c8) = *(arg2 + 0x78)
*(arg1 + 0x1d8) = *(arg2 + 0x88)
arg1[0x3d] = *(arg2 + 0x98)
arg1[0x3e] = arg2[0xa].q
arg1[0x3f] = *(arg2 + 0xa8)
arg1[0x40] = arg2[0xb].q
arg1[0x41].d = *(arg2 + 0xb8)
*(arg1 + 0x20c) = *(arg2 + 0xbc)
arg1[0x42].d = arg2[0xc].d
*(arg1 + 0x214) = *(arg2 + 0xc4)
*(arg1 + 0x218) = *(arg2 + 0xc8)
*(arg1 + 0x228) = *(arg2 + 0xd8)
*(arg1 + 0x238) = *(arg2 + 0xe8)
*(arg1 + 0x248) = *(arg2 + 0xf8)
*(arg1 + 0x258) = *(arg2 + 0x108)
*(arg1 + 0x268) = *(arg2 + 0x118)
*(arg1 + 0x278) = *(arg2 + 0x128)
arg1[0x51].b = *(arg2 + 0x138)
return sub_1419ba620(arg1) __tailcall
