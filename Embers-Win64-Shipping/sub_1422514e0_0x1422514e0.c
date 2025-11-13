// 函数: sub_1422514e0
// 地址: 0x1422514e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm9 = *(arg1 + 0xb4)
float zmm0_1 = tanf(zmm9.d * 0.5f)
int128_t zmm8 = *(arg1 + 0xb8)
*(arg1 + 0x150) = zmm0_1
float zmm0_2 = tanf(zmm8.d * 0.5f)
int128_t zmm7 = *(arg1 + 0xb0)
*(arg1 + 0x154) = zmm0_2
*(arg1 + 0x158) = tanf(zmm7.d * 0.5f)
zmm9.d = zmm9.d f* 0.25f
*(arg1 + 0x15c) = tanf(zmm9.d)
zmm8.d = zmm8.d f* 0.25f
*(arg1 + 0x160) = tanf(zmm8.d)
zmm7.d = zmm7.d f* 0.25f
*(arg1 + 0x164) = tanf(zmm7.d)
*(arg1 + 0x168) = tanf(*(arg1 + 0x9c) * 0.25f)
*(arg1 + 0x16c) = tanf(*(arg1 + 0x98) * 0.25f)
int32_t rax = 0
*(arg1 + 0x170) = tanf(*(arg1 + 0x94) * 0.25f)
*(arg1 + 0x4c) = 0
*(arg1 + 0x48) = 0
int32_t rdx = *(arg1 + 0x54)
int32_t rcx

if (rdx != 1)
    rcx = 0
    
    if (rdx == 0)
        *(arg1 + 0x48) = 1
        rax = 1
else
    *(arg1 + 0x4c) = 1
    rcx = 1

int32_t rdx_1 = *(arg1 + 0x58)

if (rdx_1 == 1)
    rcx |= 2
    *(arg1 + 0x4c) = rcx
else if (rdx_1 == 0)
    rax |= 2
    *(arg1 + 0x48) = rax

int32_t rdx_2 = *(arg1 + 0x5c)

if (rdx_2 == 1)
    rcx |= 4
    *(arg1 + 0x4c) = rcx
else if (rdx_2 == 0)
    rax |= 4
    *(arg1 + 0x48) = rax

int32_t rdx_3 = *(arg1 + 0x60)

if (rdx_3 == 1)
    rcx |= 8
    *(arg1 + 0x4c) = rcx
else if (rdx_3 == 0)
    rax |= 8
    *(arg1 + 0x48) = rax

int32_t rdx_4 = *(arg1 + 0x64)

if (rdx_4 == 1)
    rcx |= 0x10
    *(arg1 + 0x4c) = rcx
else if (rdx_4 == 0)
    rax |= 0x10
    *(arg1 + 0x48) = rax

int32_t rdx_5 = *(arg1 + 0x68)

if (rdx_5 == 1)
    *(arg1 + 0x4c) = rcx | 0x20
else if (rdx_5 == 0)
    *(arg1 + 0x48) = rax | 0x20

if (0f f!= *(arg1 + 0xbc) || not(0f f== *(arg1 + 0xc0)))
    int32_t rax_2 = *(arg1 + 0x50)
    
    if (*(arg1 + 0x54) != 0)
        rax_2 = 1
    
    *(arg1 + 0x50) = rax_2

if ((0f f!= *(arg1 + 0xcc) || not(0f f== *(arg1 + 0xd0))) && *(arg1 + 0x58) != 0)
    *(arg1 + 0x50) |= 2

if ((0f f!= *(arg1 + 0xdc) || not(0f f== *(arg1 + 0xe0))) && *(arg1 + 0x5c) != 0)
    *(arg1 + 0x50) |= 4

int32_t rdx_6 = *(arg1 + 0x64)
int32_t rcx_2 = *(arg1 + 0x68)
int32_t result = *(arg1 + 0x60)

if ((0f f!= *(arg1 + 0x10c) || not(0f f== *(arg1 + 0x110))) && rdx_6 != 0 && rcx_2 != 0
        && result != 0)
    *(arg1 + 0x50) |= 0x20
else
    if ((0f f!= *(arg1 + 0xfc) || not(0f f== *(arg1 + 0x100))) && result != 0)
        *(arg1 + 0x50) |= 0x10
    
    if ((0f f!= *(arg1 + 0xec) || not(0f f== *(arg1 + 0xf0))) && (rdx_6 != 0 || rcx_2 != 0))
        *(arg1 + 0x50) |= 8

return result
