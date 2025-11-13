// 函数: sub_142bb58a0
// 地址: 0x142bb58a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1

if (*(rsi + 0x408) != 0)
    return 0

arg1[0x11].b = 0
*(arg1 + 0x48) = *(arg1 + 0x18)
arg1[0xb] = arg1[5]
arg1[0xc].d = arg1[6].d

if (arg1[9].w u< 1 || *(arg1 + 0x4a) u< 1)
    return 0x97

if ((*(rsi + 0x110) & 8) != 0)
    int32_t rax_2 = sub_142b93e80(sx.d(*(rsi + 0x6a)), arg1[0xa].d)
    int32_t rdx_1 = arg1[0xa].d
    *(arg1 + 0x54) = (rax_2 + 0x20) & 0xffffffc0
    arg1[0xb].d = (sub_142b93e80(sx.d(*(rsi + 0x6c)), rdx_1) + 0x20) & 0xffffffc0
    *(arg1 + 0x5c) = (sub_142b93e80(sx.d(*(rsi + 0x6e)), arg1[0xa].d) + 0x20) & 0xffffffc0

arg1[0x11].b = 1

if (arg2 == 0)
    if ((*(rsi + 0x110) & 8) != 0)
        uint32_t rax_11 = sub_142b91790(zx.d(arg1[9].w) << 6, zx.d(*(rsi + 0x68)))
        uint32_t rcx_5 = zx.d(*(arg1 + 0x4a))
        *(arg1 + 0x4c) = rax_11
        arg1[0xa].d = sub_142b91790(rcx_5 << 6, zx.d(*(rsi + 0x68)))
        arg1[0xc].d = (sub_142b93e80(sx.d(*(rsi + 0x70)), *(arg1 + 0x4c)) + 0x20) & 0xffffffc0
    
    if (arg1[9].w u< *(arg1 + 0x4a))
        *(arg1 + 0x74) = arg1[0xa].d
        *(arg1 + 0x6c) = *(arg1 + 0x4a)
        *(arg1 + 0x64) = sub_142b91790(zx.d(arg1[9].w), zx.d(*(arg1 + 0x4a)))
        arg1[0xd].d = 0x10000
    else
        *(arg1 + 0x74) = *(arg1 + 0x4c)
        *(arg1 + 0x6c) = arg1[9].w
        *(arg1 + 0x64) = 0x10000
        arg1[0xd].d = sub_142b91790(zx.d(*(arg1 + 0x4a)), zx.d(arg1[9].w))
    
    arg1[8] = &arg1[9]
    *(arg1 + 0x19c) = 0xffffffff

return 0
